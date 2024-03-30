cmake_minimum_required(VERSION 3.5)

project(Exercise3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Exercise3 main.cpp
    stock.hpp stock.cpp)

include(GNUInstallDirs)
install(TARGETS Exercise3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
