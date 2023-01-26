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
    #ifdef TWO_MODULE_SLOTS
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
    // driver_t *module_driver_1 = &(Module_slot_1.module_driver_1);
    // led_drv_t *led_driver = &(module_driver_1->led_driver);
    // led_driver->rmt_channel = 0;
    // gpio_set_direction(GPIO_NUM_4, GPIO_MODE_OUTPUT);
    // led_driver->led_strip_handle= led_strip_init(0, 4, 2);
    // led_strip_t *p = led_driver->led_strip_handle;
    // p->clear(p, 100);
    // vTaskDelay(10 / portTICK_PERIOD_MS);
    // p->set_pixel(p, 0, 10,10,10);
    // p->refresh(p, 100);
    while(1){
        if( queue != NULL )
   {
      /* Receive a message from the created queue to hold complex struct AMessage
      structure.  Block for 10 ticks if a message is not immediately available.
      The value is read into a struct AMessage variable, so after calling
      xQueueReceive() xRxedStructure will hold a copy of xMessage. */
      module_parameters_t parameters;
      if( xQueueReceive( *queue,
                         &parameters,
                         ( TickType_t ) 10 ) == pdPASS )
      {
         /* xRxedStructure now contains a copy of xMessage. */
         printf("Kleur r: %d g: %d b: %d i: %d iv: %d\n", parameters.kleur[0], parameters.kleur[1], parameters.kleur[2], parameters.intensiteit, parameters.interval);
         Module_slot_1.parameters = parameters;
         if(parameters.intensiteit == 0){
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