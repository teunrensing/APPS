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

static const char *TAG = "example";

static char shift_reg_state = 00000000;

static void setup_shift_register(void){
 ESP_LOGI(TAG, "Setup GPIO shift register.");
 for(int i =data_pin; i!=srclck;i++){
       gpio_reset_pin(i);
    /* Set the GPIO as a push/pull output */
    gpio_set_direction(i, GPIO_MODE_OUTPUT);
 }

}

static void shift_register(void){
 /* Set the GPIO level according to the state (LOW or HIGH)*/
//gpio_set_level(BLINK_GPIO, s_led_state);

}

void app_main(void)
{

    setup_shift_register();

    while (1) {
        /* Toggle the LED state */
        //s_led_state = !s_led_state;
        vTaskDelay(CONFIG_BLINK_PERIOD / portTICK_PERIOD_MS);
    }
}
