#ifndef TENS_DRIVER_H
#define TENS_DRIVER_H
#include "../tools/pins.h"
#include "hal/mcpwm_types.h"
#include "driver/mcpwm.h"
#include "feedback_parameters.h"

/**
 * @brief The tens driver struct which contains all data needed to drive a tens module.
 */
typedef struct {
    pin_t FB_pin;
    pin_t PWM_pin;
    pin_t status_pin;
    mcpwm_unit_t tens_pwm_config;
}tens_drv_t;

/**
 * @brief This function initializes a tens_driver instance
 *
 * @param motor The tens_driver instance to be initialized
 * 
 * @return
 *     - ESP_OK  Success!
 *     - ESP_ERR Error!
 */
esp_err_t initialize_tens_driver(tens_drv_t* tens);

/**
 * @brief This function turns on a tens_driver instance
 *
 * @param tens The tens_driver instance to be turned on
 * @param parameters The feedback parameters used to set up the tens driver before turning on.
 * 
 * @return
 *     - ESP_OK  Success!
 *     - ESP_ERR Error!
 */
esp_err_t turn_on_tens_driver(tens_drv_t* tens, module_parameters_t parameters);

/**
 * @brief This function turns off a tens_driver instance
 *
 * @param tens The tens_driver instance to be turned off
 * 
 * @return
 *     - ESP_OK  Success!
 *     - ESP_ERR Error!
 */
esp_err_t turn_off_tens_driver(tens_drv_t* tens);

#endif