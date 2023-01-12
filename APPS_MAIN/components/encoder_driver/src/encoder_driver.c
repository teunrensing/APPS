#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "sdkconfig.h"
#include "encoder_driver.h"

/**
*  @brief encoder driver interrupt handler
*/
static void  IRAM_ATTR encoder_driver_interrupt_handler(void *args){
    encoder_drv_t* enc = (encoder_drv_t*) args;
    if(gpio_get_level(enc->encoder_dir_pin))
         enc->encoder_pulse_count--;
    else
         enc->encoder_pulse_count++;
}

esp_err_t config_encoder(encoder_drv_t* encoder_instance){
    gpio_pad_select_gpio(encoder_instance->encoder_clk_pin);
    gpio_set_direction(encoder_instance->encoder_clk_pin, GPIO_MODE_INPUT);
    gpio_pad_select_gpio(encoder_instance->encoder_dir_pin);
    gpio_set_direction(encoder_instance->encoder_dir_pin, GPIO_MODE_INPUT);
    encoder_instance->encoder_pulse_count = 0;
    return ESP_OK;
}

esp_err_t register_encoder_isr(encoder_drv_t* encoder_instance){
    gpio_intr_enable(encoder_instance->encoder_clk_pin);
    gpio_set_intr_type(encoder_instance->encoder_clk_pin, GPIO_INTR_POSEDGE);
    gpio_install_isr_service(0);
    gpio_isr_handler_add(encoder_instance->encoder_clk_pin, encoder_driver_interrupt_handler, (void *)encoder_instance);
    return ESP_OK;
}

int8_t get_encoder_count(encoder_drv_t* encoder_instance){
    return encoder_instance->encoder_pulse_count;
}

void reset_encoder_count(encoder_drv_t* encoder_instance){
    encoder_instance->encoder_pulse_count = 0;
}

uint8_t get_encoder_btn_status(encoder_drv_t* encoder_instance){
    return get_io_pin_input_status(encoder_instance->io_exp_handle, encoder_instance->encoder_btn_pin);
}