#include "sdkconfig.h"
#include <stdlib.h>

#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "freertos/semphr.h"
#include "esp_log.h"
#include "driver/i2c.h"
#include "gui_helper.h"
#include "module_driver_helper.h"
#include "module_driver.h"

#define I2C_MASTER_SCL_IO           CONFIG_I2C_MASTER_SCL      /*!< GPIO number used for I2C master clock */
#define I2C_MASTER_SDA_IO           CONFIG_I2C_MASTER_SDA      /*!< GPIO number used for I2C master data  */
#define I2C_MASTER_NUM              0                          /*!< I2C master i2c port number, the number of
                                                                * i2c peripheral interfaces available will depend on
                                                                * the chip */
#define I2C_MASTER_FREQ_HZ          400000                     /*!< I2C master clock frequency */
#define I2C_MASTER_TX_BUF_DISABLE   0                          /*!< I2C master doesn't need buffer */
#define I2C_MASTER_RX_BUF_DISABLE   0
#define TCA9534_NO1_I2C_ADDR        0b0100000
#define TCA9534_NO2_I2C_ADDR        0b0100111

#define MESSAGE_QUEUE_INBOX_SIZE    10
#define MODULE_DRIVER_CORE_NUM      0
#define GUI_DRIVER_CORE_NUM         1
#define GUI_STACK_DEPTH             0                          /*!< Set to 0 if no allocation for stack space is needed,
                                                                 * recommended value = 0 when debugging!*/
#define MODULE_DRIVER_STACK_DEPTH   0

#define TAG "MAIN"

static esp_err_t i2c_master_init(i2c_config_t *conf) {
    int i2c_master_port = I2C_MASTER_NUM;

    conf->mode = I2C_MODE_MASTER;
    conf->master.clk_speed = I2C_MASTER_FREQ_HZ;
    conf->sda_io_num = I2C_MASTER_SCL_IO;
    conf->scl_io_num = I2C_MASTER_SDA_IO;
    conf->sda_pullup_en = GPIO_PULLUP_ENABLE;
    conf->scl_pullup_en = GPIO_PULLUP_ENABLE;
    i2c_param_config(i2c_master_port, conf);

    return i2c_driver_install(i2c_master_port, conf->mode, I2C_MASTER_RX_BUF_DISABLE,
                              I2C_MASTER_TX_BUF_DISABLE, 0);
}

void initialize_io_expander(TCA9534_IO_EXP *IO_EXP, uint8_t i2c_addr) {
    IO_EXP->I2C_ADDR = i2c_addr;
    IO_EXP->i2c_master_port = I2C_MASTER_NUM;
    IO_EXP->interrupt_pin = GPIO_NUM_35;
    set_all_tca9534_io_pins_direction(IO_EXP, TCA9534_INPUT);
}

void app_main(void) {
    TCA9534_IO_EXP IO_EXP1;
    TCA9534_IO_EXP IO_EXP2;
    external_gui_peripheral_handles gui_peripherals;

    i2c_config_t i2c_bus;
    esp_err_t status = i2c_master_init(&i2c_bus);
    if (status != ESP_OK) {
        /*! TODO
         * Add exception handler
         */
    }
    ESP_LOGI(TAG, "I2C initialized successfully");
    initialize_io_expander(&IO_EXP1, TCA9534_NO1_I2C_ADDR);
    initialize_io_expander(&IO_EXP2, TCA9534_NO2_I2C_ADDR);
    gui_peripherals.IO_EXP1 = &IO_EXP1;
    gui_peripherals.IO_EXP2 = &IO_EXP2;
    gui_peripherals.xQueue1 = xQueueCreate(MESSAGE_QUEUE_INBOX_SIZE, sizeof(module_parameters_t));

    if (gui_peripherals.xQueue1 == NULL) {
        /* Queue was not created and must not be used. */
    }

    xTaskCreatePinnedToCore(guiTask,
                            "gui",
                            LV_TASK_STACK_MEM,
                            (void *) &gui_peripherals,
                            GUI_STACK_DEPTH,
                            NULL,
                            GUI_DRIVER_CORE_NUM);

    xTaskCreatePinnedToCore(moduledriverTask,
                            "module driver",
                            LV_TASK_STACK_MEM,
                            (void *) &(gui_peripherals.xQueue1),
                            MODULE_DRIVER_STACK_DEPTH,
                            NULL,
                            MODULE_DRIVER_CORE_NUM);
}

