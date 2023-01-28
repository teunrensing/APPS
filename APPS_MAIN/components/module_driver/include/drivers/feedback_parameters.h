#ifndef FEEDBACK_PARAMETERS_H
#define FEEDBACK_PARAMETERS_H
#include <stdint.h>

typedef struct{
    uint8_t intensiteit;
    uint8_t kleur[3];
    uint8_t interval;
    uint8_t state;
}module_parameters_t;

#endif