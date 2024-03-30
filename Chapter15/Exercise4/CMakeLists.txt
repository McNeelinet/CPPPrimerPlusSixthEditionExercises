cmake_minimum_required(VERSION 3.5)

project(Exercise4 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Exercise4 main.cpp sales.hpp sales.cpp labeledsales.hpp labeledsales.cpp)

install(TARGETS Exercise4
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
