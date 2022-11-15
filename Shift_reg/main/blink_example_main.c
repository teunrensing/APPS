/* Blink Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "led_strip.h"
#include "sdkconfig.h"
#include "pins.h"

/* Depends on how many shift registers are used in serie(1 = 7, 2 = 15, 3 = 23 , etc).*/
#define SR_ARRAY_LENGTH 7

static const char *TAG = "example";
static char shift_reg_state[SR_ARRAY_LENGTH] = {"00000000"};
 
static void setup_shift_register(void)
{
    gpio_config_t io_config;

    io_config.intr_type = GPIO_INTR_DISABLE;
    io_config.mode = GPIO_MODE_OUTPUT;
    io_config.pin_bit_mask = ((1ULL << OUTPUT_ENABLE)| (1ULL << RCLK)| (1ULL << SER)| (1ULL << SRSCLK));
    io_config.pull_down_en=0;
    io_config.pull_up_en=0;
    
    gpio_config(&io_config);
}

static void shift_register_update_memory(void)
{
    /*Update shift register memory*/
    for (size_t i = SR_ARRAY_LENGTH-1; i > 0; i--)
    {
        gpio_set_level(SER, shift_reg_state[i]);
        gpio_set_level(RCLK, 1);
        gpio_set_level(RCLK, 0);
    }
}

static void shift_register_update_output(void)
{
    /*Set array from memory to output*/
    gpio_set_level(SRSCLK, 1);
    gpio_set_level(SRSCLK, 0);
}

static void shift_register_insert(int position, char value)
{
    /*Array for extended gpio*/

    /*Set value on a position in the array*/
    if (position >= 0 && position <= SR_ARRAY_LENGTH)
    {
            shift_reg_state[position] = value;  
    }
}

void app_main(void)
{

    setup_shift_register();/*
    gpio_set_level(OUTPUT_ENABLE, 1);
    gpio_set_level(RCLK, 1);
    gpio_set_level(SER, 1);
    gpio_set_level(SRSCLK, 1);*/
    ESP_LOGI(TAG, "shiftregister = %s",shift_reg_state );
    while (1)
    {
        if (shift_reg_state[1] == '0')
        {
            shift_register_insert(1, '1');  // Insert on position 0 a 1 to make shift_register_state[0] = 1
            shift_register_insert(5, '1');  // Insert on position 5 a 1 to make shift_register_state[5] = 1
            ESP_LOGI(TAG, "shiftregister = %s",shift_reg_state );
            shift_register_update_memory(); // Update shift register memory with shift_register_state
            shift_register_update_output(); // Update shift register output
        }
        vTaskDelay(10000 / portTICK_PERIOD_MS);
        if (shift_reg_state[1] == '1')
        {
            shift_register_insert(1, '0');  // Insert on position 1 a 0 to make shift_register_state[0] = 1
            shift_register_insert(5, '0');  // Insert on position 5 a 0 to make shift_register_state[5] = 1
            ESP_LOGI(TAG, "shiftregister = %s",shift_reg_state );
            shift_register_update_memory(); // Update shift register memory with shift_register_state
            shift_register_update_output(); // Update shift register output
        }
        vTaskDelay(CONFIG_BLINK_PERIOD / portTICK_PERIOD_MS);
   
    }
}
