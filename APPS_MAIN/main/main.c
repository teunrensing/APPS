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
#include "esp_log.h"
#include "gui_helper.h"
#include "driver/i2c.h"

#define I2C_MASTER_SCL_IO           CONFIG_I2C_MASTER_SCL      /*!< GPIO number used for I2C master clock */
#define I2C_MASTER_SDA_IO           CONFIG_I2C_MASTER_SDA      /*!< GPIO number used for I2C master data  */
#define I2C_MASTER_NUM              0                          /*!< I2C master i2c port number, the number of i2c peripheral interfaces available will depend on the chip */
#define I2C_MASTER_FREQ_HZ          400000                     /*!< I2C master clock frequency */
#define I2C_MASTER_TX_BUF_DISABLE   0                          /*!< I2C master doesn't need buffer */
#define I2C_MASTER_RX_BUF_DISABLE   0    
#define TCA9534_NO1_I2C_ADDR        0b0100000
#define TCA9534_NO2_I2C_ADDR        0b0100111

#define TAG "MAIN"

TCA9534_IO_EXP IO_EXP1; 
TCA9534_IO_EXP IO_EXP2; 
external_gui_peripheral_handles gui_peripherals;

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

void initialize_io_expander(TCA9534_IO_EXP *IO_EXP, uint8_t i2c_addr){
        IO_EXP->I2C_ADDR = i2c_addr;
        IO_EXP->i2c_master_port = I2C_MASTER_NUM;
        IO_EXP->interrupt_pin = GPIO_NUM_35;
        set_all_tca9534_io_pins_direction(IO_EXP, TCA9534_INPUT);
}

void app_main(void)
{
    i2c_config_t i2c_bus;
    esp_err_t status = i2c_master_init(&i2c_bus);
    if(status != ESP_OK)
        while(1);
    ESP_LOGI(TAG, "I2C initialized successfully");
    initialize_io_expander(&IO_EXP1, TCA9534_NO1_I2C_ADDR);
    initialize_io_expander(&IO_EXP2, TCA9534_NO2_I2C_ADDR);
    gui_peripherals.IO_EXP1 = &IO_EXP1;
    gui_peripherals.IO_EXP2 = &IO_EXP2;
    xTaskCreatePinnedToCore(guiTask, "gui", LV_TASK_STACK_MEM, (void*) &gui_peripherals, 0, NULL, 1);
}

