#ifndef TENS_DRIVER_H
#define TENS_DRIVER_H
#include "module_driver.h"
esp_err_t initialize_tens_driver(tens_drv_t* tens);
esp_err_t turn_on_tens_driver(tens_drv_t* tens);
esp_err_t turn_off_tens_driver(tens_drv_t* tens);

#endif