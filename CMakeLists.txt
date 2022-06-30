cmake_minimum_required (VERSION 3.20..3.23 FATAL_ERROR)

project ("odin memory" LANGUAGES C VERSION 1.0.0)

add_subdirectory("extern")

add_library("odin_memory" OBJECT src/memory.c)

target_include_directories (odin_memory PRIVATE "include/")
target_link_libraries("odin_memory" PRIVATE mi::malloc)
