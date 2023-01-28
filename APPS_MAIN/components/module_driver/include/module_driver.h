#ifndef MODULE_DRIVER_H
#define MODULE_DRIVER_H
#include "led_strip.h"
#include "driver/gpio.h"
#include "tools/pins.h"
#include "drivers/driver_types.h"


/**
 * @brief The module types supported
 */
typedef enum {
    LED_ADDRESSABLE, TENS, MOTOR
}module_types_t;

/**
 * @brief The module_slot_pins_t struct which can be used to map the pins to the module slot
 */
typedef struct {
    uint8_t I2C_SCL;
    uint8_t I2C_SDA;
    pin_t PWM1;
    pin_t PWM2; 
    pin_t TTL1;
    pin_t TTL2;
    pin_t TTL3;
    pin_t STATUS;
    uint8_t ID_ADC_NUM;
    uint8_t ID_ADC_CH;
}module_slot_pins_t;

/**
 * @brief The module_slot_drv_t struct will contain all data related to the module:
 * Pin mapping, (which) drivers (also the handles for the drivers), feedback parameters and module_slot_number.
 */
typedef struct{
    uint8_t module_slot_num;
    module_slot_pins_t pins;
    module_types_t type;
    driver_t module_driver_1;
    driver_t module_driver_2;
    driver_types_t driver_1_type;
    driver_types_t driver_2_type;
    module_parameters_t parameters;
}module_slot_drv_t;

/**
 * @brief Map the module slot pin types and locations defined in the kconfig (esp-menuconfig)
 *        to the module_slot.
 *
 * @param slot The slot to map the pins to
 *
 * @return
 *     - ESP_OK  Success!
 *     - ESP_ERR Error!
 */
esp_err_t init_module_slot_pins(module_slot_drv_t* slot);

/**
 * @brief Init the drivers in the slot (module_driver_1 and module_driver_2) according to the module type
 *
 * @param slot The slot which contains the drivers to initialize
 *
 * @return
 *     - ESP_OK  Success!
 *     - ESP_ERR Error!
 */
esp_err_t init_module_drivers(module_slot_drv_t* slot);

/**
 * @brief Turn the module on. Watch out! Will turn on all the drivers inside the slot.
 * This might be undesired!
 *
 * @param slot The slot to be turned on
 *
 * @return
 *     - ESP_OK  Success!
 *     - ESP_ERR Error!
 */
esp_err_t turn_module_on(module_slot_drv_t* slot);

/**
 * @brief Turn the module off. Watch out! Will turn off all the drivers inside the slot.
 * This might be undesired!
 *
 * @param slot The slot to be turned off
 *
 * @return
 *     - ESP_OK  Success!
 *     - ESP_ERR Error!
 */
esp_err_t turn_module_off(module_slot_drv_t* slot);

/**
 * @brief For some modules its needed to refresh them once in a while. 
 * This can be due to monitoring reasons or other reasons.
 *
 * @param slot The slot to be refreshed
 *
 * @return
 *     - ESP_OK  Success!
 *     - ESP_ERR Error!
 */
esp_err_t refresh_module(module_slot_drv_t* slot);

/**
 * @brief This function can be used to set the feedback parameters for a module.
 *
 * @param slot The slot to get new parameters.
 *
 * @return
 *     - ESP_OK  Success!
 *     - ESP_ERR Error!
 */
esp_err_t set_module_parameters(module_parameters_t* parameters);

#endif