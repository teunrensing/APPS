// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: APPS GUI

#ifndef _APPS_GUI_UI_H
#define _APPS_GUI_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "lvgl.h"

void Startup_Animation(lv_obj_t * TargetObject, int delay);
void Sluitmoduleaan_Animation(lv_obj_t * TargetObject, int delay);
void ui_event_Startup(lv_event_t * e);
extern lv_obj_t * ui_Startup;
extern lv_obj_t * ui_APPS_logo;
extern lv_obj_t * ui_Sluit_module_aan1;
void ui_event_Sluit_module_aan(lv_event_t * e);
extern lv_obj_t * ui_Sluit_module_aan;
extern lv_obj_t * ui_TENS;
extern lv_obj_t * ui_Titel;
extern lv_obj_t * ui_Arc_Standaard;
extern lv_obj_t * ui_Arc4;
void ui_event_Blauw_rondje_intensiteit1(lv_event_t * e);
extern lv_obj_t * ui_Blauw_rondje_intensiteit1;
extern lv_obj_t * ui_Arc_Intensiteit;
void ui_event_Arc1(lv_event_t * e);
extern lv_obj_t * ui_Arc1;
extern lv_obj_t * ui_Blauw_rondje_intensiteit;
extern lv_obj_t * ui_Tekst_Arc1;
extern lv_obj_t * ui_Arc_Frequentie;
void ui_event_Arc2(lv_event_t * e);
extern lv_obj_t * ui_Arc2;
extern lv_obj_t * ui_Blauw_rondje_Frequentie;
extern lv_obj_t * ui_Tekst_Arc2;
void ui_event_Arc_Interval(lv_event_t * e);
extern lv_obj_t * ui_Arc_Interval;
void ui_event_Arc3(lv_event_t * e);
extern lv_obj_t * ui_Arc3;
extern lv_obj_t * ui_Blauwrondje_Interval;
extern lv_obj_t * ui_Tekst_Arc3;
void ui_event_Intensiteit_Button(lv_event_t * e);
extern lv_obj_t * ui_Intensiteit_Button;
extern lv_obj_t * ui_Intensiteit_getal;
extern lv_obj_t * ui_Intensiteit_tekst;
void ui_event_Frequentie_Button(lv_event_t * e);
extern lv_obj_t * ui_Frequentie_Button;
extern lv_obj_t * ui_Frequentie_getal;
extern lv_obj_t * ui_Frequentie_tekst;
void ui_event_Interval_Button(lv_event_t * e);
extern lv_obj_t * ui_Interval_Button;
extern lv_obj_t * ui_Interval_getal;
extern lv_obj_t * ui_Interval_tekst;


LV_IMG_DECLARE(ui_img_1691730083);    // assets\APPS Logo 10% Wit 2.png


LV_FONT_DECLARE(ui_font_Font1);
LV_FONT_DECLARE(ui_font_Font1_30);
LV_FONT_DECLARE(ui_font_Font1_40);
LV_FONT_DECLARE(ui_font_Roboto_40);
LV_FONT_DECLARE(ui_font_Roboto_bold_24);
LV_FONT_DECLARE(ui_font_Roboto_bold_40);


void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
