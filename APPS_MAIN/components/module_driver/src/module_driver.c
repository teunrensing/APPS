#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "sdkconfig.h"
#include "module_driver.h"
#include "drivers/led_driver.h"
#include "drivers/motor_driver.h"

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

esp_err_t init_module_drivers(module_slot_drv_t* slot){
if(slot->driver_1_type == LED_DRIVER_TYPE)
    initialize_led_driver(&(slot->module_driver_1.led_driver), slot->pins.PWM1.location);
else if (slot->driver_1_type == MOTOR_DRIVER_TYPE)
    initialize_motor_driver(&(slot->module_driver_1.motor_driver));
if(slot->driver_2_type == LED_DRIVER_TYPE)
    initialize_led_driver(&(slot->module_driver_2.led_driver), slot->pins.PWM2.location);
else if (slot->driver_2_type == MOTOR_DRIVER_TYPE)
    initialize_motor_driver(&(slot->module_driver_2.motor_driver));
return ESP_OK;
}
esp_err_t turn_module_on(module_slot_drv_t* slot){
if(slot->driver_1_type == LED_DRIVER_TYPE)
    turn_on_led_driver(&(slot->module_driver_1.led_driver), &(slot->parameters));
else if (slot->driver_1_type == MOTOR_DRIVER_TYPE)
    turn_on_motor_driver(&(slot->module_driver_1.motor_driver), &(slot->parameters));
return ESP_OK;
}

esp_err_t turn_module_off(module_slot_drv_t* slot){
if(slot->driver_1_type == LED_DRIVER_TYPE)
    turn_off_led_driver(&(slot->module_driver_1.led_driver));
else if (slot->driver_1_type == MOTOR_DRIVER_TYPE)
    turn_off_motor_driver(&(slot->module_driver_1.motor_driver));
return ESP_OK;
}
esp_err_t refresh_module(module_slot_drv_t* slot){
turn_module_on(slot);
return ESP_OK;
}
esp_err_t set_module_parameters(module_parameters_t* parameters){
return ESP_OK;
}