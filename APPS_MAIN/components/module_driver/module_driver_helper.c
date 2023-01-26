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


void module_driver_task(void *pvParameter){
    QueueHandle_t *queue = (QueueHandle_t *)pvParameter;
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

    init_module_drivers(&Module_slot_1);
    while(1){
        if( queue != NULL )
   {
      module_parameters_t parameters;
      if( xQueueReceive( *queue,
                         &parameters,
                         ( TickType_t ) 10 ) == pdPASS )
      {
         printf("Kleur r: %d g: %d b: %d i: %d iv: %d\n", parameters.kleur[0], parameters.kleur[1], parameters.kleur[2], parameters.intensiteit, parameters.interval);
         Module_slot_1.parameters = parameters;
         if(parameters.state == 0){
            turn_module_off(&Module_slot_1);
         }
         else{
            turn_module_on(&Module_slot_1);
         }
      }
   }
    }
    vTaskDelete(NULL);
}