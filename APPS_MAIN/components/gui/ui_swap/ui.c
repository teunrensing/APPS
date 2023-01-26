// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.0
// LVGL VERSION: 8.2
// PROJECT: APPS GUI V5

#include "ui.h"
#include "ui_helpers.h"

///////////////////// VARIABLES ////////////////////

lv_obj_t *ui_Sluit_module_aan;
lv_obj_t *ui_Startup;
lv_obj_t *ui_APPS_logo;
lv_obj_t *ui_Sluit_module_aan1;

lv_obj_t *ui_TENS;
lv_obj_t *ui_Titel;
lv_obj_t *ui_Arc_Standaard;
lv_obj_t *ui_Arc4;

lv_obj_t *ui_Start_knop_TENS;
lv_obj_t *ui_Arc_Intensiteit;

lv_obj_t *ui_Arc1;
lv_obj_t *ui_Blauw_rondje_intensiteit;
lv_obj_t *ui_Tekst_Arc1;
lv_obj_t *ui_Arc_Frequentie;

lv_obj_t *ui_Arc2;
lv_obj_t *ui_Blauw_rondje_Frequentie;
lv_obj_t *ui_Tekst_Arc2;

lv_obj_t *ui_Arc_Interval;

lv_obj_t *ui_Arc3;
lv_obj_t *ui_Blauwrondje_interval;
lv_obj_t *ui_Tekst_Arc3;

lv_obj_t *ui_Intensiteit_Button_TENS;
lv_obj_t *ui_Intensiteit_getal;
lv_obj_t *ui_Intensiteit_tekst;

lv_obj_t *ui_Frequentie_Button_TENS;
lv_obj_t *ui_Frequentie_getal;
lv_obj_t *ui_Frequentie_tekst;


lv_obj_t *ui_Interval_Button_TENS;
lv_obj_t *ui_Interval_getal;
lv_obj_t *ui_Interval_tekst;
lv_obj_t *ui_Vibratie;
lv_obj_t *ui_Titel1;
lv_obj_t *ui_Arc_Standaard1;
lv_obj_t *ui_Arc5;

lv_obj_t *ui_Start_knop_Vibratie;
lv_obj_t *ui_Arc_Intensiteit1;


lv_obj_t *ui_Arc6;
lv_obj_t *ui_Blauw_rondje_intensiteit3;
lv_obj_t *ui_Tekst_Arc4;
lv_obj_t *ui_Arc_Frequentie1;


lv_obj_t *ui_Arc7;
lv_obj_t *ui_Blauw_rondje_Frequentie1;
lv_obj_t *ui_Tekst_Arc5;


lv_obj_t *ui_Arc_Interval1;

lv_obj_t *ui_Arc8;
lv_obj_t *ui_Blauwrondje_Interval1;
lv_obj_t *ui_Tekst_Arc6;


lv_obj_t *ui_Intensiteit_Button_Vibratie;
lv_obj_t *ui_Intensiteit_getal1;
lv_obj_t *ui_Intensiteit_tekst1;


lv_obj_t *ui_Frequentie_Button_Vibratie;
lv_obj_t *ui_Frequentie_getal1;
lv_obj_t *ui_Frequentie_tekst1;

lv_obj_t *ui_Interval_Button_Vibratie;
lv_obj_t *ui_Interval_getal1;
lv_obj_t *ui_Interval_tekst1;
lv_obj_t *ui_Licht;
lv_obj_t *ui_Titel3;
lv_obj_t *ui_Arc_Standaard3;
lv_obj_t *ui_Arc11;

lv_obj_t *ui_Start_knop_Licht;
lv_obj_t *ui_Arc_Intensiteit3;

lv_obj_t *ui_Arc13;
lv_obj_t *ui_Blauw_rondje_intensiteit7;
lv_obj_t *ui_Tekst_Arc8;
lv_obj_t *ui_Kleur;

lv_obj_t *ui_Button_Rood;
lv_obj_t *ui_Rood_Tekst;

lv_obj_t *ui_Button_Groen;
lv_obj_t *ui_Groen_tekst;

lv_obj_t *ui_Button_Blauw;
lv_obj_t *ui_Blauw_tekst;

lv_obj_t *ui_Button_Geel;
lv_obj_t *ui_Geel_tekst;

lv_obj_t *ui_Arc_Interval3;

lv_obj_t *ui_Arc14;
lv_obj_t *ui_Blauwrondje_Interval3;
lv_obj_t *ui_Tekst_Arc10;

lv_obj_t *ui_Intensiteit_Button_Licht;
lv_obj_t *ui_Intensiteit_getal3;
lv_obj_t *ui_Intensiteit_tekst3;

lv_obj_t *ui_Kleur_Button_Licht;
lv_obj_t *ui_Kleur_tekst1;
lv_obj_t *ui_Rood;
lv_obj_t *ui_Groen;
lv_obj_t *ui_Blauw;
lv_obj_t *ui_Geel;

lv_obj_t *ui_Interval_Button_Licht;
lv_obj_t *ui_Interval_getal3;
lv_obj_t *ui_Interval_tekst3;
///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
#error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP != 1
#error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void Sluitmoduleaan_Animation(lv_obj_t *TargetObject, int delay) {
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 0);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_y);
    lv_anim_set_values(&PropertyAnimation_0, 0, -100);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, true);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_y);
    lv_anim_start(&PropertyAnimation_0);
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 1500);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, -255, 0);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_1);
    lv_anim_t PropertyAnimation_2;
    lv_anim_init(&PropertyAnimation_2);
    lv_anim_set_time(&PropertyAnimation_2, 3000);
    lv_anim_set_user_data(&PropertyAnimation_2, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_2, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_2, 0, -150);
    lv_anim_set_path_cb(&PropertyAnimation_2, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_2, delay + 4000);
    lv_anim_set_playback_time(&PropertyAnimation_2, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_2, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_2, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_2, 3000);
    lv_anim_set_early_apply(&PropertyAnimation_2, false);
    lv_anim_start(&PropertyAnimation_2);
    lv_anim_t PropertyAnimation_3;
    lv_anim_init(&PropertyAnimation_3);
    lv_anim_set_time(&PropertyAnimation_3, 3000);
    lv_anim_set_user_data(&PropertyAnimation_3, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_3, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_3, -150, 0);
    lv_anim_set_path_cb(&PropertyAnimation_3, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_3, delay + 7000);
    lv_anim_set_playback_time(&PropertyAnimation_3, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_3, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_3, LV_ANIM_REPEAT_INFINITE);
    lv_anim_set_repeat_delay(&PropertyAnimation_3, 3000);
    lv_anim_set_early_apply(&PropertyAnimation_3, false);
    lv_anim_start(&PropertyAnimation_3);

}

