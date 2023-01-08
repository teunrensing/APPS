file(GLOB_RECURSE source_list ../ui_swap/*.c)
idf_component_register(SRCS "main.c" ${source_list}
                    INCLUDE_DIRS "" "../ui_swap")
