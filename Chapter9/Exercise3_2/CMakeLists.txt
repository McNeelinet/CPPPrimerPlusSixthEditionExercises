cmake_minimum_required(VERSION 3.5)

project(Exercise3_2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Exercise3_2 main.cpp
    chaff.cpp
    chaff.hpp)

include(GNUInstallDirs)
install(TARGETS Exercise3_2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
