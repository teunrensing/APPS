file(GLOB_RECURSE source_list *.c)
idf_component_register(SRCS ${source_list}
                       INCLUDE_DIRS ".")
                      