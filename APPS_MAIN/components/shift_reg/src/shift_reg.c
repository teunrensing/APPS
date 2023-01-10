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
    gpio_config(&io_config);
    gpio_set_level(OE, 0);
    gpio_set_level(SER, 0);
    gpio_set_level(RCLK, 0);
    gpio_set_level(SRSCLK, 0);
}
void shift_bit(uint8_t bit, uint8_t val){
    static uint16_t origval = 0;
    if(val == 1)
        origval |= (1 << bit);
    else
        origval &= ~(1 << bit);
    for(uint8_t i=0; i< 8; i++){
        uint8_t lvl = (origval & ( 1<<i)) != 0;
        gpio_set_level(SER, lvl);
        gpio_set_level(SRSCLK, 1);
        gpio_set_level(SRSCLK, 0);
    }
    gpio_set_level(RCLK, 1);
    gpio_set_level(RCLK, 0);
}