///////////////////// FUNCTIONS ////////////////////
void ui_event_Startup(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    if (event_code == LV_EVENT_SCREEN_LOADED) {
    }
    if (event_code == LV_EVENT_SCREEN_LOADED) {
        Sluitmoduleaan_Animation(ui_Sluit_module_aan, 2000);
    }
    if (event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_Licht, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
    if (event_code == LV_EVENT_SCREEN_LOADED) {
        Sluitmoduleaan_Animation(ui_Sluit_module_aan1, 2000);
    }
}

void ui_event_Sluit_module_aan(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    if (event_code == LV_EVENT_SCREEN_LOADED) {
        Sluitmoduleaan_Animation(ui_Sluit_module_aan1, 0);
    }
}

void ui_event_Start_knop_TENS(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Frequentie_Button_TENS, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Intensiteit_Button_TENS, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Interval_Button_TENS, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Intensiteit_Button_TENS, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Frequentie_Button_TENS, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Interval_Button_TENS, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Intensiteit_Button_TENS, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Intensiteit_Button_TENS, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Frequentie_Button_TENS, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Frequentie_Button_TENS, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button_TENS, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button_TENS, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_Arc1(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    lv_group_t *encoder_indev_group = lv_obj_get_group(target);
    if (event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_arc_set_text_value(ui_Intensiteit_getal, target, "", "%");
        _ui_arc_set_text_value(ui_Tekst_Arc1, target, "", "%");
        _ui_state_modify(ui_Intensiteit_Button_TENS, LV_STATE_PRESSED, _UI_MODIFY_STATE_REMOVE);
        lv_group_focus_freeze(encoder_indev_group, 0);
    }
    if (event_code == LV_EVENT_CLICKED) {
        lv_group_set_editing(encoder_indev_group, 0);
        lv_obj_clear_state(ui_Intensiteit_Button_TENS, LV_STATE_CHECKED);
        lv_event_send(ui_Intensiteit_Button_TENS, LV_EVENT_VALUE_CHANGED, NULL);
    }
}

void ui_event_Arc2(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    lv_group_t *encoder_indev_group = lv_obj_get_group(target);
    if (event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_arc_set_text_value(ui_Frequentie_getal, target, "", " Hz");
        _ui_arc_set_text_value(ui_Tekst_Arc2, target, "", " Hz");
        lv_group_focus_freeze(encoder_indev_group, 0);
    }
    if (event_code == LV_EVENT_CLICKED) {
        lv_group_set_editing(encoder_indev_group, 0);
        lv_obj_clear_state(ui_Frequentie_Button_TENS, LV_STATE_CHECKED);
        lv_event_send(ui_Frequentie_Button_TENS, LV_EVENT_VALUE_CHANGED, NULL);
    }
}

void ui_event_Arc_Interval(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    lv_group_t *encoder_indev_group = lv_obj_get_group(target);
    if (event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_Arc_Interval, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_group_focus_freeze(encoder_indev_group, 0);
    }
}

void ui_event_Arc3(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_arc_set_text_value(ui_Interval_getal, target, "", " Sec");
        _ui_arc_set_text_value(ui_Tekst_Arc3, target, "", " Sec");
    }
    if (event_code == LV_EVENT_CLICKED) {
        lv_group_t *encoder_indev_group = lv_obj_get_group(target);
        lv_group_set_editing(encoder_indev_group, 0);
        lv_obj_clear_state(ui_Interval_Button_TENS, LV_STATE_CHECKED);
        lv_event_send(ui_Interval_Button_TENS, LV_EVENT_VALUE_CHANGED, NULL);
    }
}

void ui_event_Intensiteit_Button_TENS(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    lv_group_t *encoder_indev_group = lv_obj_get_group(target);
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Arc_Intensiteit, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_group_add_obj(encoder_indev_group, ui_Arc1);
        lv_group_focus_obj(ui_Arc1);
        lv_group_set_editing(encoder_indev_group, 1);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Arc_Intensiteit, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_group_add_obj(encoder_indev_group, ui_Arc1);
        lv_group_focus_obj(target);
        lv_group_set_editing(encoder_indev_group, 0);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Interval_Button_TENS, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Interval_Button_TENS, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Frequentie_Button_TENS, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Frequentie_Button_TENS, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Frequentie_Button_TENS, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Frequentie_Button_TENS, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button_TENS, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button_TENS, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_Frequentie_Button_TENS(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    lv_group_t *encoder_indev_group = lv_obj_get_group(target);
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Arc_Frequentie, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_group_add_obj(encoder_indev_group, ui_Arc2);
        lv_group_focus_obj(ui_Arc2);
        lv_group_set_editing(encoder_indev_group, 1);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Arc_Frequentie, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_group_remove_obj(ui_Arc2);
        lv_group_focus_obj(target);
        lv_group_set_editing(encoder_indev_group, 0);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Intensiteit_Button_TENS, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Intensiteit_Button_TENS, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Interval_Button_TENS, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Interval_Button_TENS, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Intensiteit_Button_TENS, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Intensiteit_Button_TENS, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button_TENS, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button_TENS, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_Interval_Button_TENS(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    lv_group_t *encoder_indev_group = lv_obj_get_group(target);
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Arc_Interval, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_obj_add_flag(target, LV_OBJ_FLAG_SCROLL_ON_FOCUS);
        lv_group_add_obj(encoder_indev_group, ui_Arc3);
        lv_group_focus_obj(ui_Arc3);
        lv_group_set_editing(encoder_indev_group, 1);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Arc_Interval, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_group_remove_obj(ui_Arc3);
        lv_group_set_editing(encoder_indev_group, 0);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Intensiteit_Button_TENS, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Intensiteit_Button_TENS, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Frequentie_Button_TENS, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Frequentie_Button_TENS, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Intensiteit_Button_TENS, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Intensiteit_Button_TENS, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Frequentie_Button_TENS, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Frequentie_Button_TENS, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_Start_knop_Vibratie(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Frequentie_Button_Vibratie, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Intensiteit_Button_Vibratie, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Interval_Button_Vibratie, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Intensiteit_Button_Vibratie, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Frequentie_Button_Vibratie, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Interval_Button_Vibratie, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Intensiteit_Button_Vibratie, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Intensiteit_Button_Vibratie, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Frequentie_Button_Vibratie, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Frequentie_Button_Vibratie, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button_Vibratie, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button_Vibratie, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_Arc6(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_arc_set_text_value(ui_Intensiteit_getal1, target, "", "%");
        _ui_arc_set_text_value(ui_Tekst_Arc4, target, "", "%");
        _ui_state_modify(ui_Intensiteit_Button_Vibratie, LV_STATE_PRESSED, _UI_MODIFY_STATE_REMOVE);
    }
}

void ui_event_Arc7(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_arc_set_text_value(ui_Frequentie_getal1, target, "", " Hz");
        _ui_arc_set_text_value(ui_Tekst_Arc5, target, "", " Hz");
    }
}

void ui_event_Arc_Interval1(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    if (event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_Arc_Interval1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
}

void ui_event_Arc8(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_arc_set_text_value(ui_Interval_getal1, target, "", " Sec");
        _ui_arc_set_text_value(ui_Tekst_Arc6, target, "", " Sec");
    }
}

void ui_event_Intensiteit_Button_Vibratie(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Arc_Intensiteit1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Arc_Intensiteit1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Interval_Button_Vibratie, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Interval_Button_Vibratie, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Frequentie_Button_Vibratie, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Frequentie_Button_Vibratie, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Frequentie_Button_Vibratie, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Frequentie_Button_Vibratie, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button_Vibratie, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button_Vibratie, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_Frequentie_Button_Vibratie(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Arc_Frequentie1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Arc_Frequentie1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Intensiteit_Button_Vibratie, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Intensiteit_Button_Vibratie, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Interval_Button_Vibratie, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Interval_Button_Vibratie, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Intensiteit_Button_Vibratie, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Intensiteit_Button_Vibratie, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button_Vibratie, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button_Vibratie, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_Interval_Button_Vibratie(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Arc_Interval1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Arc_Interval1, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Intensiteit_Button_Vibratie, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Intensiteit_Button_Vibratie, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Frequentie_Button_Vibratie, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Frequentie_Button_Vibratie, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Intensiteit_Button_Vibratie, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Intensiteit_Button_Vibratie, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Frequentie_Button_Vibratie, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Frequentie_Button_Vibratie, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_Start_knop_Licht(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    QueueHandle_t Queue_GUI = (QueueHandle_t) lv_obj_get_user_data(target);
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Kleur_Button_Licht, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Intensiteit_Button_Licht, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Interval_Button_Licht, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Intensiteit_Button_Licht, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Kleur_Button_Licht, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Interval_Button_Licht, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_send_light_parameters_to_module(Queue_GUI);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Intensiteit_Button_Licht, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Intensiteit_Button_Licht, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Kleur_Button_Licht, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Kleur_Button_Licht, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button_Licht, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button_Licht, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_turn_module_off(Queue_GUI);
    }
}

void ui_event_Arc13(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_arc_set_text_value(ui_Intensiteit_getal3, target, "", "%");
        _ui_arc_set_text_value(ui_Tekst_Arc8, target, "", "%");
        _ui_state_modify(ui_Intensiteit_Button_Licht, LV_STATE_PRESSED, _UI_MODIFY_STATE_REMOVE);
    }
    if (event_code == LV_EVENT_CLICKED) {
        lv_group_t *encoder_indev_group = lv_obj_get_group(target);
        lv_group_set_editing(encoder_indev_group, 0);
        lv_obj_clear_state(ui_Intensiteit_Button_Licht, LV_STATE_CHECKED);
        lv_event_send(ui_Intensiteit_Button_Licht, LV_EVENT_VALUE_CHANGED, NULL);
    }
}

void ui_event_Button_Rood(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Rood, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Blauw, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Blauw, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Groen, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Groen, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Geel, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Blauw, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Rood, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Groen, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Blauw, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Geel, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Groen, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Geel, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Blauw, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
    }
    if (event_code == LV_EVENT_CLICKED) {
        lv_obj_clear_state(ui_Kleur_Button_Licht, LV_STATE_CHECKED);
        lv_event_send(ui_Kleur_Button_Licht, LV_EVENT_VALUE_CHANGED, NULL);
    }
}

void ui_event_Button_Groen(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Groen, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Rood, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Rood, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Blauw, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Blauw, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Geel, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Geel, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Groen, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Rood, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Rood, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Blauw, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Blauw, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Geel, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Geel, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
    }
    if (event_code == LV_EVENT_CLICKED) {
        lv_obj_clear_state(ui_Kleur_Button_Licht, LV_STATE_CHECKED);
        lv_event_send(ui_Kleur_Button_Licht, LV_EVENT_VALUE_CHANGED, NULL);
    }
}

void ui_event_Button_Blauw(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Blauw, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Rood, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Rood, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Groen, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Groen, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Geel, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Geel, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Blauw, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Rood, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Rood, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Groen, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Groen, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Geel, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Geel, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
    }
    if (event_code == LV_EVENT_CLICKED) {
        lv_obj_clear_state(ui_Kleur_Button_Licht, LV_STATE_CHECKED);
        lv_event_send(ui_Kleur_Button_Licht, LV_EVENT_VALUE_CHANGED, NULL);
    }
}

void ui_event_Button_Geel(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Geel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Rood, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Rood, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Groen, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Groen, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Blauw, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Button_Blauw, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Geel, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Rood, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Rood, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Groen, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Groen, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Blauw, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Button_Blauw, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
    }
    if (event_code == LV_EVENT_CLICKED) {
        lv_obj_clear_state(ui_Kleur_Button_Licht, LV_STATE_CHECKED);
        lv_event_send(ui_Kleur_Button_Licht, LV_EVENT_VALUE_CHANGED, NULL);
    }
}

