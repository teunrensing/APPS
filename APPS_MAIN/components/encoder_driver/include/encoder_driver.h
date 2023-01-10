#ifndef ENCODER_DRIVER_H
#define ENCODER_DRIVER_H
#include <TCA9534.h>

typedef struct{
    TCA9534_IO_EXP* io_exp_handle;
    TCA9534_PINS encoder_btn_pin;
    gpio_num_t encoder_clk_pin;
    gpio_num_t encoder_dir_pin;
    int8_t encoder_pulse_count;
}encoder_drv_t;

esp_err_t config_encoder(encoder_drv_t* encoder_instance);
esp_err_t register_encoder_isr(encoder_drv_t* encoder_instance);
int8_t get_encoder_count(encoder_drv_t* encoder_instance);
uint8_t get_encoder_btn_status(encoder_drv_t* encoder_instance);
void reset_encoder_count(encoder_drv_t* encoder_instance);
#endif