// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.1
// LVGL VERSION: 8.2.0
// PROJECT: APPS GUI

#include "ui.h"
#include "ui_helpers.h"
#include "ui_comp.h"

///////////////////// VARIABLES ////////////////////
void Startup_Animation(lv_obj_t * TargetObject, int delay);
void Sluitmoduleaan_Animation(lv_obj_t * TargetObject, int delay);
void ui_event_Startup(lv_event_t * e);
lv_obj_t * ui_Startup;
lv_obj_t * ui_APPS_logo;
lv_obj_t * ui_Sluit_module_aan1;
void ui_event_Sluit_module_aan(lv_event_t * e);
lv_obj_t * ui_Sluit_module_aan;
lv_obj_t * ui_TENS;
lv_obj_t * ui_Titel;
lv_obj_t * ui_Arc_Standaard;
lv_obj_t * ui_Arc4;
void ui_event_Blauw_rondje_intensiteit1(lv_event_t * e);
lv_obj_t * ui_Blauw_rondje_intensiteit1;
lv_obj_t * ui_Arc_Intensiteit;
void ui_event_Arc1(lv_event_t * e);
lv_obj_t * ui_Arc1;
lv_obj_t * ui_Blauw_rondje_intensiteit;
lv_obj_t * ui_Tekst_Arc1;
lv_obj_t * ui_Arc_Frequentie;
void ui_event_Arc2(lv_event_t * e);
lv_obj_t * ui_Arc2;
lv_obj_t * ui_Blauw_rondje_Frequentie;
lv_obj_t * ui_Tekst_Arc2;
void ui_event_Arc_Interval(lv_event_t * e);
lv_obj_t * ui_Arc_Interval;
void ui_event_Arc3(lv_event_t * e);
lv_obj_t * ui_Arc3;
lv_obj_t * ui_Blauwrondje_Interval;
lv_obj_t * ui_Tekst_Arc3;
void ui_event_Intensiteit_Button(lv_event_t * e);
lv_obj_t * ui_Intensiteit_Button;
lv_obj_t * ui_Intensiteit_getal;
lv_obj_t * ui_Intensiteit_tekst;
void ui_event_Frequentie_Button(lv_event_t * e);
lv_obj_t * ui_Frequentie_Button;
lv_obj_t * ui_Frequentie_getal;
lv_obj_t * ui_Frequentie_tekst;
void ui_event_Interval_Button(lv_event_t * e);
lv_obj_t * ui_Interval_Button;
lv_obj_t * ui_Interval_getal;
lv_obj_t * ui_Interval_tekst;

///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
    #error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP !=1
    #error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

