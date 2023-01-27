#ifndef LIGHT_SCREEN_H
#define LIGHT_SCREEN_H
#include "lvgl.h"
extern lv_obj_t *ui_Intensiteit_Button_Licht;
extern lv_obj_t *ui_Kleur_Button_Licht;
extern lv_obj_t *ui_Interval_Button_Licht;
extern lv_obj_t *ui_Start_knop_Licht;
extern lv_obj_t *ui_Tekst_Arc8;
extern lv_obj_t *ui_Tekst_Arc10;
extern lv_obj_t *ui_Rood;
extern lv_obj_t *ui_Groen;
extern lv_obj_t *ui_Blauw;
extern lv_obj_t *ui_Licht;
void ui_Licht_screen_init(void);

#endif