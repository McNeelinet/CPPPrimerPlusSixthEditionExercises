cmake_minimum_required(VERSION 3.5)

project(Exercise2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Exercise2 main.cpp exc_mean.hpp)

install(TARGETS Exercise2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
