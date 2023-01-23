#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "sdkconfig.h"
#include "module_driver.h"

esp_err_t init_module_slot_pins(module_slot_drv_t* slot){
    module_slot_pins_t *module_pins = &(slot->pins);

    #ifdef MODULE_SLOTS_SHARE_I2C_BUS
        module_pins->I2C_SCL = CONFIG_MODULE_SLOTS_I2C_BUS_MAPPING_SCL;
        module_pins->I2C_SDA = CONFIG_MODULE_SLOTS_I2C_BUS_MAPPING_SDA;
    #endif

    if(slot->module_slot_num == 1){
        module_pins->PWM1.location = CONFIG_MODULE_SLOT_1_PWM_CH0;
        module_pins->PWM2.location = CONFIG_MODULE_SLOT_1_PWM_CH1;

        #ifdef CONFIG_MODULE_1_TTL1_IS_PHYSICAL_PIN
        module_pins->TTL1.location = CONFIG_MODULE_SLOT_1_TTL1_PHYSICAL;
        module_pins->TTL1.type = pin_type_physical;
        #else
        module_pins->TTL1.location = CONFIG_MODULE_SLOT_1_TTL1_SR;
        module_pins->TTL1.type = pin_type_shift_register;
        #endif

        #ifdef CONFIG_MODULE_1_TTL2_IS_PHYSICAL_PIN
        module_pins->TTL2.location = CONFIG_MODULE_SLOT_1_TTL2_PHYSICAL;
        module_pins->TTL2.type = pin_type_physical;
        #else
        module_pins->TTL2.location = CONFIG_MODULE_SLOT_1_TTL2_SR;
        module_pins->TTL2.type = pin_type_shift_register;
        #endif

        #ifdef CONFIG_MODULE_1_TTL3_IS_PHYSICAL_PIN
        module_pins->TTL3.location = CONFIG_MODULE_SLOT_1_TTL3_PHYSICAL;
        module_pins->TTL3.type = pin_type_physical;
        #else
        module_pins->TTL3.location = CONFIG_MODULE_SLOT_1_TTL3_IO_EXP;
        module_pins->TTL3.type = pin_type_io_expander;
        #endif

        #ifdef CONFIG_MODULE_1_STATUS_IS_PHYSICAL_PIN
        module_pins->STATUS.location = CONFIG_MODULE_SLOT_1_STATUS_PHYSICAL;
        module_pins->STATUS.type = pin_type_physical;
        #else
        module_pins->STATUS.location = CONFIG_MODULE_SLOT_1_STATUS_SR;
        module_pins->STATUS.type = pin_type_shift_register;
        #endif
        
        module_pins->ID_ADC_CH = CONFIG_MODULE_SLOT_1_ID_ADC_CH;
        module_pins->ID_ADC_NUM = CONFIG_MODULE_SLOT_1_ID_ADC_NUM;
    }
    else{
        module_pins->PWM1.location = CONFIG_MODULE_SLOT_2_PWM_CH0;
        module_pins->PWM2.location = CONFIG_MODULE_SLOT_2_PWM_CH1;

        #ifdef CONFIG_MODULE_2_TTL1_IS_PHYSICAL_PIN
        module_pins->TTL1.location = CONFIG_MODULE_SLOT_2_TTL1_PHYSICAL;
        module_pins->TTL1.type = pin_type_physical;
        #else
        module_pins->TTL1.location = CONFIG_MODULE_SLOT_2_TTL1_SR;
        module_pins->TTL1.type = pin_type_shift_register;
        #endif

        #ifdef CONFIG_MODULE_2_TTL2_IS_PHYSICAL_PIN
        module_pins->TTL2.location = CONFIG_MODULE_SLOT_2_TTL2_PHYSICAL;
        module_pins->TTL2.type = pin_type_physical;
        #else
        module_pins->TTL2.location = CONFIG_MODULE_SLOT_2_TTL2_SR;
        module_pins->TTL2.type = pin_type_shift_register;
        #endif

        #ifdef CONFIG_MODULE_2_TTL3_IS_PHYSICAL_PIN
        module_pins->TTL3.location = CONFIG_MODULE_SLOT_2_TTL3_PHYSICAL;
        module_pins->TTL3.type = pin_type_physical;
        #else
        module_pins->TTL3.location = CONFIG_MODULE_SLOT_2_TTL3_IO_EXP;
        module_pins->TTL3.type = pin_type_io_expander;
        #endif

        #ifdef CONFIG_MODULE_2_STATUS_IS_PHYSICAL_PIN
        module_pins->STATUS.location = CONFIG_MODULE_SLOT_2_STATUS_PHYSICAL;
        module_pins->STATUS.type = pin_type_physical;
        #else
        module_pins->STATUS.location = CONFIG_MODULE_SLOT_2_STATUS_SR;
        module_pins->STATUS.type = pin_type_shift_register;
        #endif
        module_pins->ID_ADC_CH = CONFIG_MODULE_SLOT_2_ID_ADC_CH;
        module_pins->ID_ADC_NUM = CONFIG_MODULE_SLOT_2_ID_ADC_NUM;
    }
    return ESP_OK;
}