
/* GPIO Example

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
#define SR_ARRAY_LENGTH 8

static const char *TAG = "example";
static uint8_t shift_reg_state=0;
 
static void setup_shift_register(void)
{
    gpio_config_t io_config = {};

    io_config.intr_type = GPIO_INTR_DISABLE;
    io_config.mode = GPIO_MODE_OUTPUT;
    io_config.pin_bit_mask = ((1ULL << OE)| (1ULL << RCLK)| (1ULL << SER)| (1ULL << SRSCLK));
    io_config.pull_down_en=0;
    io_config.pull_up_en=0;
    gpio_set_level(OE,0);
    gpio_set_level(SER, 0);
    gpio_set_level(RCLK, 0);
    gpio_set_level(SRSCLK, 0);
    gpio_config(&io_config);
}

static void shift_register_update_memory(void)
{
    /*Update shift register memory*/
    for (uint8_t i = 0; i <8; i++)
    {
        uint8_t lvl = (shift_reg_state & (1<<i));
        gpio_set_level(SER, lvl);
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

static void shift_register_insert(int position, uint8_t value)
{
    /*Array for extended gpio*/

    /*Set value on a position in the array*/
    if (position >= 0 && position < SR_ARRAY_LENGTH)
    {
           if(value==1){ 
            shift_reg_state|= (1<<position);
           }  else{
            shift_reg_state&= ~(1<<position);
           }
    }
}

void app_main(void)
{

    setup_shift_register();
    while (1)
    {
            //shift_register_insert(1, 1);  // Insert on position 0 a 1 to make shift_register_state[0] = 1
            shift_register_insert(5, 1);  // Insert on position 5 a 1 to make shift_register_state[5] = 1
            ESP_LOGI(TAG, "shiftregister = %d",shift_reg_state );
            shift_register_update_memory(); // Update shift register memory with shift_register_state
            shift_register_update_output(); // Update shift register output
        vTaskDelay(10000 / portTICK_PERIOD_MS);
           // shift_register_insert(1, 0);  // Insert on position 0 a 1 to make shift_register_state[0] = 1
            //shift_register_insert(5, 0);  // Insert on position 5 a 1 to make shift_register_state[5] = 1
            ESP_LOGI(TAG, "shiftregister = %d",shift_reg_state );
            shift_register_update_memory(); // Update shift register memory with shift_register_state
            shift_register_update_output(); // Update shift register output
    }
}