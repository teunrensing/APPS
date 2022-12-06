#ifndef SHIFT_REG_H
#define SHIFT_REG_H

#define OE GPIO_NUM_25
#define RCLK GPIO_NUM_26
#define SER GPIO_NUM_32
#define SRSCLK GPIO_NUM_27

#define SR_LENGTH 8
#define HIGH 1
#define LOW 0

static const char *TAG = "example";

void config_shift_register(void);
void shift_register_update_memory(void);
void shift_register_update_output(void);
void shift_register_insert(int position, uint8_t value);
#endif