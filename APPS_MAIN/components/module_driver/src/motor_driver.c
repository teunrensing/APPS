#include "drivers/motor_driver.h"
#include "driver/gpio.h"
#include "shift_reg.h"

void initialize_pin(pin_t *pin){
    if(pin->type == pin_type_physical)
        gpio_set_direction(pin->location, GPIO_MODE_OUTPUT);
}

void set_pin_level(pin_t *pin, uint8_t level){
    if(pin->type == pin_type_physical)
        gpio_set_level(pin->location, level);
    else if(pin->type == pin_type_shift_register)
        shift_bit(pin->location, level);
}

esp_err_t initialize_motor_driver(motor_drv_t* motor){
    initialize_pin(motor->DIR0);
    initialize_pin(motor->DIR1);
    initialize_pin(motor->DIR2);
    initialize_pin(motor->DIR3);
    set_pin_level(motor->DIR0, 0);
    set_pin_level(motor->DIR1, 0);
    set_pin_level(motor->DIR2, 0);
    set_pin_level(motor->DIR3, 0);
    return ESP_OK;
}
esp_err_t turn_on_motor_driver(motor_drv_t* motor, module_parameters_t* parameters){
    set_pin_level(motor->DIR0, 1);
    set_pin_level(motor->DIR1, 0);
    set_pin_level(motor->DIR2, 1);
    set_pin_level(motor->DIR3, 0);
    return ESP_OK;
}
esp_err_t turn_off_motor_driver(motor_drv_t* motor){
    set_pin_level(motor->DIR0, 0);
    set_pin_level(motor->DIR1, 0);
    set_pin_level(motor->DIR2, 0);
    set_pin_level(motor->DIR3, 0);
    return ESP_OK;
}