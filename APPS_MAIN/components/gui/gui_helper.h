#ifndef GUI_HELPER_H
#define GUI_HELPER_H
#include "TCA9534.h"

#define LV_TASK_STACK_MEM 8196
#define LV_TICK_PERIOD_MS 1
#define LV_HOR_RES_MAX 320
#define LV_VER_RES_MAX 480
#define SPI_HOST_MAX 3
typedef struct{
TCA9534_IO_EXP* IO_EXP1;
TCA9534_IO_EXP* IO_EXP2;
} external_gui_peripheral_handles;


void guiTask(void *pvParameter);

#endif