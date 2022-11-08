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
#define SRARRAY_LENGTH 18

static const char *TAG = "example";
static char shift_reg_state[SRARRAY_LENGTH];

static void setup_shift_register(void){
    ESP_LOGI(TAG, "Setup GPIO shift register.");
    for(int i =OUTPUT_ENABLE; i!=33;i++){
          gpio_reset_pin(i);
        /* Set the GPIO as a push/pull output */
        gpio_set_direction(i, GPIO_MODE_OUTPUT);
        if(i==SRSCLK){i=i+4;} 
    }
}

static void shift_register_update_memory(void){
   /*Update shift register memory*/
    for (size_t i = SRARRAY_LENGTH; i>0; i--)
    {
        gpio_set_level(RCLK, 0);
        gpio_set_level(SER, shift_reg_state[i]);
        gpio_set_level(RCLK, 1);
    } 
}

static void shift_register_update_output(void){
    /*Set array from memory to output*/
    gpio_set_level(SRSCLK, 1);
    gpio_set_level(SRSCLK, 0);
}

static void shift_register_insert(int position, char value){
    /*Array for extended gpio*/
    
    /*Set value on a position in the array*/
    if(position>=0 && position <= SRARRAY_LENGTH){
        if(value == '1' || value=='0'){
            shift_reg_state[position]= value;
        }
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
        if(shift_reg_state==0){
            shift_register_insert(0,'1');// Insert on position 0 a 1 to make shift_register_state[0] = 1
            shift_register_insert(5,'1');// Insert on position 5 a 1 to make shift_register_state[5] = 1
            shift_register_update_memory();// Update shift register memory with shift_register_state
             shift_register_update_output();// Update shift register output
        }
        vTaskDelay(CONFIG_BLINK_PERIOD / portTICK_PERIOD_MS);
    }
}
