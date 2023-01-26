file(GLOB_RECURSE source_list ui_swap/*.c)
file(GLOB_RECURSE source_list_screens ui_swap/screens/*.c)
idf_component_register(SRCS ${source_list} ${source_list_screens} gui_helper.c
                       INCLUDE_DIRS "." "ui_swap/" "ui_swap/screens"
                       REQUIRES lvgl encoder_driver main)
                      