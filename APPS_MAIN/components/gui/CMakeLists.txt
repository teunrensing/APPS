file(GLOB_RECURSE source_list ui_swap/*.c)
idf_component_register(SRCS ${source_list} gui_helper.c
                       INCLUDE_DIRS "." "ui_swap/"
                       REQUIRES lvgl encoder_driver main)
                      