cmake_minimum_required(VERSION 3.5)

project(Exercise3 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Exercise3 main.cpp
    worker.hpp worker.cpp
    waiter.hpp waiter.cpp
    singer.hpp singer.cpp
    singingwaiter.hpp singingwaiter.cpp
    Queue.hpp
)

include(GNUInstallDirs)
install(TARGETS Exercise3
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
