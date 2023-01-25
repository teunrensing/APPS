file(GLOB_RECURSE SOURCES src/*.c)

idf_component_register(SRCS ${SOURCES} module_driver_helper.c
        INCLUDE_DIRS "." "include"
        REQUIRES main TCA9534_IDF led_strip)
