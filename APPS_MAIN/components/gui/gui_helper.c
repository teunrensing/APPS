#include "driver/gpio.h"
#include "driver/i2c.h"

#include "lvgl.h"

#include "lvgl_helpers.h"
#include "ui.h"

#include "TCA9534.h"
#include "encoder_driver.h"
#include "gui_helper.h"

#define LV_TICK_PERIOD_MS 1
#define LV_HOR_RES_MAX 320
#define LV_VER_RES_MAX 480
#define SPI_HOST_MAX 3


/**********************
*   HANDLES
***********************/
SemaphoreHandle_t xGuiSemaphore;

#define TAG "GUI"

bool encoder_read(lv_indev_drv_t *drv, lv_indev_data_t *data) {
    encoder_drv_t *encoder = (encoder_drv_t *) drv->user_data;
    data->enc_diff = get_encoder_count(encoder);
    if (get_encoder_btn_status(encoder)) data->state = LV_INDEV_STATE_PR;
    else data->state = LV_INDEV_STATE_REL;
    reset_encoder_count(encoder);
    return false;
}

bool start_knop_read(lv_indev_drv_t *drv, lv_indev_data_t *data) {
    TCA9534_IO_EXP *IO_EXP = (TCA9534_IO_EXP *) drv->user_data;
    int button_pressed = get_io_pin_input_status(IO_EXP, TCA9534_IO5);
    if (button_pressed) data->state = LV_INDEV_STATE_PR;
    else data->state = LV_INDEV_STATE_REL;
    return false;
}

static void lv_tick_task(void *arg) {
    (void) arg;
    lv_tick_inc(LV_TICK_PERIOD_MS);
}

void guiTask(void *pvParameter) {

    external_gui_peripheral_handles *peripheral_handles = (external_gui_peripheral_handles *) pvParameter;
    xGuiSemaphore = xSemaphoreCreateMutex();
    lv_init();

    /* Initialize SPI or I2C bus used by the drivers */
    lvgl_driver_init();

    lv_color_t *buf1 = heap_caps_malloc(DISP_BUF_SIZE * sizeof(lv_color_t), MALLOC_CAP_DMA);
    assert(buf1 != NULL);

    /* Use double buffered when not working with monochrome displays */
    lv_color_t *buf2 = heap_caps_malloc(DISP_BUF_SIZE * sizeof(lv_color_t), MALLOC_CAP_DMA);
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
    disp_drv.ver_res = LV_VER_RES_MAX;
    disp_drv.physical_hor_res = -1; //-1 because we don't want any scaling :p
    disp_drv.physical_ver_res = -1;

    disp_drv.draw_buf = &disp_buf;
    lv_disp_drv_register(&disp_drv);

    encoder_drv_t encoder;
    /* initialize encoder driver */
    encoder.io_exp_handle = peripheral_handles->IO_EXP1;
    encoder.encoder_clk_pin = GPIO_NUM_33;
    encoder.encoder_dir_pin = GPIO_NUM_34;
    encoder.encoder_btn_pin = TCA9534_IO1;
    config_encoder(&encoder);
    register_encoder_isr(&encoder);

    /* Initialize encoder*/
    lv_indev_drv_t encoder_indev_drv;
    lv_indev_drv_init(&encoder_indev_drv);
    encoder_indev_drv.type = LV_INDEV_TYPE_ENCODER;
    encoder_indev_drv.read_cb = (void *) encoder_read;
    encoder_indev_drv.user_data = (void *) &encoder;
    lv_indev_t *encoder_indev = lv_indev_drv_register(&encoder_indev_drv);
    lv_indev_enable(encoder_indev, true);
    lv_group_t *encoder_indev_group = lv_group_create();
    lv_indev_set_group(encoder_indev, encoder_indev_group);

    /* Create and start a periodic timer interrupt to call lv_tick_inc */
    const esp_timer_create_args_t periodic_timer_args = {
            .callback = &lv_tick_task,
            .name = "periodic_gui"
    };

    /* Initialize start button*/
    lv_indev_drv_t start_button_drv;
    lv_indev_drv_init(&start_button_drv);
    start_button_drv.type = LV_INDEV_TYPE_ENCODER;
    start_button_drv.read_cb = (void *) start_knop_read;
    start_button_drv.user_data = peripheral_handles->IO_EXP1;
    lv_indev_t *start_button = lv_indev_drv_register(&start_button_drv);
    lv_indev_enable(start_button, true);

    lv_group_t *start_button_group;
    start_button_group = lv_group_create();
    lv_indev_set_group(start_button, start_button_group);

    esp_timer_handle_t periodic_timer;
    ESP_ERROR_CHECK(esp_timer_create(&periodic_timer_args, &periodic_timer));
    ESP_ERROR_CHECK(esp_timer_start_periodic(periodic_timer, LV_TICK_PERIOD_MS * 1000));

    /* Initialize the gui screens*/
    ui_init();

    /* Add all ui objects to encoder_indev_group to make them selectable by encoder*/
    lv_group_add_obj(encoder_indev_group, ui_Startup);
    lv_group_add_obj(encoder_indev_group, ui_Intensiteit_Button_TENS);
    lv_group_add_obj(encoder_indev_group, ui_Frequentie_Button_TENS);
    lv_group_add_obj(encoder_indev_group, ui_Interval_Button_TENS);
    /* Do the same for the light screen*/
    lv_group_add_obj(encoder_indev_group, ui_Intensiteit_Button_Licht);
    lv_group_add_obj(encoder_indev_group, ui_Kleur_Button_Licht);
    lv_group_add_obj(encoder_indev_group, ui_Interval_Button_Licht);
    /* Add the start button to the start_button_group to make the physical start button */
    /* control the virtual start button.*/
    lv_group_add_obj(start_button_group, ui_Start_knop_Licht);
    lv_group_focus_obj(ui_Start_knop_Licht);
    lv_obj_set_user_data(ui_Start_knop_Licht, peripheral_handles->xQueue1);

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

