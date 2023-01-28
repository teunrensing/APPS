#ifndef MOTOR_DRIVER_H
#define MOTOR_DRIVER_H
#include "../tools/pins.h"
#include "feedback_parameters.h"
#include "esp_check.h"

/**
 * @brief The motor driver struct which contains all data needed to drive a motor.
 */
typedef struct{
    pin_t* DIR0;
    pin_t* DIR1;
    pin_t* DIR2;
    pin_t* DIR3;
}motor_drv_t;

/**
 * @brief This function initializes a motor_driver instance
 *
 * @param motor The motor_driver instance to be initialized
 * 
 * @return
 *     - ESP_OK  Success!
 *     - ESP_ERR Error!
 */
esp_err_t initialize_motor_driver(motor_drv_t* motor);

/**
 * @brief This function turns on a motor_driver instance
 *
 * @param motor The motor_driver instance to be turned on
 * @param parameters The feedback parameters used to set up the motor driver before turning on.
 * 
 * @return
 *     - ESP_OK  Success!
 *     - ESP_ERR Error!
 */
esp_err_t turn_on_motor_driver(motor_drv_t* motor, module_parameters_t* parameters);

/**
 * @brief This function turns off a motor_driver instance
 *
 * @param motor The motor_driver instance to be turned off
 * 
 * @return
 *     - ESP_OK  Success!
 *     - ESP_ERR Error!
 */
esp_err_t turn_off_motor_driver(motor_drv_t* motor);
#endif