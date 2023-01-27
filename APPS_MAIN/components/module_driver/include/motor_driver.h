#ifndef MOTOR_DRIVER_H
#define MOTOR_DRIVER_H
#include "module_driver.h"
esp_err_t initialize_motor_driver(motor_drv_t* motor);
esp_err_t turn_on_motor_driver(motor_drv_t* motor);
esp_err_t turn_off_motor_driver(motor_drv_t* motor);
#endif