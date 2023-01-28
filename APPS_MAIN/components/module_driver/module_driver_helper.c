#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_freertos_hooks.h"
#include "freertos/semphr.h"
#include "esp_system.h"
#include "esp_log.h"
#include "module_driver_helper.h"
#include "tools/module_recognition.h"
#include "led_strip.h"
#include "driver/gpio.h"

SemaphoreHandle_t module_driver_Semaphore = NULL;

void module_driver1_interval_task(void *pvParameter) {
    module_slot_drv_t *module_slot_1 = (module_slot_drv_t *) pvParameter;
    uint8_t interval;
    while (1) {
        interval = module_slot_1->parameters.interval;
        while (module_slot_1->parameters.state == 1) {
            turn_module_on(module_slot_1);
            vTaskDelay(interval * 500 / portTICK_RATE_MS);
            turn_module_off(module_slot_1);
            vTaskDelay(interval * 500 / portTICK_RATE_MS);
        }
        turn_module_off(module_slot_1);
    }
}


void module_driver_task(void *pvParameter) {
    QueueHandle_t *queue = (QueueHandle_t *) pvParameter;

    TaskHandle_t module_driver_1_interval;
    module_slot_drv_t Module_slot_1;
    Module_slot_1.module_slot_num = 1;
#ifdef CONFIG_TWO_MODULE_SLOTS
    module_slot_drv_t Module_slot_2;
#endif
    init_module_slot_pins(&Module_slot_1);
    init_module_recognition(&Module_slot_1);
    module_types_t module_type = get_module_type(&Module_slot_1);
    Module_slot_1.driver_1_type = LED_DRIVER_TYPE;
    Module_slot_1.driver_2_type = UNUSED_DRIVER;
    Module_slot_1.parameters.kleur[0] = 10;
    Module_slot_1.parameters.kleur[1] = 10;
    Module_slot_1.parameters.kleur[2] = 10;
    Module_slot_1.parameters.intensiteit = 100;
    Module_slot_1.parameters.interval = 0;
    Module_slot_1.parameters.state = 0;
    init_module_drivers(&Module_slot_1);
    module_driver_Semaphore = xSemaphoreCreateMutex();
    xTaskCreatePinnedToCore(module_driver1_interval_task,
                            "module driver 1 interval",
                            2048,
                            (void *) &Module_slot_1,
                            0,
                            &module_driver_1_interval,
                            0);
    while (1) {
        if (queue != NULL) {
            module_parameters_t parameters;
            if (xQueueReceive(*queue,
                              &parameters,
                              (TickType_t) 10) == pdPASS) {
                printf("Kleur r: %d g: %d b: %d i: %d iv: %d\n", parameters.kleur[0], parameters.kleur[1],
                       parameters.kleur[2], parameters.intensiteit, parameters.interval);

                Module_slot_1.parameters = parameters;
                xTaskAbortDelay(module_driver_1_interval);
            }
        }
    }
    vTaskDelete(NULL);
}