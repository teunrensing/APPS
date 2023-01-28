#ifndef DRIVER_TYPES_H
#define DRIVER_TYPES_H
#include "motor_driver.h"
#include "led_driver.h"
#include "tens_driver.h"

/**
 * @brief The supported driver types for the module slots.
 */
typedef enum{
    UNUSED_DRIVER, LED_DRIVER_TYPE, TENS_DRIVER_TYPE, MOTOR_DRIVER_TYPE
}driver_types_t;

/**
 * @brief Union which stores all drivers
 *  Only one driver will be used at a time.
 *  So an union is a nice space saving measure.
 */
typedef union {
    led_drv_t led_driver;
    tens_drv_t tens_driver;
    motor_drv_t motor_driver;
}driver_t;

#endif