#include "light_screen.h"
#include "ui_helpers.h"

lv_obj_t *ui_Intensiteit_Button_Licht;
lv_obj_t *ui_Kleur_Button_Licht;
lv_obj_t *ui_Interval_Button_Licht;
lv_obj_t *ui_Start_knop_Licht;
lv_obj_t *ui_Tekst_Arc8;
lv_obj_t *ui_Tekst_Arc10;
lv_obj_t *ui_Rood;
lv_obj_t *ui_Groen;
lv_obj_t *ui_Blauw;
lv_obj_t *ui_Geel;
lv_obj_t *ui_Licht;
lv_obj_t * ui_Intensiteit_getal3;
lv_obj_t * ui_Button_Rood;
lv_obj_t * ui_Button_Groen;
lv_obj_t * ui_Button_Blauw;
lv_obj_t * ui_Button_Geel;
lv_obj_t * ui_Arc_Interval3;
lv_obj_t * ui_Interval_getal3;
lv_obj_t * ui_Arc_Intensiteit3;
lv_obj_t * ui_Kleur;
lv_obj_t * ui_Arc13;
lv_obj_t * ui_Arc14;

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

void ui_Licht_screen_init(void) {
    ui_Licht = lv_obj_create(NULL);
    lv_obj_clear_flag(ui_Licht, LV_OBJ_FLAG_SCROLLABLE);      /// Flags
    lv_obj_set_scrollbar_mode(ui_Licht, LV_SCROLLBAR_MODE_OFF);
    lv_obj_set_style_bg_color(ui_Licht, lv_color_hex(0xE6EBFF), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_bg_opa(ui_Licht, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * ui_Titel3 = lv_label_create(ui_Licht);
    lv_obj_set_width(ui_Titel3, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Titel3, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_x(ui_Titel3, 0);
    lv_obj_set_y(ui_Titel3, 25);
    lv_obj_set_align(ui_Titel3, LV_ALIGN_TOP_MID);
    lv_label_set_text(ui_Titel3, "Licht\n");
    lv_obj_set_style_text_color(ui_Titel3, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Titel3, 255, LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_font(ui_Titel3, &lv_font_montserrat_30, LV_PART_MAIN | LV_STATE_DEFAULT);

    lv_obj_t * ui_Arc_Standaard3 = lv_obj_create(ui_Licht);
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

    lv_obj_t * ui_Arc11 = lv_arc_create(ui_Arc_Standaard3);
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

    lv_obj_t * ui_Blauw_rondje_intensiteit7 = lv_obj_create(ui_Arc_Intensiteit3);
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

    lv_obj_t * ui_Tekst_Arc8 = lv_label_create(ui_Arc_Intensiteit3);
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

    lv_obj_t * ui_Rood_Tekst = lv_label_create(ui_Button_Rood);
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

    lv_obj_t * ui_Groen_tekst = lv_label_create(ui_Button_Groen);
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

    lv_obj_t * ui_Blauw_tekst = lv_label_create(ui_Button_Blauw);
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

    lv_obj_t * ui_Geel_tekst = lv_label_create(ui_Button_Geel);
    lv_obj_set_width(ui_Geel_tekst, LV_SIZE_CONTENT);   /// 1
    lv_obj_set_height(ui_Geel_tekst, LV_SIZE_CONTENT);    /// 1
    lv_obj_set_align(ui_Geel_tekst, LV_ALIGN_CENTER);
    lv_label_set_text(ui_Geel_tekst, "Geel");
    lv_obj_set_style_text_color(ui_Geel_tekst, lv_color_hex(0x000000), LV_PART_MAIN | LV_STATE_DEFAULT);
    lv_obj_set_style_text_opa(ui_Geel_tekst, 255, LV_PART_MAIN | LV_STATE_DEFAULT);

   lv_obj_t *  ui_Arc_Interval3 = lv_obj_create(ui_Licht);
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

    lv_obj_t * ui_Blauwrondje_Interval3 = lv_obj_create(ui_Arc_Interval3);
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

    lv_obj_t * ui_Intensiteit_tekst3 = lv_label_create(ui_Intensiteit_Button_Licht);
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

    lv_obj_t * ui_Kleur_tekst1 = lv_label_create(ui_Kleur_Button_Licht);
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

    lv_obj_t * ui_Interval_tekst3 = lv_label_create(ui_Interval_Button_Licht);
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
