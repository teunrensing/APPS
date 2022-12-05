#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "sdkconfig.h"
/*
#define OE GPIO_NUM_25
#define RCLK GPIO_NUM_26
#define SER GPIO_NUM_32
#define SRSCLK GPIO_NUM_27
*/
#define HIGH 1
#define LOW 0

class Shift_register
{
    const char *TAG = "example";

private:
    char shift_reg_state[17] = {"0000000000000000"};
    gpio_num_t OE, RCLK, SER, SRSCLK;
    int SR_LENGTH;

public:
    Shift_register(gpio_num_t OE_SU, gpio_num_t RCLK_SU, gpio_num_t SER_SU, gpio_num_t SRSCLk_SU, int set_sr_length);
    void shift_reg_setup(void);
    char shift_reg_get_position(int position);
    void shift_reg_set(int position, char value);
    void shift_reg_update_output(void);
    void shift_reg_update_memory(void);
};
Shift_register::Shift_register(gpio_num_t OE_SU, gpio_num_t RCLK_SU, gpio_num_t SER_SU, gpio_num_t SRSCLk_SU, int set_sr_length)
{
    OE = OE_SU;
    RCLK = RCLK_SU;
    SER = SER_SU;
    SRSCLK = SRSCLk_SU;
    SR_LENGTH=set_sr_length;
    gpio_config_t io_config = {};
    io_config.intr_type = GPIO_INTR_DISABLE;
    io_config.mode = GPIO_MODE_OUTPUT;
    io_config.pin_bit_mask = ((1ULL << OE) | (1ULL << RCLK) | (1ULL << SER) | (1ULL << SRSCLK));
    io_config.pull_down_en = GPIO_PULLDOWN_DISABLE;
    io_config.pull_up_en = GPIO_PULLUP_DISABLE;
    gpio_set_level(OE, LOW);
    gpio_set_level(SER, LOW);
    gpio_set_level(RCLK, LOW);
    gpio_set_level(SRSCLK, LOW);
    gpio_config(&io_config);
}