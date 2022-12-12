#ifndef SHIFT_REG_H
#define SHIFT_REG_H

#define OE 25
#define RCLK 26
#define SER 32
#define SRSCLK 27

#define SR_LENGTH 8
#define HIGH 1
#define LOW 0

void config_shift_register(void);
void shift_bit(uint8_t bit, uint8_t val);
#endif