///////////////////// ANIMATIONS ////////////////////
void Startup_Animation(lv_obj_t * TargetObject, int delay)
{
    lv_anim_t PropertyAnimation_0;
    lv_anim_init(&PropertyAnimation_0);
    lv_anim_set_time(&PropertyAnimation_0, 1000);
    lv_anim_set_user_data(&PropertyAnimation_0, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_0, _ui_anim_callback_set_image_zoom);
    lv_anim_set_values(&PropertyAnimation_0, -220, 0);
    lv_anim_set_path_cb(&PropertyAnimation_0, lv_anim_path_overshoot);
    lv_anim_set_delay(&PropertyAnimation_0, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_0, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_0, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_0, 0);
    lv_anim_set_early_apply(&PropertyAnimation_0, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_0, &_ui_anim_callback_get_image_zoom);
    lv_anim_start(&PropertyAnimation_0);
    lv_anim_t PropertyAnimation_1;
    lv_anim_init(&PropertyAnimation_1);
    lv_anim_set_time(&PropertyAnimation_1, 1000);
    lv_anim_set_user_data(&PropertyAnimation_1, TargetObject);
    lv_anim_set_custom_exec_cb(&PropertyAnimation_1, _ui_anim_callback_set_opacity);
    lv_anim_set_values(&PropertyAnimation_1, -256, 0);
    lv_anim_set_path_cb(&PropertyAnimation_1, lv_anim_path_linear);
    lv_anim_set_delay(&PropertyAnimation_1, delay + 0);
    lv_anim_set_playback_time(&PropertyAnimation_1, 0);
    lv_anim_set_playback_delay(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_count(&PropertyAnimation_1, 0);
    lv_anim_set_repeat_delay(&PropertyAnimation_1, 0);
    lv_anim_set_early_apply(&PropertyAnimation_1, false);
    lv_anim_set_get_value_cb(&PropertyAnimation_1, &_ui_anim_callback_get_opacity);
    lv_anim_start(&PropertyAnimation_1);

}
void Sluitmoduleaan_Animation(lv_obj_t * TargetObject, int delay)
{
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
void ui_event_Startup(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOADED) {
        Startup_Animation(ui_APPS_logo, 0);
    }
    if(event_code == LV_EVENT_SCREEN_LOADED) {
        Sluitmoduleaan_Animation(ui_Sluit_module_aan, 2000);
    }
    if(event_code == LV_EVENT_CLICKED) {
        _ui_screen_change(ui_TENS, LV_SCR_LOAD_ANIM_FADE_ON, 0, 0);
    }
    if(event_code == LV_EVENT_SCREEN_LOADED) {
        Sluitmoduleaan_Animation(ui_Sluit_module_aan1, 2000);
    }
}
void ui_event_Sluit_module_aan(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_SCREEN_LOADED) {
        Sluitmoduleaan_Animation(ui_Sluit_module_aan1, 0);
    }
}
void ui_event_Blauw_rondje_intensiteit1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Frequentie_Button, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Intensiteit_Button, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Interval_Button, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Intensiteit_Button, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Frequentie_Button, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Interval_Button, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Intensiteit_Button, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Intensiteit_Button, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Frequentie_Button, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Frequentie_Button, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_Arc1(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_arc_set_text_value(ui_Intensiteit_getal, target, "", "%");
        _ui_arc_set_text_value(ui_Tekst_Arc1, target, "", "%");
        _ui_state_modify(ui_Intensiteit_Button, LV_STATE_PRESSED, _UI_MODIFY_STATE_REMOVE);
    }
}
void ui_event_Arc2(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_arc_set_text_value(ui_Frequentie_getal, target, "", " Hz");
        _ui_arc_set_text_value(ui_Tekst_Arc2, target, "", " Hz");
    }
}
void ui_event_Arc_Interval(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_CLICKED) {
        _ui_flag_modify(ui_Arc_Interval, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
}
void ui_event_Arc3(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED) {
        _ui_arc_set_text_value(ui_Interval_getal, target, "", " Sec");
        _ui_arc_set_text_value(ui_Tekst_Arc3, target, "", " Sec");
    }
}
void ui_event_Intensiteit_Button(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Arc_Intensiteit, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Arc_Intensiteit, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Interval_Button, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Interval_Button, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Frequentie_Button, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Frequentie_Button, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Frequentie_Button, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Frequentie_Button, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_Frequentie_Button(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Arc_Frequentie, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Arc_Frequentie, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Intensiteit_Button, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Intensiteit_Button, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Interval_Button, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Interval_Button, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Intensiteit_Button, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Intensiteit_Button, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Interval_Button, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
    }
}
void ui_event_Interval_Button(lv_event_t * e)
{
    lv_event_code_t event_code = lv_event_get_code(e);
    lv_obj_t * target = lv_event_get_target(e);
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Arc_Interval, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_REMOVE);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Arc_Interval, LV_OBJ_FLAG_HIDDEN, _UI_MODIFY_FLAG_ADD);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Intensiteit_Button, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Intensiteit_Button, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Frequentie_Button, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_REMOVE);
        _ui_flag_modify(ui_Frequentie_Button, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_REMOVE);
    }
    if(event_code == LV_EVENT_VALUE_CHANGED &&  !lv_obj_has_state(target, LV_STATE_CHECKED)) {
        _ui_flag_modify(ui_Intensiteit_Button, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Intensiteit_Button, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Frequentie_Button, LV_OBJ_FLAG_CLICKABLE, _UI_MODIFY_FLAG_ADD);
        _ui_flag_modify(ui_Frequentie_Button, LV_OBJ_FLAG_CHECKABLE, _UI_MODIFY_FLAG_ADD);
    }
}

