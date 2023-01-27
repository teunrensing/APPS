// SquareLine LVGL GENERATED FILE
// EDITOR VERSION: SquareLine Studio 1.1.0
// LVGL VERSION: 8.2
// PROJECT: APPS GUI V5

#include "ui.h"
#include "screens/light_screen.h"
#include "ui_helpers.h"
#include "screens/vibration_screen.h"

///////////////////// VARIABLES ////////////////////

lv_obj_t *ui_Sluit_module_aan;
lv_obj_t *ui_Startup;
lv_obj_t *ui_APPS_logo;
lv_obj_t *ui_Sluit_module_aan1;


///////////////////// TEST LVGL SETTINGS ////////////////////
#if LV_COLOR_DEPTH != 16
#error "LV_COLOR_DEPTH should be 16bit to match SquareLine Studio's settings"
#endif
#if LV_COLOR_16_SWAP != 1
#error "LV_COLOR_16_SWAP should be 1 to match SquareLine Studio's settings"
#endif

void ui_Vibratie_screen_init(void);
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