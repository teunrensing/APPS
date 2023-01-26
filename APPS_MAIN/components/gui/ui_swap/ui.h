// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.0
// LVGL VERSION: 8.2
// PROJECT: APPS GUI V5

#ifndef _APPS_GUI_V5_UI_H
#define _APPS_GUI_V5_UI_H

#ifdef __cplusplus
extern "C" {
#endif

#if defined __has_include
#if __has_include("lvgl.h")
#include "lvgl.h"
#elif __has_include("lvgl/lvgl.h")
#include "lvgl/lvgl.h"
#else
#include "lvgl.h"
#endif
#else
#include "lvgl.h"
#endif


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
void ui_event_Start_knop_TENS(lv_event_t * e);
extern lv_obj_t * ui_Start_knop_TENS;
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
extern lv_obj_t * ui_Blauwrondje_interval;
extern lv_obj_t * ui_Tekst_Arc3;
void ui_event_Intensiteit_Button_TENS(lv_event_t * e);
extern lv_obj_t * ui_Intensiteit_Button_TENS;
extern lv_obj_t * ui_Intensiteit_getal;
extern lv_obj_t * ui_Intensiteit_tekst;
void ui_event_Frequentie_Button_TENS(lv_event_t * e);
extern lv_obj_t * ui_Frequentie_Button_TENS;
extern lv_obj_t * ui_Frequentie_getal;
extern lv_obj_t * ui_Frequentie_tekst;
void ui_event_Interval_Button_TENS(lv_event_t * e);
extern lv_obj_t * ui_Interval_Button_TENS;
extern lv_obj_t * ui_Interval_getal;
extern lv_obj_t * ui_Interval_tekst;
extern lv_obj_t * ui_Vibratie;
extern lv_obj_t * ui_Titel1;
extern lv_obj_t * ui_Arc_Standaard1;
extern lv_obj_t * ui_Arc5;
void ui_event_Start_knop_Vibratie(lv_event_t * e);
extern lv_obj_t * ui_Start_knop_Vibratie;
extern lv_obj_t * ui_Arc_Intensiteit1;
void ui_event_Arc6(lv_event_t * e);
extern lv_obj_t * ui_Arc6;
extern lv_obj_t * ui_Blauw_rondje_intensiteit3;
extern lv_obj_t * ui_Tekst_Arc4;
extern lv_obj_t * ui_Arc_Frequentie1;
void ui_event_Arc7(lv_event_t * e);
extern lv_obj_t * ui_Arc7;
extern lv_obj_t * ui_Blauw_rondje_Frequentie1;
extern lv_obj_t * ui_Tekst_Arc5;
void ui_event_Arc_Interval1(lv_event_t * e);
extern lv_obj_t * ui_Arc_Interval1;
void ui_event_Arc8(lv_event_t * e);
extern lv_obj_t * ui_Arc8;
extern lv_obj_t * ui_Blauwrondje_Interval1;
extern lv_obj_t * ui_Tekst_Arc6;
void ui_event_Intensiteit_Button_Vibratie(lv_event_t * e);
extern lv_obj_t * ui_Intensiteit_Button_Vibratie;
extern lv_obj_t * ui_Intensiteit_getal1;
extern lv_obj_t * ui_Intensiteit_tekst1;
void ui_event_Frequentie_Button_Vibratie(lv_event_t * e);
extern lv_obj_t * ui_Frequentie_Button_Vibratie;
extern lv_obj_t * ui_Frequentie_getal1;
extern lv_obj_t * ui_Frequentie_tekst1;
void ui_event_Interval_Button_Vibratie(lv_event_t * e);
extern lv_obj_t * ui_Interval_Button_Vibratie;
extern lv_obj_t * ui_Interval_getal1;
extern lv_obj_t * ui_Interval_tekst1;
extern lv_obj_t * ui_Licht;
extern lv_obj_t * ui_Titel3;
extern lv_obj_t * ui_Arc_Standaard3;
extern lv_obj_t * ui_Arc11;
void ui_event_Start_knop_Licht(lv_event_t * e);
extern lv_obj_t * ui_Start_knop_Licht;
extern lv_obj_t * ui_Arc_Intensiteit3;
void ui_event_Arc13(lv_event_t * e);
extern lv_obj_t * ui_Arc13;
extern lv_obj_t * ui_Blauw_rondje_intensiteit7;
extern lv_obj_t * ui_Tekst_Arc8;
extern lv_obj_t * ui_Kleur;
void ui_event_Button_Rood(lv_event_t * e);
extern lv_obj_t * ui_Button_Rood;
extern lv_obj_t * ui_Rood_Tekst;
void ui_event_Button_Groen(lv_event_t * e);
extern lv_obj_t * ui_Button_Groen;
extern lv_obj_t * ui_Groen_tekst;
void ui_event_Button_Blauw(lv_event_t * e);
extern lv_obj_t * ui_Button_Blauw;
extern lv_obj_t * ui_Blauw_tekst;
void ui_event_Button_Geel(lv_event_t * e);
extern lv_obj_t * ui_Button_Geel;
extern lv_obj_t * ui_Geel_tekst;
void ui_event_Arc_Interval3(lv_event_t * e);
extern lv_obj_t * ui_Arc_Interval3;
void ui_event_Arc14(lv_event_t * e);
extern lv_obj_t * ui_Arc14;
extern lv_obj_t * ui_Blauwrondje_Interval3;
extern lv_obj_t * ui_Tekst_Arc10;
void ui_event_Intensiteit_Button_Licht(lv_event_t * e);
extern lv_obj_t * ui_Intensiteit_Button_Licht;
extern lv_obj_t * ui_Intensiteit_getal3;
extern lv_obj_t * ui_Intensiteit_tekst3;
void ui_event_Kleur_Button_Licht(lv_event_t * e);
extern lv_obj_t * ui_Kleur_Button_Licht;
extern lv_obj_t * ui_Kleur_tekst1;
extern lv_obj_t * ui_Rood;
extern lv_obj_t * ui_Groen;
extern lv_obj_t * ui_Blauw;
extern lv_obj_t * ui_Geel;
void ui_event_Interval_Button_Licht(lv_event_t * e);
extern lv_obj_t * ui_Interval_Button_Licht;
extern lv_obj_t * ui_Interval_getal3;
extern lv_obj_t * ui_Interval_tekst3;


LV_IMG_DECLARE(ui_img_apps_logo_goeie_png);    // assets/APPS Logo Goeie.png




void ui_init(void);

#ifdef __cplusplus
} /*extern "C"*/
#endif

#endif
