#ifndef MOTOR_DRIVER_H
#define MOTOR_DRIVER_H
#include "../tools/pins.h"
#include "feedback_parameters.h"
#include "esp_check.h"

typedef struct{
    pin_t* DIR0;
    pin_t* DIR1;
    pin_t* DIR2;
    pin_t* DIR3;
}motor_drv_t;

esp_err_t initialize_motor_driver(motor_drv_t* motor);
esp_err_t turn_on_motor_driver(motor_drv_t* tens, module_parameters_t* parameters);
esp_err_t turn_off_motor_driver(motor_drv_t* motor);
#endif