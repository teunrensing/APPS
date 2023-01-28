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

/**
 * @brief This function initializes a led_driver instance
 *
 * @param led The led_driver instance to be initialized
 * @param pin The pin to assign the led_driver to
 * 
 * @return
 *     - ESP_OK  Success!
 *     - ESP_ERR Error!
 */
esp_err_t initialize_led_driver(led_drv_t* led, gpio_num_t pin);

/**
 * @brief This function turns on a led_driver instance
 *
 * @param led The led_driver instance to be turned on
 * @param parameters The feedback parameters used to set up the led driver before turning on.
 * 
 * @return
 *     - ESP_OK  Success!
 *     - ESP_ERR Error!
 */
esp_err_t turn_on_led_driver(led_drv_t * led, module_parameters_t* parameters);

/**
 * @brief This function turns off a led_driver instance
 *
 * @param led The led_driver instance to be turned off
 * 
 * @return
 *     - ESP_OK  Success!
 *     - ESP_ERR Error!
 */
esp_err_t turn_off_led_driver(led_drv_t * led);
#endif