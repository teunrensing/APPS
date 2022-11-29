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
#include "sdkconfig.h"
#include "shift_reg.h"

void config_shift_register(void)
{
    gpio_config_t io_config = {};
    io_config.intr_type = GPIO_INTR_DISABLE;
    io_config.mode = GPIO_MODE_OUTPUT;
    io_config.pin_bit_mask = ((1ULL << OE) | (1ULL << RCLK) | (1ULL << SER) | (1ULL << SRSCLK));
    io_config.pull_down_en = 0;
    io_config.pull_up_en = 0;
    gpio_set_level(OE, 0);
    gpio_set_level(SER, 0);
    gpio_set_level(RCLK, 0);
    gpio_set_level(SRSCLK, 0);
    gpio_config(&io_config);
}

void shift_register_update_memory(void)
{
    /*Update shift register memory*/
    for (int i = SR_LENGTH; i >= 0; i--)
    {
        gpio_set_level(SER, ((shift_reg_state[i] == '1') ? HIGH : LOW));
        gpio_set_level(SRSCLK, HIGH);
        gpio_set_level(SRSCLK, LOW);
    }
}

void shift_register_update_output(void)
{
    /*Set array from memory to output*/
    gpio_set_level(RCLK, HIGH);
    gpio_set_level(RCLK, LOW);
}

void shift_register_insert(int position, uint8_t value)
{
    /*Array for extended gpio*/

    if (position >= 0 && position <= SR_LENGTH)
    {
        if (value == '1')
        {
            shift_reg_state[position] = '1';
        }
        else
        {
            shift_reg_state[position] = '0';
        }
    }
}