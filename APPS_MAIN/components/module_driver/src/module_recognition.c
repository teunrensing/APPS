#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "sdkconfig.h"
#include <driver/adc.h>
#include "esp_adc_cal.h"
#include "module_recognition.h"

#define DEFAULT_VREF    1100        //Use adc2_vref_to_gpio() to obtain a better estimate
#define NO_OF_SAMPLES   100          //Multisampling

static esp_adc_cal_characteristics_t *adc_chars;
static const adc_bits_width_t width = ADC_WIDTH_BIT_12;
static const adc_atten_t atten = ADC_ATTEN_DB_11;

static void check_efuse(void)
{
    //Check if TP is burned into eFuse
    if (esp_adc_cal_check_efuse(ESP_ADC_CAL_VAL_EFUSE_TP) == ESP_OK) {
        printf("eFuse Two Point: Supported\n");
    } else {
        printf("eFuse Two Point: NOT supported\n");
    }
    //Check Vref is burned into eFuse
    if (esp_adc_cal_check_efuse(ESP_ADC_CAL_VAL_EFUSE_VREF) == ESP_OK) {
        printf("eFuse Vref: Supported\n");
    } else {
        printf("eFuse Vref: NOT supported\n");
    }
}

static void print_char_val_type(esp_adc_cal_value_t val_type)
{
    if (val_type == ESP_ADC_CAL_VAL_EFUSE_TP) {
        printf("Characterized using Two Point Value\n");
    } else if (val_type == ESP_ADC_CAL_VAL_EFUSE_VREF) {
        printf("Characterized using eFuse Vref\n");
    } else {
        printf("Characterized using Default Vref\n");
    }
}


esp_err_t init_module_recognition(module_slot_drv_t* slot){
    check_efuse();
    module_slot_pins_t *pins = &(slot->pins);
    //Configure ADC
    uint8_t adc_unit = pins->ID_ADC_NUM; 
    if (pins->ID_ADC_NUM == ADC_UNIT_1) {
        adc1_config_width(width);
        adc1_config_channel_atten(pins->ID_ADC_CH, atten);
    } else {
        adc2_config_channel_atten((adc2_channel_t)pins->ID_ADC_CH, atten);
    }

    //Characterize ADC
    adc_chars = calloc(1, sizeof(esp_adc_cal_characteristics_t));
    esp_adc_cal_value_t val_type = esp_adc_cal_characterize(adc_unit, atten, width, DEFAULT_VREF, adc_chars);
    print_char_val_type(val_type);

    return ESP_OK;
}

module_types_t get_module_type(module_slot_drv_t* slot){
    module_slot_pins_t *pins = &(slot->pins);
    //Configure ADC
    uint8_t adc_unit = pins->ID_ADC_NUM; 
    uint32_t adc_reading = 0;
    for (int i = 0; i < NO_OF_SAMPLES; i++) {
            if (adc_unit == ADC_UNIT_1) {
                adc_reading += adc1_get_raw((adc1_channel_t)pins->ID_ADC_CH);
            } else {
                int raw;
                adc2_get_raw((adc2_channel_t)pins->ID_ADC_CH, width, &raw);
                adc_reading += raw;
            }
     }
    adc_reading /= NO_OF_SAMPLES;
    //Convert adc_reading to voltage in mV
    uint32_t voltage = esp_adc_cal_raw_to_voltage(adc_reading, adc_chars);
    printf("Raw: %d\tVoltage: %dmV\t proto: %d\n", adc_reading, voltage, adc_reading < 1950 && adc_reading > 1875 ? 1 : 0);
    return LED_ADDRESSABLE;
}
