#ifndef GUI_HELPER_H
#define GUI_HELPER_H
#define LV_TASK_STACK_MEM 8196
#define LV_TICK_PERIOD_MS 1
#define LV_HOR_RES_MAX 320
#define LV_VER_RES_MAX 480
#define SPI_HOST_MAX 3

#define I2C_MASTER_SCL_IO           CONFIG_I2C_MASTER_SCL      /*!< GPIO number used for I2C master clock */
#define I2C_MASTER_SDA_IO           CONFIG_I2C_MASTER_SDA      /*!< GPIO number used for I2C master data  */
#define I2C_MASTER_NUM              0                          /*!< I2C master i2c port number, the number of i2c peripheral interfaces available will depend on the chip */
#define I2C_MASTER_FREQ_HZ          400000                     /*!< I2C master clock frequency */
#define I2C_MASTER_TX_BUF_DISABLE   0                          /*!< I2C master doesn't need buffer */
#define I2C_MASTER_RX_BUF_DISABLE   0    
#define TCA9534_NO1_I2C_ADDR        0b0100000


void guiTask(void *pvParameter);

#endif