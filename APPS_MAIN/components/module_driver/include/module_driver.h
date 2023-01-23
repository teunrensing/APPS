#ifndef MODULE_DRIVER_H
#define MODULE_DRIVER_H
#include "led_strip.h"
typedef enum{
    pin_type_physical, pin_type_shift_register, pin_type_io_expander, pin_type_adc_chan
}pin_type_t;

typedef struct{
    pin_type_t type;
    uint8_t location;
}pin_t;

typedef enum {
    LED_ADDRESSABLE, TENS, MOTOR
}module_types_t;

typedef struct {
     led_strip_t* led_strip_handle;
     uint8_t rmt_channel;
}led_drv_t;

typedef struct {
    uint8_t test;
}tens_drv_t;

typedef struct {
    uint8_t test;
}motor_drv_t;

typedef union {
    led_drv_t led_driver;
    tens_drv_t tens_driver;
    motor_drv_t motor_driver;
}driver_t;


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
}module_slot_drv_t;

esp_err_t init_module_slot_pins(module_slot_drv_t* slot);
esp_err_t init_module_drivers(module_slot_drv_t* slot);

#endif