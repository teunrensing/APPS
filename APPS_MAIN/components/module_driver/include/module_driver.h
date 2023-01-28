#ifndef MODULE_DRIVER_H
#define MODULE_DRIVER_H
#include "led_strip.h"
#include "driver/gpio.h"
#include "tools/pins.h"
#include "drivers/driver_types.h"

typedef enum {
    LED_ADDRESSABLE, TENS, MOTOR
}module_types_t;


typedef struct {
    uint8_t I2C_SCL;
    uint8_t I2C_SDA;
    pin_t PWM1;
    pin_t PWM2; 
    pin_t TTL1;
    pin_t TTL2;
    pin_t TTL3;
    pin_t STATUS;
    uint8_t ID_ADC_NUM;
    uint8_t ID_ADC_CH;
}module_slot_pins_t;

typedef struct{
    uint8_t module_slot_num;
    module_slot_pins_t pins;
    module_types_t type;
    driver_t module_driver_1;
    driver_t module_driver_2;
    driver_types_t driver_1_type;
    driver_types_t driver_2_type;
    module_parameters_t parameters;
}module_slot_drv_t;

esp_err_t init_module_slot_pins(module_slot_drv_t* slot);
esp_err_t init_module_drivers(module_slot_drv_t* slot);
esp_err_t turn_module_on(module_slot_drv_t* slot);
esp_err_t turn_module_off(module_slot_drv_t* slot);
esp_err_t refresh_module(module_slot_drv_t* slot);
esp_err_t set_module_parameters(module_parameters_t* parameters);

#endif