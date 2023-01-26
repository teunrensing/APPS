#ifndef ENCODER_DRIVER_H
#define ENCODER_DRIVER_H
#include <TCA9534.h>

/**
 * @brief encoder driver initialization parameters
 */
typedef struct{
    TCA9534_IO_EXP* io_exp_handle;
    TCA9534_PINS encoder_btn_pin;
    gpio_num_t encoder_clk_pin;
    gpio_num_t encoder_dir_pin;
    int8_t encoder_pulse_count;
}encoder_drv_t;

/**
 * @brief Initialize encoder using initialization parameters
 *
 * @param encoder_instance The encoder handle
 *
 * @return
 *     - ESP_OK   Success! encoder successfully initialized
 *     - ESP_ERR   Some fault occurred
 */
esp_err_t config_encoder(encoder_drv_t* encoder_instance);
/**
 * @brief Initialize encoder ISR using initialization parameters
 *
 * @param encoder_instance The encoder handle
 *
 * @return
 *     - ESP_OK   Success! encoder successfully initialized
 *     - ESP_ERR   Some fault occurred
 */
esp_err_t register_encoder_isr(encoder_drv_t* encoder_instance);

/**
 * @brief Get the current encoder count
 *
 * @param encoder_instance The encoder handle
 *
 * @return
 *     - > 1  Encoder turns in clockwise direction
 *     - 0 No encoder turns
 *     - < 1 Encoder turns in anti clockwise direction
 */
int16_t get_encoder_count(encoder_drv_t* encoder_instance);

/**
 * @brief Get the current button status of the encoder
 *
 * @param encoder_instance The encoder handle
 *
 * @return
 *     - 1  Button pressed
 *     - 0  Button released
 */
uint8_t get_encoder_btn_status(encoder_drv_t* encoder_instance);

/**
 * @brief Reset the encoder count back to 0
 *
 * @param encoder_instance The encoder handle
 */
void reset_encoder_count(encoder_drv_t* encoder_instance);
#endif