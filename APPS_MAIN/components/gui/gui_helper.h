#ifndef GUI_HELPER_H
#define GUI_HELPER_H

#include "TCA9534.h"
#include "lvgl.h"

typedef struct {
    TCA9534_IO_EXP *IO_EXP1;
    TCA9534_IO_EXP *IO_EXP2;
    QueueHandle_t xQueue1;
} external_gui_peripheral_handles;

void guiTask(void *pvParameter);

#endif