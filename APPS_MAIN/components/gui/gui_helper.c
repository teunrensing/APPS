#include "driver/gpio.h"
#include "driver/i2c.h"
/* Littlevgl specific */
#ifdef LV_LVGL_H_INCLUDE_SIMPLE
#include "lvgl.h"
#else
#include "lvgl/lvgl.h"
#endif

#include "lvgl_helpers.h"
#include "ui.h"

#include "esp_log.h"
#include "TCA9534.h"
#include "encoder_driver.h"
#include "gui_helper.h"

/**********************
*   HANDLES
***********************/
SemaphoreHandle_t xGuiSemaphore;
encoder_drv_t encoder;

#define TAG "GUI"

static esp_err_t i2c_master_init(i2c_config_t *conf) {
    int i2c_master_port = I2C_MASTER_NUM;

    conf->mode = I2C_MODE_MASTER;
    conf->master.clk_speed = I2C_MASTER_FREQ_HZ;
    conf->sda_io_num = GPIO_NUM_21;
    conf->scl_io_num = GPIO_NUM_22;
    conf->sda_pullup_en = GPIO_PULLUP_ENABLE;
    conf->scl_pullup_en = GPIO_PULLUP_ENABLE;
    i2c_param_config(i2c_master_port, conf);

    return i2c_driver_install(i2c_master_port, conf->mode, I2C_MASTER_RX_BUF_DISABLE, I2C_MASTER_TX_BUF_DISABLE, 0);
}

void initialize_io_expander(TCA9534_IO_EXP *IO_EXP){
    esp_err_t status = i2c_master_init(&(IO_EXP->i2c_conf));
    if (status == ESP_OK) {
        ESP_LOGI(TAG, "I2C initialized successfully");
        IO_EXP->I2C_ADDR = TCA9534_NO1_I2C_ADDR;
        IO_EXP->i2c_master_port = I2C_MASTER_NUM;
        IO_EXP->interrupt_pin = GPIO_NUM_35;
        set_all_tca9534_io_pins_direction(IO_EXP, TCA9534_INPUT);
    }
}

bool encoder_read(lv_indev_drv_t * drv, lv_indev_data_t*data){
  data->enc_diff = get_encoder_count(&encoder);
  if(get_encoder_btn_status(&encoder)){
      data->state = LV_INDEV_STATE_PR;
      lv_event_send(ui_Startup, LV_EVENT_CLICKED, NULL);
  } 
  else data->state = LV_INDEV_STATE_REL;
  reset_encoder_count(&encoder);
  return false; 
}

static void lv_tick_task(void *arg) {
    (void) arg;

    lv_tick_inc(LV_TICK_PERIOD_MS);
}

void guiTask(void *pvParameter) {

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

    disp_drv.hor_res = LV_HOR_RES_MAX;
    disp_drv.ver_res= LV_VER_RES_MAX;
    disp_drv.physical_hor_res = -1; //-1 because we don't want any scaling :p
    disp_drv.physical_ver_res = -1;

    disp_drv.draw_buf = &disp_buf;
    lv_disp_drv_register(&disp_drv);

    /* initialize io expander needed for encoder*/
    TCA9534_IO_EXP IO_EXP;
    initialize_io_expander(&IO_EXP);

    /* initialize encoder driver */
    encoder.io_exp_handle = &IO_EXP;
    encoder.encoder_clk_pin = GPIO_NUM_33;
    encoder.encoder_dir_pin = GPIO_NUM_34;
    config_encoder(&encoder);
    register_encoder_isr(&encoder);

    /* Initialize encoder*/
    lv_indev_drv_t indev_drv;
    lv_indev_drv_init(&indev_drv);
    indev_drv.type = LV_INDEV_TYPE_ENCODER;
    indev_drv.read_cb = (void*) encoder_read;
    lv_indev_t * my_indev = lv_indev_drv_register(&indev_drv);
    lv_indev_enable(my_indev, true);

    /* Create and start a periodic timer interrupt to call lv_tick_inc */
    const esp_timer_create_args_t periodic_timer_args = {
            .callback = &lv_tick_task,
            .name = "periodic_gui"
    };
    esp_timer_handle_t periodic_timer;
    ESP_ERROR_CHECK(esp_timer_create(&periodic_timer_args, &periodic_timer));
    ESP_ERROR_CHECK(esp_timer_start_periodic(periodic_timer, LV_TICK_PERIOD_MS * 1000));
    ui_init();
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

