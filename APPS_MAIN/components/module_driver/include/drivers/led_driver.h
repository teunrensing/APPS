#ifndef LED_DRIVER_H
#define LED_DRIVER_H
#include "feedback_parameters.h"

/**
 * @brief The led driver struct which contains all data needed to drive a led.
 */
typedef struct {
     led_strip_t* led_strip_handle;
     uint8_t rmt_channel;
}led_drv_t;

esp_err_t initialize_led_driver(led_drv_t* led, gpio_num_t pin);

esp_err_t turn_on_led_driver(led_drv_t * led, module_parameters_t* parameters);

esp_err_t turn_off_led_driver(led_drv_t * led);
#endif