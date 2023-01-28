#ifndef DRIVER_TYPES_H
#define DRIVER_TYPES_H
#include "motor_driver.h"
#include "led_driver.h"
#include "tens_driver.h"

typedef enum{
    UNUSED_DRIVER, LED_DRIVER_TYPE, TENS_DRIVER_TYPE, MOTOR_DRIVER_TYPE
}driver_types_t;

typedef union {
    led_drv_t led_driver;
    tens_drv_t tens_driver;
    motor_drv_t motor_driver;
}driver_t;

#endif