#include "tens_screen.h"
#include "ui_helpers.h"

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