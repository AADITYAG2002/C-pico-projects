cmake_minimum_required(VERSION 3.15)

project(library_test C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

add_executable(${PROJECT_NAME}
    main.c
)

add_subdirectory(Lib)

target_link_libraries(${PROJECT_NAME} Lib)