cmake_minimum_required(VERSION 2.8)

file(GLOB LIBCALENDARS_CPP "3rdparty/libcalendars/src/*.c")

project(mcal)
add_executable(${PROJECT_NAME} ${LIBCALENDARS_CPP} main.cpp)
