cmake_minimum_required (VERSION 3.7)
project (scratch
                VERSION 1.0
                LANGUAGES CXX)

if (UNIX)
    add_compile_options(-std=c++17)
    add_compile_options(-fno-rtti)
    add_compile_options(-Wall)
    add_compile_options(-Wextra)
    add_compile_options(-Wshadow)
    add_compile_options(-Wnon-virtual-dtor)
    add_compile_options(-Wold-style-cast)
    add_compile_options(-Wcast-align)
    add_compile_options(-Wunused)
    add_compile_options(-Woverloaded-virtual)
    add_compile_options(-pedantic)
    add_compile_options(-Werror)
else()
    add_compile_options(/EHc)
endif()

include_directories(SYSTEM ${PROJECT_SOURCE_DIR}/include)
add_subdirectory(src)
add_subdirectory(test)


