#include "shift_reg.hpp"

char Shift_register::shift_reg_get_position(int position)
{
    return shift_reg_state[position];
}
void Shift_register::shift_reg_set(int position, char value)
{
    /*Array for extended gpio*/

    /*Set value on a position in the array (shift_reg_state)*/
    if (position >= 0 && position <= SR_LENGTH)
    {
        if (value == '1')
        {
            shift_reg_state[position] = '1';
        }
        else
        {
            shift_reg_state[position] = '0';
        }
    }
}
void Shift_register::shift_reg_update_output(void)
{
    /*Set array from memory to output*/
    gpio_set_level(RCLK, HIGH);
    gpio_set_level(RCLK, LOW);
}
void Shift_register::shift_reg_update_memory(void)
{
    /*Update shift register memory*/
    for (int i = SR_LENGTH; i >= 0; i--)
    {
        gpio_set_level(SER, ((shift_reg_state[i] == '1') ? HIGH : LOW));
        gpio_set_level(SRSCLK, HIGH);
        gpio_set_level(SRSCLK, LOW);
    }
}