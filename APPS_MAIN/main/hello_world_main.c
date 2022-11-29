/* Hello World Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "sdkconfig.h"
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_system.h"
#include "esp_spi_flash.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "esp_freertos_hooks.h"
#include "freertos/semphr.h"
#include "esp_system.h"
#include "driver/gpio.h"

/* Littlevgl specific */
#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#include "lvgl_helpers.h"
#include "ui.h"
//#include "lv_examples/src/lv_demo_benchmark/lv_demo_benchmark.h"


/*********************
 *      DEFINES
 *********************/
#define TAG "demo"
#define LV_TICK_PERIOD_MS 1
# define LV_HOR_RES_MAX 320
# define LV_VER_RES_MAX 480
# define SPI_HOST_MAX 3
/**********************
 *  STATIC PROTOTYPES
 **********************/
static void lv_tick_task(void *arg);
static void guiTask(void *pvParameter);
static void create_demo_application(void);


void app_main(void)
{
    printf("Hello world!\n");

    /* Print chip information */
    esp_chip_info_t chip_info;
    esp_chip_info(&chip_info);
    printf("This is %s chip with %d CPU core(s), WiFi%s%s, ",
            CONFIG_IDF_TARGET,
            chip_info.cores,
            (chip_info.features & CHIP_FEATURE_BT) ? "/BT" : "",
            (chip_info.features & CHIP_FEATURE_BLE) ? "/BLE" : "");

    printf("silicon revision %d, ", chip_info.revision);

    printf("%dMB %s flash\n", spi_flash_get_chip_size() / (1024 * 1024),
            (chip_info.features & CHIP_FEATURE_EMB_FLASH) ? "embedded" : "external");

    printf("Minimum free heap size: %d bytes\n", esp_get_minimum_free_heap_size());
    gpio_pad_select_gpio(GPIO_NUM_32);
    gpio_set_direction(GPIO_NUM_32, GPIO_MODE_INPUT);
        gpio_pad_select_gpio(GPIO_NUM_34);
    gpio_set_direction(GPIO_NUM_34, GPIO_MODE_INPUT);
        gpio_pad_select_gpio(GPIO_NUM_35);
    gpio_set_direction(GPIO_NUM_35, GPIO_MODE_INPUT);
    xTaskCreatePinnedToCore(guiTask, "gui", 4096*2, NULL, 0, NULL, 1);
}



SemaphoreHandle_t xGuiSemaphore;

int enc_get_new_moves(){
    bool turnstate = gpio_get_level(GPIO_NUM_35);
    bool dir = gpio_get_level(GPIO_NUM_34);
    if(turnstate && dir) return 1;
    else if(turnstate && !dir) return -1;
    else return 0;
}

bool send_pressed(lv_indev_drv_t * drv, lv_indev_data_t*data){
    //if(data->state == LV_INDEV_STATE_PR)
        //lv_event_send(ui_Startup, LV_EVENT_CLICKED, NULL);
    return false;
}

bool enc_pressed(){
    return !gpio_get_level(GPIO_NUM_32);
}

bool encoder_read(lv_indev_drv_t * drv, lv_indev_data_t*data){
  data->enc_diff = enc_get_new_moves();
  //printf("Reading encoder! \n");
  if(!enc_pressed()){
      data->state = LV_INDEV_STATE_PR;
      lv_event_send(ui_Startup, LV_EVENT_CLICKED, NULL);
  } 
  else data->state = LV_INDEV_STATE_REL;
  
  return false; /*No buffering now so no more data read*/
}



