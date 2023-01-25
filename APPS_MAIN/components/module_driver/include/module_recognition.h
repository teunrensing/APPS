#ifndef MODULE_RECOGNITION_H
#define MODULE_RECOGNITION_H

#include "module_driver.h"

esp_err_t init_module_recognition(module_slot_drv_t* slot);
module_types_t get_module_type(module_slot_drv_t* slot);


#endif