void ui_event_Arc_Interval3(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    if (event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_Arc_Interval3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
}

void ui_event_Arc14(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    if (event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_arc_set_text_value(ui_Interval_getal3, target, "", " Sec");
        _ui_arc_set_text_value(ui_Tekst_Arc10, target, "", " Sec");
    }
    if (event_code == LV_EVENT_CLICKED) {
        lv_group_t *encoder_indev_group = lv_obj_get_group(target);
        lv_group_set_editing(encoder_indev_group, 0);
        lv_obj_clear_state(ui_Interval_Button_Licht, LV_STATE_CHECKED);
        lv_event_send(ui_Interval_Button_Licht, LV_EVENT_VALUE_CHANGED, NULL);
    }
}

void ui_event_Intensiteit_Button_Licht(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    lv_group_t *encoder_indev_group = lv_obj_get_group(target);
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Arc_Intensiteit3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_group_add_obj(encoder_indev_group, ui_Arc13);
        lv_group_focus_obj(ui_Arc13);
        lv_group_set_editing(encoder_indev_group, 1);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Arc_Intensiteit3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_group_remove_obj(ui_Arc13);
        lv_group_focus_obj(target);
        lv_group_set_editing(encoder_indev_group, 0);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Interval_Button_Licht, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Interval_Button_Licht, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Kleur_Button_Licht, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Kleur_Button_Licht, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Kleur_Button_Licht, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Kleur_Button_Licht, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button_Licht, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button_Licht, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_Kleur_Button_Licht(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    lv_group_t *encoder_indev_group = lv_obj_get_group(target);
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Kleur, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_group_add_obj(encoder_indev_group, ui_Button_Rood);
        lv_group_add_obj(encoder_indev_group, ui_Button_Groen);
        lv_group_add_obj(encoder_indev_group, ui_Button_Blauw);
        lv_group_add_obj(encoder_indev_group, ui_Button_Geel);
        lv_group_focus_obj(ui_Button_Rood);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Kleur, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_group_remove_obj(ui_Button_Rood);
        lv_group_remove_obj(ui_Button_Groen);
        lv_group_remove_obj(ui_Button_Blauw);
        lv_group_remove_obj(ui_Button_Geel);
        lv_group_focus_obj(ui_Kleur_Button_Licht);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Intensiteit_Button_Licht, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Intensiteit_Button_Licht, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Interval_Button_Licht, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Interval_Button_Licht, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Intensiteit_Button_Licht, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Intensiteit_Button_Licht, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button_Licht, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button_Licht, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
    }
}

void ui_event_Interval_Button_Licht(lv_event_t *e) {
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t *target = lv_event_get_target(e);
    lv_group_t *encoder_indev_group = lv_obj_get_group(target);
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Arc_Interval3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
        lv_group_add_obj(encoder_indev_group, ui_Arc14);
        lv_group_focus_obj(ui_Arc14);
        lv_group_set_editing(encoder_indev_group, 1);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Arc_Interval3, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
        lv_group_remove_obj(ui_Arc14);
        lv_group_focus_obj(target);
        lv_group_set_editing(encoder_indev_group, 0);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Intensiteit_Button_Licht, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Intensiteit_Button_Licht, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Kleur_Button_Licht, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Kleur_Button_Licht, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
    }
    if (event_code == LV_EVENT_VALUE_CHANGED && !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Intensiteit_Button_Licht, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Intensiteit_Button_Licht, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Kleur_Button_Licht, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Kleur_Button_Licht, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Startup_screen_init(void) {
    ui_Startup = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Startup, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Startup, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Startup, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_APPS_logo = lv_img_create(ui_Startup);
    lv_img_set_src(ui_APPS_logo, &ui_img_apps_logo_goeie_png);
    lv_obj_set_width(ui_APPS_logo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_APPS_logo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_APPS_logo, -5);
    lv_obj_set_y(ui_APPS_logo, 0);
    lv_obj_set_align(ui_APPS_logo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_APPS_logo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_APPS_logo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_img_set_zoom(ui_APPS_logo, 90);

    ui_Sluit_module_aan1 = lv_label_create(ui_Startup);
    lv_obj_set_width(ui_Sluit_module_aan1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Sluit_module_aan1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Sluit_module_aan1, 1);
    lv_obj_set_y(ui_Sluit_module_aan1, 31);
    lv_obj_set_align(ui_Sluit_module_aan1, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_Sluit_module_aan1, "Sluit module aan");
    lv_obj_set_style_text_color(ui_Sluit_module_aan1, lv_color_hex(0x5D6069), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Sluit_module_aan1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Sluit_module_aan1, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Sluit_module_aan = lv_label_create(ui_Startup);
    lv_obj_set_width(ui_Sluit_module_aan, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Sluit_module_aan, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Sluit_module_aan, 0);
    lv_obj_set_y(ui_Sluit_module_aan, 30);
    lv_obj_set_align(ui_Sluit_module_aan, LV_ALIGN_BOTTOM_MID);
    lv_label_set_text(ui_Sluit_module_aan, "Sluit module aan");
    lv_obj_set_style_text_color(ui_Sluit_module_aan, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Sluit_module_aan, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Sluit_module_aan, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Sluit_module_aan, ui_event_Sluit_module_aan, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Startup, ui_event_Startup, LV_EVENT_ALL, NULL);

}

void ui_TENS_screen_init(void) {
    ui_TENS = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_TENS, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_scrollbar_mode(ui_TENS, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ui_TENS, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TENS, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Titel = lv_label_create(ui_TENS);
    lv_obj_set_width(ui_Titel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Titel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Titel, 0);
    lv_obj_set_y(ui_Titel, 25);
    lv_obj_set_align(ui_Titel, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Titel, "TENS");
    lv_obj_set_style_text_color(ui_Titel, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Titel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Titel, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc_Standaard = lv_obj_create(ui_TENS);
    lv_obj_set_width(ui_Arc_Standaard, 280);
    lv_obj_set_height(ui_Arc_Standaard, 180);
    lv_obj_set_x(ui_Arc_Standaard, 0);
    lv_obj_set_y(ui_Arc_Standaard, -20);
    lv_obj_set_align(ui_Arc_Standaard, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(ui_Arc_Standaard, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Arc_Standaard, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc_Standaard, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc_Standaard, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc_Standaard, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc4 = lv_arc_create(ui_Arc_Standaard);
    lv_obj_set_width(ui_Arc4, 180);
    lv_obj_set_height(ui_Arc4, 180);
    lv_obj_set_x(ui_Arc4, 0);
    lv_obj_set_y(ui_Arc4, 5);
    lv_obj_set_align(ui_Arc4, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Arc4, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_Arc4, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc4, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc4, lv_color_hex(0x1E2537), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc4, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Arc4, LV_GRAD_DIR_NONE, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc4, lv_color_hex(0x1E2537), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc4, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc4, 10, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc4, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc4, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Start_knop_TENS = lv_obj_create(ui_Arc_Standaard);
    lv_obj_set_width(ui_Start_knop_TENS, 120);
    lv_obj_set_height(ui_Start_knop_TENS, 120);
    lv_obj_set_x(ui_Start_knop_TENS, 0);
    lv_obj_set_y(ui_Start_knop_TENS, 5);
    lv_obj_set_align(ui_Start_knop_TENS, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Start_knop_TENS, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_clear_flag(ui_Start_knop_TENS, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Start_knop_TENS, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Start_knop_TENS, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Start_knop_TENS, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Start_knop_TENS, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Start_knop_TENS, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Start_knop_TENS, lv_color_hex(0x7BFA83), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Start_knop_TENS, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Arc_Intensiteit = lv_obj_create(ui_TENS);
    lv_obj_set_width(ui_Arc_Intensiteit, 280);
    lv_obj_set_height(ui_Arc_Intensiteit, 180);
    lv_obj_set_x(ui_Arc_Intensiteit, 0);
    lv_obj_set_y(ui_Arc_Intensiteit, -20);
    lv_obj_set_align(ui_Arc_Intensiteit, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Arc_Intensiteit, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_Arc_Intensiteit, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Arc_Intensiteit, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc_Intensiteit, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc_Intensiteit, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc_Intensiteit, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc1 = lv_arc_create(ui_Arc_Intensiteit);
    lv_obj_set_width(ui_Arc1, 180);
    lv_obj_set_height(ui_Arc1, 180);
    lv_obj_set_x(ui_Arc1, 0);
    lv_obj_set_y(ui_Arc1, 5);
    lv_obj_set_align(ui_Arc1, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_Arc1, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_grad_dir(ui_Arc1, LV_GRAD_DIR_VER, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0x605BFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc1, 10, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc1, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc1, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Blauw_rondje_intensiteit = lv_obj_create(ui_Arc_Intensiteit);
    lv_obj_set_width(ui_Blauw_rondje_intensiteit, 120);
    lv_obj_set_height(ui_Blauw_rondje_intensiteit, 120);
    lv_obj_set_x(ui_Blauw_rondje_intensiteit, 0);
    lv_obj_set_y(ui_Blauw_rondje_intensiteit, 5);
    lv_obj_set_align(ui_Blauw_rondje_intensiteit, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Blauw_rondje_intensiteit, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Blauw_rondje_intensiteit, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Blauw_rondje_intensiteit, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Blauw_rondje_intensiteit, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Blauw_rondje_intensiteit, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Blauw_rondje_intensiteit, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Tekst_Arc1 = lv_label_create(ui_Arc_Intensiteit);
    lv_obj_set_width(ui_Tekst_Arc1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Tekst_Arc1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Tekst_Arc1, 0);
    lv_obj_set_y(ui_Tekst_Arc1, 5);
    lv_obj_set_align(ui_Tekst_Arc1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Tekst_Arc1, "0%");
    lv_obj_set_style_text_color(ui_Tekst_Arc1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Tekst_Arc1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Tekst_Arc1, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc_Frequentie = lv_obj_create(ui_TENS);
    lv_obj_set_width(ui_Arc_Frequentie, 280);
    lv_obj_set_height(ui_Arc_Frequentie, 180);
    lv_obj_set_x(ui_Arc_Frequentie, 0);
    lv_obj_set_y(ui_Arc_Frequentie, -20);
    lv_obj_set_align(ui_Arc_Frequentie, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Arc_Frequentie, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_Arc_Frequentie, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Arc_Frequentie, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc_Frequentie, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc_Frequentie, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc_Frequentie, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc2 = lv_arc_create(ui_Arc_Frequentie);
    lv_obj_set_width(ui_Arc2, 180);
    lv_obj_set_height(ui_Arc2, 180);
    lv_obj_set_x(ui_Arc2, 0);
    lv_obj_set_y(ui_Arc2, 5);
    lv_obj_set_align(ui_Arc2, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_Arc2, 0, 300);
    lv_obj_set_style_radius(ui_Arc2, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc2, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_grad_dir(ui_Arc2, LV_GRAD_DIR_VER, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc2, lv_color_hex(0x605BFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc2, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc2, 10, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc2, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc2, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Blauw_rondje_Frequentie = lv_obj_create(ui_Arc_Frequentie);
    lv_obj_set_width(ui_Blauw_rondje_Frequentie, 120);
    lv_obj_set_height(ui_Blauw_rondje_Frequentie, 120);
    lv_obj_set_x(ui_Blauw_rondje_Frequentie, 0);
    lv_obj_set_y(ui_Blauw_rondje_Frequentie, 5);
    lv_obj_set_align(ui_Blauw_rondje_Frequentie, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Blauw_rondje_Frequentie, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Blauw_rondje_Frequentie, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Blauw_rondje_Frequentie, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Blauw_rondje_Frequentie, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Blauw_rondje_Frequentie, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Blauw_rondje_Frequentie, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Tekst_Arc2 = lv_label_create(ui_Arc_Frequentie);
    lv_obj_set_width(ui_Tekst_Arc2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Tekst_Arc2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Tekst_Arc2, 0);
    lv_obj_set_y(ui_Tekst_Arc2, 5);
    lv_obj_set_align(ui_Tekst_Arc2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Tekst_Arc2, "0Hz");
    lv_obj_set_style_text_color(ui_Tekst_Arc2, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Tekst_Arc2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Tekst_Arc2, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc_Interval = lv_obj_create(ui_TENS);
    lv_obj_set_width(ui_Arc_Interval, 280);
    lv_obj_set_height(ui_Arc_Interval, 180);
    lv_obj_set_x(ui_Arc_Interval, 0);
    lv_obj_set_y(ui_Arc_Interval, -20);
    lv_obj_set_align(ui_Arc_Interval, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Arc_Interval, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_Arc_Interval, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Arc_Interval, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc_Interval, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc_Interval, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc_Interval, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc3 = lv_arc_create(ui_Arc_Interval);
    lv_obj_set_width(ui_Arc3, 180);
    lv_obj_set_height(ui_Arc3, 180);
    lv_obj_set_x(ui_Arc3, 0);
    lv_obj_set_y(ui_Arc3, 5);
    lv_obj_set_align(ui_Arc3, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_Arc3, 0, 10);
    lv_obj_set_style_radius(ui_Arc3, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc3, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_grad_dir(ui_Arc3, LV_GRAD_DIR_VER, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc3, lv_color_hex(0x605BFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc3, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc3, 10, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc3, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc3, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Blauwrondje_interval = lv_obj_create(ui_Arc_Interval);
    lv_obj_set_width(ui_Blauwrondje_interval, 120);
    lv_obj_set_height(ui_Blauwrondje_interval, 120);
    lv_obj_set_x(ui_Blauwrondje_interval, 0);
    lv_obj_set_y(ui_Blauwrondje_interval, 5);
    lv_obj_set_align(ui_Blauwrondje_interval, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Blauwrondje_interval, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Blauwrondje_interval, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Blauwrondje_interval, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Blauwrondje_interval, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Blauwrondje_interval, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Blauwrondje_interval, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Tekst_Arc3 = lv_label_create(ui_Arc_Interval);
    lv_obj_set_width(ui_Tekst_Arc3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Tekst_Arc3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Tekst_Arc3, 0);
    lv_obj_set_y(ui_Tekst_Arc3, 5);
    lv_obj_set_align(ui_Tekst_Arc3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Tekst_Arc3, "0 Sec");
    lv_obj_set_style_text_color(ui_Tekst_Arc3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Tekst_Arc3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Tekst_Arc3, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Intensiteit_Button_TENS = lv_btn_create(ui_TENS);
    lv_obj_set_width(ui_Intensiteit_Button_TENS, 280);
    lv_obj_set_height(ui_Intensiteit_Button_TENS, 45);
    lv_obj_set_x(ui_Intensiteit_Button_TENS, 0);
    lv_obj_set_y(ui_Intensiteit_Button_TENS, -350);
    lv_obj_set_align(ui_Intensiteit_Button_TENS, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Intensiteit_Button_TENS, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Intensiteit_Button_TENS, LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Intensiteit_Button_TENS, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Intensiteit_Button_TENS, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Intensiteit_Button_TENS, lv_color_hex(0x605BFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Intensiteit_Button_TENS, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Intensiteit_Button_TENS, lv_color_hex(0x326EAF), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_Intensiteit_Button_TENS, 100, LV_PART_MAIN | LV_STATE_FOCUSED);

    ui_Intensiteit_getal = lv_label_create(ui_Intensiteit_Button_TENS);
    lv_obj_set_width(ui_Intensiteit_getal, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Intensiteit_getal, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Intensiteit_getal, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Intensiteit_getal, "0%");
    lv_obj_set_style_text_color(ui_Intensiteit_getal, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Intensiteit_getal, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Intensiteit_getal, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Intensiteit_tekst = lv_label_create(ui_Intensiteit_Button_TENS);
    lv_obj_set_width(ui_Intensiteit_tekst, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Intensiteit_tekst, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Intensiteit_tekst, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Intensiteit_tekst, "Intensiteit");
    lv_obj_set_style_text_color(ui_Intensiteit_tekst, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Intensiteit_tekst, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Intensiteit_tekst, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Frequentie_Button_TENS = lv_btn_create(ui_TENS);
    lv_obj_set_width(ui_Frequentie_Button_TENS, 280);
    lv_obj_set_height(ui_Frequentie_Button_TENS, 45);
    lv_obj_set_x(ui_Frequentie_Button_TENS, 0);
    lv_obj_set_y(ui_Frequentie_Button_TENS, -285);
    lv_obj_set_align(ui_Frequentie_Button_TENS, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Frequentie_Button_TENS, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Frequentie_Button_TENS, LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Frequentie_Button_TENS, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Frequentie_Button_TENS, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Frequentie_Button_TENS, lv_color_hex(0x605BFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Frequentie_Button_TENS, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Frequentie_Button_TENS, lv_color_hex(0x254166), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_Frequentie_Button_TENS, 255, LV_PART_MAIN | LV_STATE_FOCUSED);

    ui_Frequentie_getal = lv_label_create(ui_Frequentie_Button_TENS);
    lv_obj_set_width(ui_Frequentie_getal, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Frequentie_getal, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Frequentie_getal, 0);
    lv_obj_set_y(ui_Frequentie_getal, 2);
    lv_obj_set_align(ui_Frequentie_getal, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Frequentie_getal, " 0 Hz");
    lv_obj_clear_flag(ui_Frequentie_getal, LV_OBJ_FLAG_CLICK_FOCUSABLE);      /// Flags
    lv_obj_set_style_text_color(ui_Frequentie_getal, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Frequentie_getal, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Frequentie_getal, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Frequentie_tekst = lv_label_create(ui_Frequentie_Button_TENS);
    lv_obj_set_width(ui_Frequentie_tekst, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Frequentie_tekst, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Frequentie_tekst, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Frequentie_tekst, "Frequentie");
    lv_obj_set_style_text_color(ui_Frequentie_tekst, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Frequentie_tekst, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Frequentie_tekst, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Interval_Button_TENS = lv_btn_create(ui_TENS);
    lv_obj_set_width(ui_Interval_Button_TENS, 280);
    lv_obj_set_height(ui_Interval_Button_TENS, 45);
    lv_obj_set_x(ui_Interval_Button_TENS, 0);
    lv_obj_set_y(ui_Interval_Button_TENS, -220);
    lv_obj_set_align(ui_Interval_Button_TENS, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Interval_Button_TENS, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Interval_Button_TENS, LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Interval_Button_TENS, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Interval_Button_TENS, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Interval_Button_TENS, lv_color_hex(0x605BFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Interval_Button_TENS, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Interval_Button_TENS, lv_color_hex(0x254166), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_Interval_Button_TENS, 255, LV_PART_MAIN | LV_STATE_FOCUSED);

    ui_Interval_getal = lv_label_create(ui_Interval_Button_TENS);
    lv_obj_set_width(ui_Interval_getal, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Interval_getal, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Interval_getal, 0);
    lv_obj_set_y(ui_Interval_getal, 2);
    lv_obj_set_align(ui_Interval_getal, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Interval_getal, "0 Sec");
    lv_obj_set_style_text_color(ui_Interval_getal, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Interval_getal, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Interval_getal, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Interval_tekst = lv_label_create(ui_Interval_Button_TENS);
    lv_obj_set_width(ui_Interval_tekst, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Interval_tekst, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Interval_tekst, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Interval_tekst, "Interval");
    lv_obj_set_style_text_color(ui_Interval_tekst, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Interval_tekst, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Interval_tekst, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Start_knop_TENS, ui_event_Start_knop_TENS, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Arc1, ui_event_Arc1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Arc2, ui_event_Arc2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Arc3, ui_event_Arc3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Arc_Interval, ui_event_Arc_Interval, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Intensiteit_Button_TENS, ui_event_Intensiteit_Button_TENS, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Frequentie_Button_TENS, ui_event_Frequentie_Button_TENS, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Interval_Button_TENS, ui_event_Interval_Button_TENS, LV_EVENT_ALL, NULL);

}

void ui_Vibratie_screen_init(void) {
    ui_Vibratie = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Vibratie, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_scrollbar_mode(ui_Vibratie, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ui_Vibratie, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Vibratie, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Titel1 = lv_label_create(ui_Vibratie);
    lv_obj_set_width(ui_Titel1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Titel1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Titel1, 0);
    lv_obj_set_y(ui_Titel1, 25);
    lv_obj_set_align(ui_Titel1, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Titel1, "Vibratie");
    lv_obj_set_style_text_color(ui_Titel1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Titel1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Titel1, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc_Standaard1 = lv_obj_create(ui_Vibratie);
    lv_obj_set_width(ui_Arc_Standaard1, 280);
    lv_obj_set_height(ui_Arc_Standaard1, 180);
    lv_obj_set_x(ui_Arc_Standaard1, 0);
    lv_obj_set_y(ui_Arc_Standaard1, -20);
    lv_obj_set_align(ui_Arc_Standaard1, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(ui_Arc_Standaard1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Arc_Standaard1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc_Standaard1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc_Standaard1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc_Standaard1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc5 = lv_arc_create(ui_Arc_Standaard1);
    lv_obj_set_width(ui_Arc5, 180);
    lv_obj_set_height(ui_Arc5, 180);
    lv_obj_set_x(ui_Arc5, 0);
    lv_obj_set_y(ui_Arc5, 5);
    lv_obj_set_align(ui_Arc5, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Arc5, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_Arc5, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc5, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc5, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc5, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc5, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc5, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc5, lv_color_hex(0x1E2537), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc5, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Arc5, LV_GRAD_DIR_NONE, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc5, lv_color_hex(0x1E2537), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc5, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc5, 10, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc5, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc5, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Start_knop_Vibratie = lv_obj_create(ui_Arc_Standaard1);
    lv_obj_set_width(ui_Start_knop_Vibratie, 120);
    lv_obj_set_height(ui_Start_knop_Vibratie, 120);
    lv_obj_set_x(ui_Start_knop_Vibratie, 0);
    lv_obj_set_y(ui_Start_knop_Vibratie, 5);
    lv_obj_set_align(ui_Start_knop_Vibratie, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Start_knop_Vibratie, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_clear_flag(ui_Start_knop_Vibratie, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Start_knop_Vibratie, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Start_knop_Vibratie, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Start_knop_Vibratie, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Start_knop_Vibratie, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Start_knop_Vibratie, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Start_knop_Vibratie, lv_color_hex(0x7BFA83), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Start_knop_Vibratie, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Arc_Intensiteit1 = lv_obj_create(ui_Vibratie);
    lv_obj_set_width(ui_Arc_Intensiteit1, 280);
    lv_obj_set_height(ui_Arc_Intensiteit1, 180);
    lv_obj_set_x(ui_Arc_Intensiteit1, 0);
    lv_obj_set_y(ui_Arc_Intensiteit1, -20);
    lv_obj_set_align(ui_Arc_Intensiteit1, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Arc_Intensiteit1, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_Arc_Intensiteit1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Arc_Intensiteit1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc_Intensiteit1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc_Intensiteit1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc_Intensiteit1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc6 = lv_arc_create(ui_Arc_Intensiteit1);
    lv_obj_set_width(ui_Arc6, 180);
    lv_obj_set_height(ui_Arc6, 180);
    lv_obj_set_x(ui_Arc6, 0);
    lv_obj_set_y(ui_Arc6, 5);
    lv_obj_set_align(ui_Arc6, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_Arc6, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc6, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc6, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc6, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc6, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc6, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_grad_dir(ui_Arc6, LV_GRAD_DIR_VER, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc6, lv_color_hex(0x605BFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc6, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc6, 10, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc6, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc6, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Blauw_rondje_intensiteit3 = lv_obj_create(ui_Arc_Intensiteit1);
    lv_obj_set_width(ui_Blauw_rondje_intensiteit3, 120);
    lv_obj_set_height(ui_Blauw_rondje_intensiteit3, 120);
    lv_obj_set_x(ui_Blauw_rondje_intensiteit3, 0);
    lv_obj_set_y(ui_Blauw_rondje_intensiteit3, 5);
    lv_obj_set_align(ui_Blauw_rondje_intensiteit3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Blauw_rondje_intensiteit3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Blauw_rondje_intensiteit3, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Blauw_rondje_intensiteit3, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Blauw_rondje_intensiteit3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Blauw_rondje_intensiteit3, lv_color_hex(0x000000),
                                  LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Blauw_rondje_intensiteit3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Tekst_Arc4 = lv_label_create(ui_Arc_Intensiteit1);
    lv_obj_set_width(ui_Tekst_Arc4, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Tekst_Arc4, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Tekst_Arc4, 0);
    lv_obj_set_y(ui_Tekst_Arc4, 5);
    lv_obj_set_align(ui_Tekst_Arc4, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Tekst_Arc4, "0%");
    lv_obj_set_style_text_color(ui_Tekst_Arc4, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Tekst_Arc4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Tekst_Arc4, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc_Frequentie1 = lv_obj_create(ui_Vibratie);
    lv_obj_set_width(ui_Arc_Frequentie1, 280);
    lv_obj_set_height(ui_Arc_Frequentie1, 180);
    lv_obj_set_x(ui_Arc_Frequentie1, 0);
    lv_obj_set_y(ui_Arc_Frequentie1, -20);
    lv_obj_set_align(ui_Arc_Frequentie1, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Arc_Frequentie1, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_Arc_Frequentie1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Arc_Frequentie1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc_Frequentie1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc_Frequentie1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc_Frequentie1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc7 = lv_arc_create(ui_Arc_Frequentie1);
    lv_obj_set_width(ui_Arc7, 180);
    lv_obj_set_height(ui_Arc7, 180);
    lv_obj_set_x(ui_Arc7, 0);
    lv_obj_set_y(ui_Arc7, 5);
    lv_obj_set_align(ui_Arc7, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_Arc7, 0, 300);
    lv_obj_set_style_radius(ui_Arc7, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc7, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc7, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc7, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc7, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc7, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_grad_dir(ui_Arc7, LV_GRAD_DIR_VER, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc7, lv_color_hex(0x605BFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc7, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc7, 10, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc7, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc7, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Blauw_rondje_Frequentie1 = lv_obj_create(ui_Arc_Frequentie1);
    lv_obj_set_width(ui_Blauw_rondje_Frequentie1, 120);
    lv_obj_set_height(ui_Blauw_rondje_Frequentie1, 120);
    lv_obj_set_x(ui_Blauw_rondje_Frequentie1, 0);
    lv_obj_set_y(ui_Blauw_rondje_Frequentie1, 5);
    lv_obj_set_align(ui_Blauw_rondje_Frequentie1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Blauw_rondje_Frequentie1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Blauw_rondje_Frequentie1, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Blauw_rondje_Frequentie1, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Blauw_rondje_Frequentie1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Blauw_rondje_Frequentie1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Blauw_rondje_Frequentie1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Tekst_Arc5 = lv_label_create(ui_Arc_Frequentie1);
    lv_obj_set_width(ui_Tekst_Arc5, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Tekst_Arc5, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Tekst_Arc5, 0);
    lv_obj_set_y(ui_Tekst_Arc5, 5);
    lv_obj_set_align(ui_Tekst_Arc5, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Tekst_Arc5, "0Hz");
    lv_obj_set_style_text_color(ui_Tekst_Arc5, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Tekst_Arc5, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Tekst_Arc5, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc_Interval1 = lv_obj_create(ui_Vibratie);
    lv_obj_set_width(ui_Arc_Interval1, 280);
    lv_obj_set_height(ui_Arc_Interval1, 180);
    lv_obj_set_x(ui_Arc_Interval1, 0);
    lv_obj_set_y(ui_Arc_Interval1, -20);
    lv_obj_set_align(ui_Arc_Interval1, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Arc_Interval1, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_Arc_Interval1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Arc_Interval1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc_Interval1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc_Interval1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc_Interval1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc8 = lv_arc_create(ui_Arc_Interval1);
    lv_obj_set_width(ui_Arc8, 180);
    lv_obj_set_height(ui_Arc8, 180);
    lv_obj_set_x(ui_Arc8, 0);
    lv_obj_set_y(ui_Arc8, 5);
    lv_obj_set_align(ui_Arc8, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_Arc8, 0, 10);
    lv_obj_set_style_radius(ui_Arc8, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc8, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc8, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc8, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc8, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc8, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_grad_dir(ui_Arc8, LV_GRAD_DIR_VER, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc8, lv_color_hex(0x605BFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc8, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc8, 10, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc8, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc8, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Blauwrondje_Interval1 = lv_obj_create(ui_Arc_Interval1);
    lv_obj_set_width(ui_Blauwrondje_Interval1, 120);
    lv_obj_set_height(ui_Blauwrondje_Interval1, 120);
    lv_obj_set_x(ui_Blauwrondje_Interval1, 0);
    lv_obj_set_y(ui_Blauwrondje_Interval1, 5);
    lv_obj_set_align(ui_Blauwrondje_Interval1, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Blauwrondje_Interval1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Blauwrondje_Interval1, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Blauwrondje_Interval1, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Blauwrondje_Interval1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Blauwrondje_Interval1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Blauwrondje_Interval1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Tekst_Arc6 = lv_label_create(ui_Arc_Interval1);
    lv_obj_set_width(ui_Tekst_Arc6, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Tekst_Arc6, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Tekst_Arc6, 0);
    lv_obj_set_y(ui_Tekst_Arc6, 5);
    lv_obj_set_align(ui_Tekst_Arc6, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Tekst_Arc6, "0 Sec");
    lv_obj_set_style_text_color(ui_Tekst_Arc6, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Tekst_Arc6, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Tekst_Arc6, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Intensiteit_Button_Vibratie = lv_btn_create(ui_Vibratie);
    lv_obj_set_width(ui_Intensiteit_Button_Vibratie, 280);
    lv_obj_set_height(ui_Intensiteit_Button_Vibratie, 45);
    lv_obj_set_x(ui_Intensiteit_Button_Vibratie, 0);
    lv_obj_set_y(ui_Intensiteit_Button_Vibratie, -350);
    lv_obj_set_align(ui_Intensiteit_Button_Vibratie, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Intensiteit_Button_Vibratie, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Intensiteit_Button_Vibratie,
                      LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Intensiteit_Button_Vibratie, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Intensiteit_Button_Vibratie, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Intensiteit_Button_Vibratie, lv_color_hex(0x605BFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Intensiteit_Button_Vibratie, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Intensiteit_Button_Vibratie, lv_color_hex(0x326EAF), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_Intensiteit_Button_Vibratie, 100, LV_PART_MAIN | LV_STATE_FOCUSED);

    ui_Intensiteit_getal1 = lv_label_create(ui_Intensiteit_Button_Vibratie);
    lv_obj_set_width(ui_Intensiteit_getal1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Intensiteit_getal1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Intensiteit_getal1, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Intensiteit_getal1, "0%");
    lv_obj_set_style_text_color(ui_Intensiteit_getal1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Intensiteit_getal1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Intensiteit_getal1, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Intensiteit_tekst1 = lv_label_create(ui_Intensiteit_Button_Vibratie);
    lv_obj_set_width(ui_Intensiteit_tekst1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Intensiteit_tekst1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Intensiteit_tekst1, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Intensiteit_tekst1, "Intensiteit");
    lv_obj_set_style_text_color(ui_Intensiteit_tekst1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Intensiteit_tekst1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Intensiteit_tekst1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Frequentie_Button_Vibratie = lv_btn_create(ui_Vibratie);
    lv_obj_set_width(ui_Frequentie_Button_Vibratie, 280);
    lv_obj_set_height(ui_Frequentie_Button_Vibratie, 45);
    lv_obj_set_x(ui_Frequentie_Button_Vibratie, 0);
    lv_obj_set_y(ui_Frequentie_Button_Vibratie, -285);
    lv_obj_set_align(ui_Frequentie_Button_Vibratie, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Frequentie_Button_Vibratie, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Frequentie_Button_Vibratie,
                      LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Frequentie_Button_Vibratie, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Frequentie_Button_Vibratie, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Frequentie_Button_Vibratie, lv_color_hex(0x605BFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Frequentie_Button_Vibratie, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Frequentie_Button_Vibratie, lv_color_hex(0x254166), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_Frequentie_Button_Vibratie, 255, LV_PART_MAIN | LV_STATE_FOCUSED);

    ui_Frequentie_getal1 = lv_label_create(ui_Frequentie_Button_Vibratie);
    lv_obj_set_width(ui_Frequentie_getal1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Frequentie_getal1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Frequentie_getal1, 0);
    lv_obj_set_y(ui_Frequentie_getal1, 2);
    lv_obj_set_align(ui_Frequentie_getal1, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Frequentie_getal1, " 0 Hz");
    lv_obj_clear_flag(ui_Frequentie_getal1, LV_OBJ_FLAG_CLICK_FOCUSABLE);      /// Flags
    lv_obj_set_style_text_color(ui_Frequentie_getal1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Frequentie_getal1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Frequentie_getal1, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Frequentie_tekst1 = lv_label_create(ui_Frequentie_Button_Vibratie);
    lv_obj_set_width(ui_Frequentie_tekst1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Frequentie_tekst1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Frequentie_tekst1, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Frequentie_tekst1, "Frequentie");
    lv_obj_set_style_text_color(ui_Frequentie_tekst1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Frequentie_tekst1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Frequentie_tekst1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Interval_Button_Vibratie = lv_btn_create(ui_Vibratie);
    lv_obj_set_width(ui_Interval_Button_Vibratie, 280);
    lv_obj_set_height(ui_Interval_Button_Vibratie, 45);
    lv_obj_set_x(ui_Interval_Button_Vibratie, 0);
    lv_obj_set_y(ui_Interval_Button_Vibratie, -220);
    lv_obj_set_align(ui_Interval_Button_Vibratie, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Interval_Button_Vibratie, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Interval_Button_Vibratie, LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Interval_Button_Vibratie, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Interval_Button_Vibratie, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Interval_Button_Vibratie, lv_color_hex(0x605BFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Interval_Button_Vibratie, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Interval_Button_Vibratie, lv_color_hex(0x254166), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_Interval_Button_Vibratie, 255, LV_PART_MAIN | LV_STATE_FOCUSED);

    ui_Interval_getal1 = lv_label_create(ui_Interval_Button_Vibratie);
    lv_obj_set_width(ui_Interval_getal1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Interval_getal1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Interval_getal1, 0);
    lv_obj_set_y(ui_Interval_getal1, 2);
    lv_obj_set_align(ui_Interval_getal1, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Interval_getal1, "0 Sec");
    lv_obj_set_style_text_color(ui_Interval_getal1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Interval_getal1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Interval_getal1, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Interval_tekst1 = lv_label_create(ui_Interval_Button_Vibratie);
    lv_obj_set_width(ui_Interval_tekst1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Interval_tekst1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Interval_tekst1, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Interval_tekst1, "Interval");
    lv_obj_set_style_text_color(ui_Interval_tekst1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Interval_tekst1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Interval_tekst1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Start_knop_Vibratie, ui_event_Start_knop_Vibratie, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Arc6, ui_event_Arc6, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Arc7, ui_event_Arc7, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Arc8, ui_event_Arc8, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Arc_Interval1, ui_event_Arc_Interval1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Intensiteit_Button_Vibratie, ui_event_Intensiteit_Button_Vibratie, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Frequentie_Button_Vibratie, ui_event_Frequentie_Button_Vibratie, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Interval_Button_Vibratie, ui_event_Interval_Button_Vibratie, LV_EVENT_ALL, NULL);

}

void ui_Licht_screen_init(void) {
    ui_Licht = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Licht, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_scrollbar_mode(ui_Licht, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ui_Licht, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Licht, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Titel3 = lv_label_create(ui_Licht);
    lv_obj_set_width(ui_Titel3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Titel3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Titel3, 0);
    lv_obj_set_y(ui_Titel3, 25);
    lv_obj_set_align(ui_Titel3, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Titel3, "Licht\n");
    lv_obj_set_style_text_color(ui_Titel3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Titel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Titel3, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc_Standaard3 = lv_obj_create(ui_Licht);
    lv_obj_set_width(ui_Arc_Standaard3, 280);
    lv_obj_set_height(ui_Arc_Standaard3, 180);
    lv_obj_set_x(ui_Arc_Standaard3, 0);
    lv_obj_set_y(ui_Arc_Standaard3, -20);
    lv_obj_set_align(ui_Arc_Standaard3, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(ui_Arc_Standaard3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Arc_Standaard3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc_Standaard3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc_Standaard3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc_Standaard3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc11 = lv_arc_create(ui_Arc_Standaard3);
    lv_obj_set_width(ui_Arc11, 180);
    lv_obj_set_height(ui_Arc11, 180);
    lv_obj_set_x(ui_Arc11, 0);
    lv_obj_set_y(ui_Arc11, 5);
    lv_obj_set_align(ui_Arc11, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Arc11, LV_OBJ_FLAG_CLICKABLE);      /// Flags
    lv_obj_set_style_radius(ui_Arc11, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc11, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc11, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc11, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc11, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc11, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc11, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc11, lv_color_hex(0x1E2537), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc11, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Arc11, LV_GRAD_DIR_NONE, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc11, lv_color_hex(0x1E2537), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc11, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc11, 10, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc11, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc11, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Start_knop_Licht = lv_obj_create(ui_Arc_Standaard3);
    lv_obj_set_width(ui_Start_knop_Licht, 120);
    lv_obj_set_height(ui_Start_knop_Licht, 120);
    lv_obj_set_x(ui_Start_knop_Licht, 0);
    lv_obj_set_y(ui_Start_knop_Licht, 5);
    lv_obj_set_align(ui_Start_knop_Licht, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Start_knop_Licht, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_clear_flag(ui_Start_knop_Licht, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Start_knop_Licht, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Start_knop_Licht, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Start_knop_Licht, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Start_knop_Licht, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Start_knop_Licht, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Start_knop_Licht, lv_color_hex(0x34FF5F), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Start_knop_Licht, 255, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Arc_Intensiteit3 = lv_obj_create(ui_Licht);
    lv_obj_set_width(ui_Arc_Intensiteit3, 280);
    lv_obj_set_height(ui_Arc_Intensiteit3, 180);
    lv_obj_set_x(ui_Arc_Intensiteit3, 0);
    lv_obj_set_y(ui_Arc_Intensiteit3, -20);
    lv_obj_set_align(ui_Arc_Intensiteit3, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Arc_Intensiteit3, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_Arc_Intensiteit3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Arc_Intensiteit3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc_Intensiteit3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc_Intensiteit3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc_Intensiteit3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc13 = lv_arc_create(ui_Arc_Intensiteit3);
    lv_obj_set_width(ui_Arc13, 180);
    lv_obj_set_height(ui_Arc13, 180);
    lv_obj_set_x(ui_Arc13, 0);
    lv_obj_set_y(ui_Arc13, 5);
    lv_obj_set_align(ui_Arc13, LV_ALIGN_CENTER);
    lv_obj_set_style_radius(ui_Arc13, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc13, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc13, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc13, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc13, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc13, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc13, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_grad_dir(ui_Arc13, LV_GRAD_DIR_VER, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc13, lv_color_hex(0x605BFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc13, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc13, 10, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc13, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc13, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Blauw_rondje_intensiteit7 = lv_obj_create(ui_Arc_Intensiteit3);
    lv_obj_set_width(ui_Blauw_rondje_intensiteit7, 120);
    lv_obj_set_height(ui_Blauw_rondje_intensiteit7, 120);
    lv_obj_set_x(ui_Blauw_rondje_intensiteit7, 0);
    lv_obj_set_y(ui_Blauw_rondje_intensiteit7, 5);
    lv_obj_set_align(ui_Blauw_rondje_intensiteit7, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Blauw_rondje_intensiteit7, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Blauw_rondje_intensiteit7, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Blauw_rondje_intensiteit7, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Blauw_rondje_intensiteit7, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Blauw_rondje_intensiteit7, lv_color_hex(0x000000),
                                  LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Blauw_rondje_intensiteit7, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Tekst_Arc8 = lv_label_create(ui_Arc_Intensiteit3);
    lv_obj_set_width(ui_Tekst_Arc8, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Tekst_Arc8, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Tekst_Arc8, 0);
    lv_obj_set_y(ui_Tekst_Arc8, 5);
    lv_obj_set_align(ui_Tekst_Arc8, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Tekst_Arc8, "0%");
    lv_obj_set_style_text_color(ui_Tekst_Arc8, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Tekst_Arc8, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Tekst_Arc8, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Kleur = lv_obj_create(ui_Licht);
    lv_obj_set_width(ui_Kleur, 280);
    lv_obj_set_height(ui_Kleur, 180);
    lv_obj_set_x(ui_Kleur, 1);
    lv_obj_set_y(ui_Kleur, -20);
    lv_obj_set_align(ui_Kleur, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Kleur, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_Kleur, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Kleur, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Kleur, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Kleur, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Kleur, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button_Rood = lv_btn_create(ui_Kleur);
    lv_obj_set_width(ui_Button_Rood, 115);
    lv_obj_set_height(ui_Button_Rood, 65);
    lv_obj_add_flag(ui_Button_Rood, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button_Rood, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button_Rood, lv_color_hex(0xFB7B7B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button_Rood, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button_Rood, lv_color_hex(0xFF797B), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Button_Rood, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_color(ui_Button_Rood, lv_color_hex(0xFF0003), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_opa(ui_Button_Rood, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui_Button_Rood, 5, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_side(ui_Button_Rood, LV_BORDER_SIDE_FULL, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Rood_Tekst = lv_label_create(ui_Button_Rood);
    lv_obj_set_width(ui_Rood_Tekst, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Rood_Tekst, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Rood_Tekst, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Rood_Tekst, "Rood");
    lv_obj_set_style_text_color(ui_Rood_Tekst, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Rood_Tekst, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button_Groen = lv_btn_create(ui_Kleur);
    lv_obj_set_width(ui_Button_Groen, 115);
    lv_obj_set_height(ui_Button_Groen, 65);
    lv_obj_set_align(ui_Button_Groen, LV_ALIGN_TOP_RIGHT);
    lv_obj_add_flag(ui_Button_Groen, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button_Groen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button_Groen, lv_color_hex(0x7BFB81), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button_Groen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button_Groen, lv_color_hex(0x7BFA83), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Button_Groen, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_color(ui_Button_Groen, lv_color_hex(0x00FF10), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_opa(ui_Button_Groen, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui_Button_Groen, 5, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Groen_tekst = lv_label_create(ui_Button_Groen);
    lv_obj_set_width(ui_Groen_tekst, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Groen_tekst, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Groen_tekst, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Groen_tekst, "Groen");
    lv_obj_set_style_text_color(ui_Groen_tekst, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Groen_tekst, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button_Blauw = lv_btn_create(ui_Kleur);
    lv_obj_set_width(ui_Button_Blauw, 115);
    lv_obj_set_height(ui_Button_Blauw, 65);
    lv_obj_set_align(ui_Button_Blauw, LV_ALIGN_BOTTOM_LEFT);
    lv_obj_add_flag(ui_Button_Blauw, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button_Blauw, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button_Blauw, lv_color_hex(0x7B91FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button_Blauw, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button_Blauw, lv_color_hex(0x7B91FF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Button_Blauw, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_color(ui_Button_Blauw, lv_color_hex(0x0028FF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_opa(ui_Button_Blauw, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui_Button_Blauw, 5, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Blauw_tekst = lv_label_create(ui_Button_Blauw);
    lv_obj_set_width(ui_Blauw_tekst, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Blauw_tekst, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Blauw_tekst, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Blauw_tekst, "Blauw");
    lv_obj_set_style_text_color(ui_Blauw_tekst, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Blauw_tekst, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Button_Geel = lv_btn_create(ui_Kleur);
    lv_obj_set_width(ui_Button_Geel, 115);
    lv_obj_set_height(ui_Button_Geel, 65);
    lv_obj_set_align(ui_Button_Geel, LV_ALIGN_BOTTOM_RIGHT);
    lv_obj_add_flag(ui_Button_Geel, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Button_Geel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Button_Geel, lv_color_hex(0xF6FA7B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Button_Geel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Button_Geel, lv_color_hex(0xF6FA7B), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Button_Geel, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_color(ui_Button_Geel, lv_color_hex(0xF6FF00), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_opa(ui_Button_Geel, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_border_width(ui_Button_Geel, 5, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Geel_tekst = lv_label_create(ui_Button_Geel);
    lv_obj_set_width(ui_Geel_tekst, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Geel_tekst, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Geel_tekst, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Geel_tekst, "Geel");
    lv_obj_set_style_text_color(ui_Geel_tekst, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Geel_tekst, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc_Interval3 = lv_obj_create(ui_Licht);
    lv_obj_set_width(ui_Arc_Interval3, 280);
    lv_obj_set_height(ui_Arc_Interval3, 180);
    lv_obj_set_x(ui_Arc_Interval3, 0);
    lv_obj_set_y(ui_Arc_Interval3, -20);
    lv_obj_set_align(ui_Arc_Interval3, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Arc_Interval3, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_Arc_Interval3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Arc_Interval3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc_Interval3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc_Interval3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc_Interval3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc14 = lv_arc_create(ui_Arc_Interval3);
    lv_obj_set_width(ui_Arc14, 180);
    lv_obj_set_height(ui_Arc14, 180);
    lv_obj_set_x(ui_Arc14, 0);
    lv_obj_set_y(ui_Arc14, 5);
    lv_obj_set_align(ui_Arc14, LV_ALIGN_CENTER);
    lv_arc_set_range(ui_Arc14, 0, 10);
    lv_obj_set_style_radius(ui_Arc14, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc14, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc14, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc14, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc14, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc14, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc14, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_grad_dir(ui_Arc14, LV_GRAD_DIR_VER, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc14, lv_color_hex(0x605BFF), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc14, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc14, 10, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc14, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc14, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Blauwrondje_Interval3 = lv_obj_create(ui_Arc_Interval3);
    lv_obj_set_width(ui_Blauwrondje_Interval3, 120);
    lv_obj_set_height(ui_Blauwrondje_Interval3, 120);
    lv_obj_set_x(ui_Blauwrondje_Interval3, 0);
    lv_obj_set_y(ui_Blauwrondje_Interval3, 5);
    lv_obj_set_align(ui_Blauwrondje_Interval3, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Blauwrondje_Interval3, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Blauwrondje_Interval3, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Blauwrondje_Interval3, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Blauwrondje_Interval3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Blauwrondje_Interval3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Blauwrondje_Interval3, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Tekst_Arc10 = lv_label_create(ui_Arc_Interval3);
    lv_obj_set_width(ui_Tekst_Arc10, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Tekst_Arc10, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Tekst_Arc10, 0);
    lv_obj_set_y(ui_Tekst_Arc10, 5);
    lv_obj_set_align(ui_Tekst_Arc10, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Tekst_Arc10, "0 Sec");
    lv_obj_set_style_text_color(ui_Tekst_Arc10, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Tekst_Arc10, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Tekst_Arc10, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Intensiteit_Button_Licht = lv_btn_create(ui_Licht);
    lv_obj_set_width(ui_Intensiteit_Button_Licht, 280);
    lv_obj_set_height(ui_Intensiteit_Button_Licht, 45);
    lv_obj_set_x(ui_Intensiteit_Button_Licht, 0);
    lv_obj_set_y(ui_Intensiteit_Button_Licht, -350);
    lv_obj_set_align(ui_Intensiteit_Button_Licht, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Intensiteit_Button_Licht, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Intensiteit_Button_Licht, LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Intensiteit_Button_Licht, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Intensiteit_Button_Licht, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Intensiteit_Button_Licht, lv_color_hex(0x605BFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Intensiteit_Button_Licht, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Intensiteit_Button_Licht, lv_color_hex(0x326EAF), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_Intensiteit_Button_Licht, 100, LV_PART_MAIN | LV_STATE_FOCUSED);

    ui_Intensiteit_getal3 = lv_label_create(ui_Intensiteit_Button_Licht);
    lv_obj_set_width(ui_Intensiteit_getal3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Intensiteit_getal3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Intensiteit_getal3, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Intensiteit_getal3, "0%");
    lv_obj_set_style_text_color(ui_Intensiteit_getal3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Intensiteit_getal3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Intensiteit_getal3, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Intensiteit_tekst3 = lv_label_create(ui_Intensiteit_Button_Licht);
    lv_obj_set_width(ui_Intensiteit_tekst3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Intensiteit_tekst3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Intensiteit_tekst3, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Intensiteit_tekst3, "Intensiteit");
    lv_obj_set_style_text_color(ui_Intensiteit_tekst3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Intensiteit_tekst3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Intensiteit_tekst3, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Kleur_Button_Licht = lv_btn_create(ui_Licht);
    lv_obj_set_width(ui_Kleur_Button_Licht, 280);
    lv_obj_set_height(ui_Kleur_Button_Licht, 45);
    lv_obj_set_x(ui_Kleur_Button_Licht, 0);
    lv_obj_set_y(ui_Kleur_Button_Licht, -285);
    lv_obj_set_align(ui_Kleur_Button_Licht, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Kleur_Button_Licht, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Kleur_Button_Licht, LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Kleur_Button_Licht, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Kleur_Button_Licht, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Kleur_Button_Licht, lv_color_hex(0x605BFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Kleur_Button_Licht, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Kleur_Button_Licht, lv_color_hex(0x254166), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_Kleur_Button_Licht, 255, LV_PART_MAIN | LV_STATE_FOCUSED);

    ui_Kleur_tekst1 = lv_label_create(ui_Kleur_Button_Licht);
    lv_obj_set_width(ui_Kleur_tekst1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Kleur_tekst1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Kleur_tekst1, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Kleur_tekst1, "Kleur");
    lv_obj_set_style_text_color(ui_Kleur_tekst1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Kleur_tekst1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Kleur_tekst1, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Rood = lv_obj_create(ui_Kleur_Button_Licht);
    lv_obj_set_width(ui_Rood, 50);
    lv_obj_set_height(ui_Rood, 30);
    lv_obj_set_align(ui_Rood, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_Rood, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_Rood, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Rood, lv_color_hex(0xFF797B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Rood, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Groen = lv_obj_create(ui_Kleur_Button_Licht);
    lv_obj_set_width(ui_Groen, 50);
    lv_obj_set_height(ui_Groen, 30);
    lv_obj_set_align(ui_Groen, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_Groen, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_Groen, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Groen, lv_color_hex(0x7BFA83), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Groen, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Blauw = lv_obj_create(ui_Kleur_Button_Licht);
    lv_obj_set_width(ui_Blauw, 50);
    lv_obj_set_height(ui_Blauw, 30);
    lv_obj_set_align(ui_Blauw, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_Blauw, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_Blauw, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Blauw, lv_color_hex(0x7B91FF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Blauw, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Geel = lv_obj_create(ui_Kleur_Button_Licht);
    lv_obj_set_width(ui_Geel, 50);
    lv_obj_set_height(ui_Geel, 30);
    lv_obj_set_align(ui_Geel, LV_ALIGN_RIGHT_MID);
    lv_obj_add_flag(ui_Geel, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_Geel, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Geel, lv_color_hex(0xF6FA7B), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Geel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Interval_Button_Licht = lv_btn_create(ui_Licht);
    lv_obj_set_width(ui_Interval_Button_Licht, 280);
    lv_obj_set_height(ui_Interval_Button_Licht, 45);
    lv_obj_set_x(ui_Interval_Button_Licht, 0);
    lv_obj_set_y(ui_Interval_Button_Licht, -220);
    lv_obj_set_align(ui_Interval_Button_Licht, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Interval_Button_Licht, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Interval_Button_Licht, LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Interval_Button_Licht, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Interval_Button_Licht, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Interval_Button_Licht, lv_color_hex(0x605BFF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Interval_Button_Licht, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Interval_Button_Licht, lv_color_hex(0x254166), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_Interval_Button_Licht, 255, LV_PART_MAIN | LV_STATE_FOCUSED);

    ui_Interval_getal3 = lv_label_create(ui_Interval_Button_Licht);
    lv_obj_set_width(ui_Interval_getal3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Interval_getal3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Interval_getal3, 0);
    lv_obj_set_y(ui_Interval_getal3, 2);
    lv_obj_set_align(ui_Interval_getal3, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Interval_getal3, "0 Sec");
    lv_obj_set_style_text_color(ui_Interval_getal3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Interval_getal3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Interval_getal3, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Interval_tekst3 = lv_label_create(ui_Interval_Button_Licht);
    lv_obj_set_width(ui_Interval_tekst3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Interval_tekst3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Interval_tekst3, LV_ALIGN_LEFT_MID);
    lv_label_set_text(ui_Interval_tekst3, "Interval");
    lv_obj_set_style_text_color(ui_Interval_tekst3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Interval_tekst3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Interval_tekst3, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Start_knop_Licht, ui_event_Start_knop_Licht, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Arc13, ui_event_Arc13, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button_Rood, ui_event_Button_Rood, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button_Groen, ui_event_Button_Groen, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button_Blauw, ui_event_Button_Blauw, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Button_Geel, ui_event_Button_Geel, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Arc14, ui_event_Arc14, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Arc_Interval3, ui_event_Arc_Interval3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Intensiteit_Button_Licht, ui_event_Intensiteit_Button_Licht, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Kleur_Button_Licht, ui_event_Kleur_Button_Licht, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Interval_Button_Licht, ui_event_Interval_Button_Licht, LV_EVENT_ALL, NULL);

}

void ui_init(void) {
    lv_disp_t *disp_get_default = lv_disp_get_default();
    lv_theme_t *theme = lv_theme_default_init(disp_get_default, lv_palette_main(LV_PALETTE_BLUE),
                                              lv_palette_main(LV_PALETTE_RED),
                                              false, LV_FONT_DEFAULT);
    lv_disp_set_theme(disp_get_default, theme);
    ui_Startup_screen_init();
    ui_TENS_screen_init();
    ui_Vibratie_screen_init();
    ui_Licht_screen_init();
    lv_disp_load_scr(ui_Startup);
}