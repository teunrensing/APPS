#ifndef PWM_H
#define PWM_H

#include "driver/mcpwm.h"
#include "driver/ledc.h"

typedef struct
{
    mcpwm_io_signals_t signal;
    mcpwm_timer_t timer;
    bool opr;
} mc_pwm_init_t;

typedef struct
{
    int pin;
    uint32_t frequency;
    uint32_t duty_cycle;
} pwm_global_t;

typedef struct
{
    ledc_timer_t timer;
    ledc_channel_t channel;
    ledc_intr_type_t interrupt;   
} ledc_pwm_init_t;

typedef struct
{
    ledc_pwm_init_t ledc;
    mc_pwm_init_t mc;
    pwm_global_t glob;
} pwm_t;

void set_mcpwm_output(pwm_t pwm);
void set_led_pwm_output(pwm_t pwm);
void change_led_pwm_duty_cycle(pwm_t pwm, int duty_cycle);
void change_mc_pwm_duty_cycle(pwm_t pwm, int duty_cycle);
void change_mc_pwm_frequency(pwm_t pwm, int frequency);
#endif