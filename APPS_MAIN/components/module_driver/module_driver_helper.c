#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_freertos_hooks.h"
#include "freertos/semphr.h"
#include "esp_system.h"
#include "esp_log.h"
#include "module_driver_helper.h"
#include "module_recognition.h"
#include "led_strip.h"
#include "driver/gpio.h"
void moduledriverTask(void *pvParameter){
    module_slot_drv_t Module_slot_1;
    Module_slot_1.module_slot_num = 1;
    #ifdef TWO_MODULE_SLOTS
    module_slot_drv_t Module_slot_2;
    #endif
    init_module_slot_pins(&Module_slot_1);
    init_module_recognition(&Module_slot_1);
    module_types_t module_type = get_module_type(&Module_slot_1);
    driver_t *module_driver_1 = &(Module_slot_1.module_driver_1);
    led_drv_t *led_driver = &(module_driver_1->led_driver);
    led_driver->rmt_channel = 0;
    gpio_set_direction(GPIO_NUM_4, GPIO_MODE_OUTPUT);
    led_driver->led_strip_handle= led_strip_init(0, 4, 2);
    led_strip_t *p = led_driver->led_strip_handle;
    p->clear(p, 100);
    vTaskDelay(10 / portTICK_PERIOD_MS);

    while(1){
        vTaskDelay(100/portTICK_PERIOD_MS);   
        p->set_pixel(p, 0, 10,1,25);
        p->refresh(p, 100);
    }
    vTaskDelete(NULL);
}