static void guiTask(void *pvParameter) {

    (void) pvParameter;
    xGuiSemaphore = xSemaphoreCreateMutex();

    lv_init();

    /* Initialize SPI or I2C bus used by the drivers */
    lvgl_driver_init();

    lv_color_t* buf1 = heap_caps_malloc(DISP_BUF_SIZE * sizeof(lv_color_t), MALLOC_CAP_DMA);
    assert(buf1 != NULL);

    /* Use double buffered when not working with monochrome displays */
    lv_color_t* buf2 = heap_caps_malloc(DISP_BUF_SIZE * sizeof(lv_color_t), MALLOC_CAP_DMA);
    assert(buf2 != NULL);

    static lv_disp_draw_buf_t disp_buf;

    uint32_t size_in_px = DISP_BUF_SIZE;


    /* Initialize the working buffer depending on the selected display.
     * NOTE: buf2 == NULL when using monochrome displays. */
    lv_disp_draw_buf_init(&disp_buf, buf1, buf2, size_in_px);

    lv_disp_drv_t disp_drv;
    lv_disp_drv_init(&disp_drv);
    disp_drv.flush_cb = disp_driver_flush;

    /* When using a monochrome display we need to register the callbacks:
     * - rounder_cb
     * - set_px_cb */
    disp_drv.hor_res = 320;
    disp_drv.ver_res=480;
    disp_drv.physical_hor_res = -1;
    disp_drv.physical_ver_res = -1;

    disp_drv.draw_buf = &disp_buf;
    lv_disp_drv_register(&disp_drv);
    lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);      /*Basic initialization*/
    indev_drv.type = LV_INDEV_TYPE_ENCODER;
    indev_drv.read_cb = encoder_read;
    indev_drv.feedback_cb = send_pressed;
    lv_indev_t * my_indev = lv_indev_drv_register(&indev_drv);
    lv_indev_enable(my_indev, 1);

    /* Register an input device when enabled on the menuconfig */
    //lv_indev_drv_t indev_drv;
    //lv_indev_drv_init(&indev_drv);
    //indev_drv.read_cb = touch_driver_read;
    //indev_drv.type = LV_INDEV_TYPE_POINTER;
    //lv_indev_drv_register(&indev_drv);


    /* Create and start a periodic timer interrupt to call lv_tick_inc */
    const esp_timer_create_args_t periodic_timer_args = {
            .callback = &lv_tick_task,
            .name = "periodic_gui"
    };
    esp_timer_handle_t periodic_timer;
    ESP_ERROR_CHECK(esp_timer_create(&periodic_timer_args, &periodic_timer));
    ESP_ERROR_CHECK(esp_timer_start_periodic(periodic_timer, LV_TICK_PERIOD_MS * 1000));
    lv_group_t * g = lv_group_create();
    lv_group_set_default(g);
    lv_indev_set_group(my_indev, g);
    /* Create the demo application */
    //create_demo_application();
    ui_init();
    //vTaskDelay(pdMS_TO_TICKS(1000));
    //lv_event_send(ui_Startup, LV_EVENT_CLICKED, NULL);
    while (1) {
        /* Delay 1 tick (assumes FreeRTOS tick is 10ms */
        vTaskDelay(pdMS_TO_TICKS(10));

        /* Try to take the semaphore, call lvgl related function on success */
        if (pdTRUE == xSemaphoreTake(xGuiSemaphore, portMAX_DELAY)) {
            lv_task_handler();
            xSemaphoreGive(xGuiSemaphore);
        }
    }

    /* A task should NEVER return */
    free(buf1);
    free(buf2);

    vTaskDelete(NULL);
}

static void create_demo_application(void)
{
    /* When using a monochrome display we only show "Hello World" centered on the
     * screen */

    /* Otherwise we show the selected demo */

    //lv_demo_widgets();

    /* use a pretty small demo for monochrome displays */
    /* Get the current screen  */
    lv_obj_t * scr = lv_disp_get_scr_act(NULL);
    /*Create a Label on the currently active screen*/
    lv_obj_t * label1 =  lv_label_create(scr);

    /*Modify the Label's text*/
    lv_label_set_text(label1, "Hello\nworld");

    /* Align the Label to the center
     * NULL means align on parent (which is the screen now)
     * 0, 0 at the end means an x, y offset after alignment*/
    lv_obj_align(label1, LV_ALIGN_CENTER, 0, 0);
}

static void lv_tick_task(void *arg) {
    (void) arg;

    lv_tick_inc(LV_TICK_PERIOD_MS);
}