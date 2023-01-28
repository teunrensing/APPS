#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "sdkconfig.h"
#include "led_strip.h"
#include "drivers/led_driver.h"

esp_err_t initialize_led_driver(led_drv_t* led, gpio_num_t pin){
    led->rmt_channel = 0;
    gpio_set_direction(pin, GPIO_MODE_OUTPUT);
    led->led_strip_handle = led_strip_init(led->rmt_channel, pin, 2);
    printf("Initialized led! Channel: %d Pin: %d \n",led->rmt_channel, pin);
    led->led_strip_handle->clear(led->led_strip_handle, 100);
    return ESP_OK;
}

esp_err_t turn_on_led_driver(led_drv_t* led, module_parameters_t * parameters){
    led_drv_t* led_driver = led;
    led_strip_t *p = led_driver->led_strip_handle;
    uint8_t *kleur = parameters->kleur;
    p->set_pixel(p, 0, kleur[0],kleur[1],kleur[2]);
    p->refresh(p, 100);
    printf("Turn on led! Color r: %d Color g: %d Color b: %d\n",kleur[0], kleur[1], kleur[2]);
    return ESP_OK;
}

esp_err_t turn_off_led_driver(led_drv_t* led){
    led_drv_t* led_driver = led;
    led_strip_t *p = led_driver->led_strip_handle;
    p->clear(p, 100);
    return ESP_OK;
}