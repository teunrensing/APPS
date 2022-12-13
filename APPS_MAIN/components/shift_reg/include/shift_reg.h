#ifndef SHIFT_REG_H
#define SHIFT_REG_H

#include <stdio.h>
#include "driver/gpio.h"

#define SR_LENGTH 8
#define HIGH 1
#define LOW 0
#define SHIFT_MASK(x) (1ULL << x)
#define PBM_SR_CONFIG(w, x, y, z) (SHIFT_MASK(w) | SHIFT_MASK(x) | SHIFT_MASK(y) | SHIFT_MASK(z))

typedef struct
{

    char get[SR_LENGTH];

} shift_reg_state;

typedef struct
{
    gpio_num_t OE,
        RCLK,
        SER,
        SRCLK;

} shift_register_pins;

typedef struct
{
    shift_register_pins sr_pins;
    gpio_config_t io_config;
    shift_reg_state sr_state;

} shift_register;

// set the pins of the shift register
void set_pins_shift_register(shift_register *config, gpio_num_t OE, gpio_num_t RCLK, gpio_num_t SER, gpio_num_t SRCLK);
// config a shift register
void config_shift_register(shift_register config);
// shift register memory update
void shift_register_update_memory(shift_register sr_config);
// shift register set what is in the memory of the shift register to the output
void shift_register_update_output(shift_register sr_config);
// set a pin high or low based on the position, value and which shift shift register
void shift_register_set(int position, char value, shift_register *config);
// set all low
void shift_register_setup(shift_register *config);
// Set a shift register in series
void set_pins_serie_shift_register(shift_register config1, shift_register *config2);
// combining 2 shift registers in series set function
void shift_register_com_update_memory(shift_register config1, shift_register config2);
#endif