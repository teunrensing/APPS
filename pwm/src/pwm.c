#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/mcpwm.h"
#include "driver/ledc.h"
#include "pwm.h"

#define LEDC_MODE LEDC_HIGH_SPEED_MODE
#define MCPWM_UNIT MCPWM_UNIT_0
void set_mcpwm_output(pwm_t pwm)
{
    // Set up MCPWM module
    mcpwm_gpio_init(MCPWM_UNIT, pwm.mc.signal, pwm.glob.pin);

    // Set MCPWM frequency (in Hz)
    mcpwm_set_frequency(MCPWM_UNIT, pwm.mc.timer, pwm.glob.frequency);

    // Set MCPWM duty cycle (0-100)
    mcpwm_set_duty(MCPWM_UNIT, pwm.mc.timer, ((pwm.mc.opr) ? MCPWM_OPR_A : MCPWM_OPR_B), pwm.glob.duty_cycle);

    // Start MCPWM output
    mcpwm_start(MCPWM_UNIT, pwm.mc.timer);
}
void set_led_pwm_output(pwm_t pwm)
{
    // Set up LED PWM module
    ledc_timer_config_t ledc_timer = {
        .duty_resolution = LEDC_TIMER_13_BIT, // resolution of PWM duty
        .freq_hz = pwm.glob.frequency,        // frequency of PWM signal
        .speed_mode = LEDC_MODE,              // timer mode
        .timer_num = pwm.ledc.timer           // timer index
    };
    ledc_timer_config(&ledc_timer);
    // Prepare and then apply the LEDC PWM channel configuration
    ledc_channel_config_t ledc_channel = {
        .speed_mode = LEDC_MODE,
        .channel = pwm.ledc.channel,
        .timer_sel = pwm.ledc.timer,
        .intr_type = pwm.ledc.interrupt,
        .gpio_num = pwm.glob.pin,
        .duty = 0, // Set duty to 0%
        .hpoint = 0};
    ledc_channel_config(&ledc_channel);
    // Set LED PWM duty cycle
    ledc_set_duty(LEDC_MODE, pwm.ledc.channel, pwm.glob.duty_cycle);

    // Start LED PWM output
    ledc_update_duty(LEDC_MODE, pwm.ledc.channel);
}

void change_led_pwm_duty_cycle(pwm_t pwm, int duty_cycle)
{
    // Set LED PWM duty cycle
    ledc_set_duty(LEDC_MODE, pwm.ledc.channel, pwm.glob.duty_cycle);

    // Start LED PWM output
    ledc_update_duty(LEDC_MODE, pwm.ledc.channel);
}

void change_mc_pwm_duty_cycle(pwm_t pwm, int duty_cycle)
{
    mcpwm_set_duty(MCPWM_UNIT, pwm.mc.timer, ((pwm.mc.opr) ? MCPWM_OPR_A : MCPWM_OPR_B), duty_cycle);
}

void change_mc_pwm_frequency(pwm_t pwm, int frequency)
{
      mcpwm_set_frequency(MCPWM_UNIT, pwm.mc.timer, frequency);
}