///////////////////// SCREENS ////////////////////
void ui_Startup_screen_init(void)
{
    ui_Startup = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Startup, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Startup, lv_color_hex(0x1E2537), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Startup, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_APPS_logo = lv_img_create(ui_Startup);
    lv_img_set_src(ui_APPS_logo, &ui_img_1691730083);
    lv_obj_set_width(ui_APPS_logo, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_APPS_logo, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_APPS_logo, -5);
    lv_obj_set_y(ui_APPS_logo, 0);
    lv_obj_set_align(ui_APPS_logo, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_APPS_logo, LV_OBJ_FLAG_ADV_HITTEST);     /// Flags
    lv_obj_clear_flag(ui_APPS_logo, LV_OBJ_FLAG_SCROLLABLE);      /// Flags

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
    lv_obj_set_style_text_color(ui_Sluit_module_aan, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Sluit_module_aan, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Sluit_module_aan, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Sluit_module_aan, ui_event_Sluit_module_aan, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Startup, ui_event_Startup, LV_EVENT_ALL, NULL);

}
void ui_TENS_screen_init(void)
{
    ui_TENS = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_TENS, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_scrollbar_mode(ui_TENS, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ui_TENS, lv_color_hex(0x1E2537), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_TENS, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Titel = lv_label_create(ui_TENS);
    lv_obj_set_width(ui_Titel, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Titel, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Titel, 0);
    lv_obj_set_y(ui_Titel, 25);
    lv_obj_set_align(ui_Titel, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Titel, "TENS");
    lv_obj_set_style_text_color(ui_Titel, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Titel, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Titel, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc_Standaard = lv_obj_create(ui_TENS);
    lv_obj_set_width(ui_Arc_Standaard, 280);
    lv_obj_set_height(ui_Arc_Standaard, 180);
    lv_obj_set_x(ui_Arc_Standaard, 0);
    lv_obj_set_y(ui_Arc_Standaard, -20);
    lv_obj_set_align(ui_Arc_Standaard, LV_ALIGN_BOTTOM_MID);
    lv_obj_clear_flag(ui_Arc_Standaard, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Arc_Standaard, lv_color_hex(0x202C41), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc_Standaard, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc_Standaard, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc_Standaard, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc4 = lv_arc_create(ui_Arc_Standaard);
    lv_obj_set_width(ui_Arc4, 180);
    lv_obj_set_height(ui_Arc4, 180);
    lv_obj_set_x(ui_Arc4, 0);
    lv_obj_set_y(ui_Arc4, 5);
    lv_obj_set_align(ui_Arc4, LV_ALIGN_CENTER);
    lv_arc_set_value(ui_Arc4, 0);
    lv_obj_set_style_radius(ui_Arc4, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc4, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc4, lv_color_hex(0x1E2537), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc4, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc4, lv_color_hex(0x1E2537), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc4, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_grad_dir(ui_Arc4, LV_GRAD_DIR_NONE, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc4, lv_color_hex(0x1E2537), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc4, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc4, 10, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc4, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc4, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Blauw_rondje_intensiteit1 = lv_obj_create(ui_Arc_Standaard);
    lv_obj_set_width(ui_Blauw_rondje_intensiteit1, 120);
    lv_obj_set_height(ui_Blauw_rondje_intensiteit1, 120);
    lv_obj_set_x(ui_Blauw_rondje_intensiteit1, 0);
    lv_obj_set_y(ui_Blauw_rondje_intensiteit1, 5);
    lv_obj_set_align(ui_Blauw_rondje_intensiteit1, LV_ALIGN_CENTER);
    lv_obj_add_flag(ui_Blauw_rondje_intensiteit1, LV_OBJ_FLAG_CHECKABLE);     /// Flags
    lv_obj_clear_flag(ui_Blauw_rondje_intensiteit1, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Blauw_rondje_intensiteit1, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Blauw_rondje_intensiteit1, lv_color_hex(0x1E2537), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Blauw_rondje_intensiteit1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Blauw_rondje_intensiteit1, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Blauw_rondje_intensiteit1, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Blauw_rondje_intensiteit1, lv_color_hex(0x121316), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Blauw_rondje_intensiteit1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Blauw_rondje_intensiteit1, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Blauw_rondje_intensiteit1, 3, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Blauw_rondje_intensiteit1, lv_color_hex(0x40EA6E), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Blauw_rondje_intensiteit1, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_shadow_color(ui_Blauw_rondje_intensiteit1, lv_color_hex(0x40EA6E), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_shadow_opa(ui_Blauw_rondje_intensiteit1, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_shadow_width(ui_Blauw_rondje_intensiteit1, 50, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_shadow_spread(ui_Blauw_rondje_intensiteit1, 0, LV_PART_MAIN | LV_STATE_CHECKED);

    ui_Arc_Intensiteit = lv_obj_create(ui_TENS);
    lv_obj_set_width(ui_Arc_Intensiteit, 280);
    lv_obj_set_height(ui_Arc_Intensiteit, 180);
    lv_obj_set_x(ui_Arc_Intensiteit, 0);
    lv_obj_set_y(ui_Arc_Intensiteit, -20);
    lv_obj_set_align(ui_Arc_Intensiteit, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Arc_Intensiteit, LV_OBJ_FLAG_HIDDEN);     /// Flags
    lv_obj_clear_flag(ui_Arc_Intensiteit, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Arc_Intensiteit, lv_color_hex(0x222D43), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc_Intensiteit, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Arc_Intensiteit, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Arc_Intensiteit, 0, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Arc1 = lv_arc_create(ui_Arc_Intensiteit);
    lv_obj_set_width(ui_Arc1, 180);
    lv_obj_set_height(ui_Arc1, 180);
    lv_obj_set_x(ui_Arc1, 0);
    lv_obj_set_y(ui_Arc1, 5);
    lv_obj_set_align(ui_Arc1, LV_ALIGN_CENTER);
    lv_arc_set_value(ui_Arc1, 0);
    lv_obj_set_style_radius(ui_Arc1, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc1, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0x1E2537), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc1, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_grad_dir(ui_Arc1, LV_GRAD_DIR_VER, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc1, lv_color_hex(0x1E8CFA), LV_PART_INDICATOR | LV_STATE_DEFAULT);
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
    lv_obj_set_style_bg_color(ui_Blauw_rondje_intensiteit, lv_color_hex(0x326EAF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Blauw_rondje_intensiteit, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Blauw_rondje_intensiteit, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Blauw_rondje_intensiteit, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Blauw_rondje_intensiteit, lv_color_hex(0x182431), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Blauw_rondje_intensiteit, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Blauw_rondje_intensiteit, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Blauw_rondje_intensiteit, 3, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Tekst_Arc1 = lv_label_create(ui_Arc_Intensiteit);
    lv_obj_set_width(ui_Tekst_Arc1, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Tekst_Arc1, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Tekst_Arc1, 0);
    lv_obj_set_y(ui_Tekst_Arc1, 5);
    lv_obj_set_align(ui_Tekst_Arc1, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Tekst_Arc1, "0%");
    lv_obj_set_style_text_color(ui_Tekst_Arc1, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
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
    lv_obj_set_style_bg_color(ui_Arc_Frequentie, lv_color_hex(0x222D43), LV_PART_MAIN | LV_STATE_DEFAULT);
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
    lv_arc_set_value(ui_Arc2, 0);
    lv_obj_set_style_radius(ui_Arc2, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc2, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc2, lv_color_hex(0x1E2537), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc2, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_grad_dir(ui_Arc2, LV_GRAD_DIR_VER, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc2, lv_color_hex(0x1E8CFA), LV_PART_INDICATOR | LV_STATE_DEFAULT);
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
    lv_obj_set_style_bg_color(ui_Blauw_rondje_Frequentie, lv_color_hex(0x326EAF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Blauw_rondje_Frequentie, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Blauw_rondje_Frequentie, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Blauw_rondje_Frequentie, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Blauw_rondje_Frequentie, lv_color_hex(0x182431), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Blauw_rondje_Frequentie, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Blauw_rondje_Frequentie, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Blauw_rondje_Frequentie, 3, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Tekst_Arc2 = lv_label_create(ui_Arc_Frequentie);
    lv_obj_set_width(ui_Tekst_Arc2, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Tekst_Arc2, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Tekst_Arc2, 0);
    lv_obj_set_y(ui_Tekst_Arc2, 5);
    lv_obj_set_align(ui_Tekst_Arc2, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Tekst_Arc2, "0Hz");
    lv_obj_set_style_text_color(ui_Tekst_Arc2, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
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
    lv_obj_set_style_bg_color(ui_Arc_Interval, lv_color_hex(0x222D43), LV_PART_MAIN | LV_STATE_DEFAULT);
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
    lv_arc_set_value(ui_Arc3, 0);
    lv_obj_set_style_radius(ui_Arc3, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_left(ui_Arc3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_right(ui_Arc3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_top(ui_Arc3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_pad_bottom(ui_Arc3, 5, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc3, lv_color_hex(0x1E2537), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_grad_dir(ui_Arc3, LV_GRAD_DIR_VER, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_color(ui_Arc3, lv_color_hex(0x1E8CFA), LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_opa(ui_Arc3, 255, LV_PART_INDICATOR | LV_STATE_DEFAULT);
    lv_obj_set_style_arc_width(ui_Arc3, 10, LV_PART_INDICATOR | LV_STATE_DEFAULT);

    lv_obj_set_style_bg_color(ui_Arc3, lv_color_hex(0xFFFFFF), LV_PART_KNOB | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Arc3, 0, LV_PART_KNOB | LV_STATE_DEFAULT);

    ui_Blauwrondje_Interval = lv_obj_create(ui_Arc_Interval);
    lv_obj_set_width(ui_Blauwrondje_Interval, 120);
    lv_obj_set_height(ui_Blauwrondje_Interval, 120);
    lv_obj_set_x(ui_Blauwrondje_Interval, 0);
    lv_obj_set_y(ui_Blauwrondje_Interval, 5);
    lv_obj_set_align(ui_Blauwrondje_Interval, LV_ALIGN_CENTER);
    lv_obj_clear_flag(ui_Blauwrondje_Interval, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_radius(ui_Blauwrondje_Interval, 90, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Blauwrondje_Interval, lv_color_hex(0x326EAF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Blauwrondje_Interval, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_color(ui_Blauwrondje_Interval, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_border_opa(ui_Blauwrondje_Interval, 0, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_color(ui_Blauwrondje_Interval, lv_color_hex(0x182431), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_opa(ui_Blauwrondje_Interval, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_width(ui_Blauwrondje_Interval, 10, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_shadow_spread(ui_Blauwrondje_Interval, 3, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Tekst_Arc3 = lv_label_create(ui_Arc_Interval);
    lv_obj_set_width(ui_Tekst_Arc3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Tekst_Arc3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Tekst_Arc3, 0);
    lv_obj_set_y(ui_Tekst_Arc3, 5);
    lv_obj_set_align(ui_Tekst_Arc3, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Tekst_Arc3, "0 Sec");
    lv_obj_set_style_text_color(ui_Tekst_Arc3, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Tekst_Arc3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Tekst_Arc3, &lv_font_montserrat_28, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Intensiteit_Button = lv_btn_create(ui_TENS);
    lv_obj_set_width(ui_Intensiteit_Button, 280);
    lv_obj_set_height(ui_Intensiteit_Button, 45);
    lv_obj_set_x(ui_Intensiteit_Button, 0);
    lv_obj_set_y(ui_Intensiteit_Button, -350);
    lv_obj_set_align(ui_Intensiteit_Button, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Intensiteit_Button, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Intensiteit_Button, LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Intensiteit_Button, lv_color_hex(0x222D43), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Intensiteit_Button, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Intensiteit_Button, lv_color_hex(0x326EAF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Intensiteit_Button, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Intensiteit_Button, lv_color_hex(0x326EAF), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_Intensiteit_Button, 100, LV_PART_MAIN | LV_STATE_FOCUSED);

    ui_Intensiteit_getal = lv_label_create(ui_Intensiteit_Button);
    lv_obj_set_width(ui_Intensiteit_getal, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Intensiteit_getal, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Intensiteit_getal, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Intensiteit_getal, "0%");
    lv_obj_set_style_text_color(ui_Intensiteit_getal, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Intensiteit_getal, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Intensiteit_getal, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Intensiteit_tekst = lv_label_create(ui_Intensiteit_Button);
    lv_obj_set_width(ui_Intensiteit_tekst, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Intensiteit_tekst, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Intensiteit_tekst, -5);
    lv_obj_set_y(ui_Intensiteit_tekst, -5);
    lv_label_set_text(ui_Intensiteit_tekst, "Intensiteit");
    lv_obj_set_style_text_color(ui_Intensiteit_tekst, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Intensiteit_tekst, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Intensiteit_tekst, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Frequentie_Button = lv_btn_create(ui_TENS);
    lv_obj_set_width(ui_Frequentie_Button, 280);
    lv_obj_set_height(ui_Frequentie_Button, 45);
    lv_obj_set_x(ui_Frequentie_Button, 0);
    lv_obj_set_y(ui_Frequentie_Button, -285);
    lv_obj_set_align(ui_Frequentie_Button, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Frequentie_Button, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Frequentie_Button, LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Frequentie_Button, lv_color_hex(0x222D43), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Frequentie_Button, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Frequentie_Button, lv_color_hex(0x326EAF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Frequentie_Button, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Frequentie_Button, lv_color_hex(0x254166), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_Frequentie_Button, 255, LV_PART_MAIN | LV_STATE_FOCUSED);

    ui_Frequentie_getal = lv_label_create(ui_Frequentie_Button);
    lv_obj_set_width(ui_Frequentie_getal, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Frequentie_getal, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Frequentie_getal, 0);
    lv_obj_set_y(ui_Frequentie_getal, 2);
    lv_obj_set_align(ui_Frequentie_getal, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Frequentie_getal, " 0 Hz");
    lv_obj_clear_flag(ui_Frequentie_getal, LV_OBJ_FLAG_CLICK_FOCUSABLE);      /// Flags
    lv_obj_set_style_text_color(ui_Frequentie_getal, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Frequentie_getal, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Frequentie_getal, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Frequentie_tekst = lv_label_create(ui_Frequentie_Button);
    lv_obj_set_width(ui_Frequentie_tekst, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Frequentie_tekst, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Frequentie_tekst, -5);
    lv_obj_set_y(ui_Frequentie_tekst, -5);
    lv_label_set_text(ui_Frequentie_tekst, "Frequentie");
    lv_obj_set_style_text_color(ui_Frequentie_tekst, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Frequentie_tekst, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Frequentie_tekst, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Interval_Button = lv_btn_create(ui_TENS);
    lv_obj_set_width(ui_Interval_Button, 280);
    lv_obj_set_height(ui_Interval_Button, 45);
    lv_obj_set_x(ui_Interval_Button, 0);
    lv_obj_set_y(ui_Interval_Button, -220);
    lv_obj_set_align(ui_Interval_Button, LV_ALIGN_BOTTOM_MID);
    lv_obj_add_flag(ui_Interval_Button, LV_OBJ_FLAG_CHECKABLE | LV_OBJ_FLAG_SCROLL_ON_FOCUS);     /// Flags
    lv_obj_clear_flag(ui_Interval_Button, LV_OBJ_FLAG_CLICK_FOCUSABLE | LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_style_bg_color(ui_Interval_Button, lv_color_hex(0x222D43), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Interval_Button, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_color(ui_Interval_Button, lv_color_hex(0x326EAF), LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_opa(ui_Interval_Button, 255, LV_PART_MAIN | LV_STATE_CHECKED);
    lv_obj_set_style_bg_color(ui_Interval_Button, lv_color_hex(0x254166), LV_PART_MAIN | LV_STATE_FOCUSED);
    lv_obj_set_style_bg_opa(ui_Interval_Button, 255, LV_PART_MAIN | LV_STATE_FOCUSED);

    ui_Interval_getal = lv_label_create(ui_Interval_Button);
    lv_obj_set_width(ui_Interval_getal, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Interval_getal, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Interval_getal, 0);
    lv_obj_set_y(ui_Interval_getal, 2);
    lv_obj_set_align(ui_Interval_getal, LV_ALIGN_RIGHT_MID);
    lv_label_set_text(ui_Interval_getal, "0 Sec");
    lv_obj_set_style_text_color(ui_Interval_getal, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Interval_getal, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Interval_getal, &lv_font_montserrat_26, LV_PART_MAIN | LV_STATE_DEFAULT);

    ui_Interval_tekst = lv_label_create(ui_Interval_Button);
    lv_obj_set_width(ui_Interval_tekst, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Interval_tekst, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Interval_tekst, -5);
    lv_obj_set_y(ui_Interval_tekst, -5);
    lv_label_set_text(ui_Interval_tekst, "Interval");
    lv_obj_set_style_text_color(ui_Interval_tekst, lv_color_hex(0xFFFFFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Interval_tekst, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Interval_tekst, &lv_font_montserrat_14, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_add_event_cb(ui_Blauw_rondje_intensiteit1, ui_event_Blauw_rondje_intensiteit1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Arc1, ui_event_Arc1, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Arc2, ui_event_Arc2, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Arc3, ui_event_Arc3, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Arc_Interval, ui_event_Arc_Interval, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Intensiteit_Button, ui_event_Intensiteit_Button, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Frequentie_Button, ui_event_Frequentie_Button, LV_EVENT_ALL, NULL);
    lv_obj_add_event_cb(ui_Interval_Button, ui_event_Interval_Button, LV_EVENT_ALL, NULL);

}

void ui_init(void)
{
    LV_EVENT_GET_COMP_CHILD = lv_event_register_id();

    lv_disp_t * dispp = lv_disp_get_default();
    lv_theme_t * theme = lv_theme_default_init(dispp, lv_palette_main(LV_PALETTE_BLUE), lv_palette_main(LV_PALETTE_RED),
                                               false, LV_FONT_DEFAULT);
    lv_disp_set_theme(dispp, theme);
    ui_Startup_screen_init();
    ui_TENS_screen_init();
    lv_disp_load_scr(ui_Startup);
}
