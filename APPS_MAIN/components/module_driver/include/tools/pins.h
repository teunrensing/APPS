#ifndef PINS_H
#define PINS_H
#include <stdint.h>

typedef enum{
    pin_type_physical, pin_type_shift_register, pin_type_io_expander, pin_type_adc_chan
}pin_type_t;

typedef struct{
    pin_type_t type;
    uint8_t location;
}pin_t;


#endif