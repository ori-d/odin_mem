cmake_minimum_required (VERSION 3.20..3.23 FATAL_ERROR)

option (MI_USE_CXX "Disable c++ compiler" OFF)
option (MI_BUILD_SHARED "Disable shared libraries" OFF)
option (MI_BUILD_STATIC "Disable static libraries" OFF)
option (MI_BUILD_TESTS "Disable tests" OFF)

add_subdirectory ("mi-malloc")

add_library(mi::malloc ALIAS mimalloc-obj)
