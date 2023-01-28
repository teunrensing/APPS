#ifndef PINS_H
#define PINS_H
#include <stdint.h>

/**
 * @brief The pin type enum which can be used to define how a pin is used.
 */
typedef enum{
    pin_type_physical, pin_type_shift_register, pin_type_io_expander, pin_type_adc_chan
}pin_type_t;

/**
 * @brief The pin struct which wraps the pin_type info and location neatly in to a struct.
 */
typedef struct{
    pin_type_t type;
    uint8_t location;
}pin_t;


#endif