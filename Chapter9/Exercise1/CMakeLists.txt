cmake_minimum_required(VERSION 3.5)

project(Exercise1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Exercise1 main.cpp
    golf.cpp
    golf.hpp)

include(GNUInstallDirs)
install(TARGETS Exercise1
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
