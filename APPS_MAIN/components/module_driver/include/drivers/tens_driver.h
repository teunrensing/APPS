#ifndef TENS_DRIVER_H
#define TENS_DRIVER_H
#include "../tools/pins.h"
#include "hal/mcpwm_types.h"
#include "driver/mcpwm.h"
#include "feedback_parameters.h"

typedef struct {
    pin_t FB_pin;
    pin_t PWM_pin;
    pin_t status_pin;
    mcpwm_unit_t tens_pwm_config;
}tens_drv_t;


esp_err_t initialize_tens_driver(tens_drv_t* tens);
esp_err_t turn_on_tens_driver(tens_drv_t* tens, module_parameters_t parameters);
esp_err_t turn_off_tens_driver(tens_drv_t* tens);

#endif