
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
#include "modules.hpp"
#include "shift_reg.hpp"


extern "C"{
void app_main(void)
{
    Shift_register shift_reg(GPIO_NUM_25,GPIO_NUM_26,GPIO_NUM_32,GPIO_NUM_27,15);
    
    while (1)
    {
        for(int i = 0; i<15;i++){
            shift_reg.shift_reg_set(i,'1');
        }
        shift_reg.shift_reg_update_memory();
        shift_reg.shift_reg_update_output();

          for(int i = 0; i<15;i++){
            shift_reg.shift_reg_set(i,'0');
        }
        shift_reg.shift_reg_update_memory();
        shift_reg.shift_reg_update_output();
    }
}
}