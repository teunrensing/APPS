#ifndef LED_DRIVER_H
#define LED_DRIVER_H
#include "module_driver.h"
esp_err_t initialize_led_driver(led_drv_t* led, gpio_num_t pin);
esp_err_t turn_on_led_driver(module_slot_drv_t* slot);
esp_err_t turn_off_led_driver(module_slot_drv_t* slot);
#endif