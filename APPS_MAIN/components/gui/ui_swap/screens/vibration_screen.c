#include "vibration_screen.h"
#include "ui_helpers.h"

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
