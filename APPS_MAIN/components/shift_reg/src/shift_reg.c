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

void set_pins_shift_register(shift_register *config, gpio_num_t sr_OE, gpio_num_t sr_RCLK, gpio_num_t sr_SER, gpio_num_t sr_SRCLK)
{
    //Set the pins for the shift register
    config->sr_pins.OE = sr_OE;     // output enable
    config->sr_pins.RCLK = sr_RCLK; 
    config->sr_pins.SER = sr_SER;
    config->sr_pins.SRCLK = sr_SRCLK;
}

void config_shift_register(shift_register config)
{
    config.io_config.intr_type = GPIO_INTR_DISABLE;
    config.io_config.mode = GPIO_MODE_OUTPUT;
    config.io_config.pin_bit_mask = PBM_SR_CONFIG(config.sr_pins.OE, config.sr_pins.SER, config.sr_pins.RCLK, config.sr_pins.SRCLK);
    config.io_config.pull_down_en = LOW;
    config.io_config.pull_up_en = LOW;
    gpio_config(&config.io_config);
    gpio_set_level(config.sr_pins.OE, LOW);
    gpio_set_level(config.sr_pins.SER, LOW);
    gpio_set_level(config.sr_pins.RCLK, LOW);
    gpio_set_level(config.sr_pins.SRCLK, LOW);
}

void shift_register_update_memory(shift_register sr_config)
{
    /*Update shift register memory*/
    for (int i = SR_LENGTH; i >= 0; i--)
    {
        gpio_set_level(sr_config.sr_pins.SER, ((sr_config.sr_state.get[i] == '1') ? HIGH : LOW));
        gpio_set_level(sr_config.sr_pins.SRCLK, HIGH);
        gpio_set_level(sr_config.sr_pins.SRCLK, LOW);
    }
}

void shift_register_update_output(shift_register sr_config)
{
    /*Set array from memory to output*/
    gpio_set_level(sr_config.sr_pins.RCLK, HIGH);
    gpio_set_level(sr_config.sr_pins.RCLK, LOW);
}

void shift_register_set(int position, char value, shift_register *config)
{
    /*Array for extended gpio*/

    if (position >= 0 && position <= SR_LENGTH)
    {
        if (value == '1' || value == '0')
        {
            if (value == '1')
            {
                config->sr_state.get[position] = '1';
            }
            else
            {
                config->sr_state.get[position] = '0';
            }
        }
        else
        {
            printf("not a correct value, %c", value);
        }
    }
    else
    {
        printf("not a correct position %d", position);
    }
}
void shift_register_setup(shift_register *config)
{
    for (int i = 0; i < 8; i++)
    {
        shift_register_set(i, '0', config);
    }
}
void set_pins_serie_shift_register(shift_register config1, shift_register *config2)
{
    config2->sr_pins.OE = config1.sr_pins.OE;
    config2->sr_pins.SER = config1.sr_pins.SER;
    config2->sr_pins.SRCLK = config1.sr_pins.SRCLK;
    config2->sr_pins.RCLK = config1.sr_pins.RCLK;
}
void shift_register_com_update_memory(shift_register config1, shift_register config2)
{
    /*Update shift register memory*/

    for (int i = 15; i >= 0; i--)
    {
        if (i < 8)
        {
            gpio_set_level(config1.sr_pins.SER, ((config1.sr_state.get[i] == '1') ? HIGH : LOW));
        }
        else
        {
            gpio_set_level(config1.sr_pins.SER, ((config2.sr_state.get[i-SR_LENGTH] == '1') ? HIGH : LOW));
        }
        gpio_set_level(config1.sr_pins.SRCLK, HIGH);
        gpio_set_level(config1.sr_pins.SRCLK, LOW);
    }
}