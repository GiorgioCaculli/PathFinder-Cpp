cmake_minimum_required(VERSION 3.24)
project(PathFinder)

set(CMAKE_CXX_STANDARD 11)

set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

if (CMAKE_VERSION VERSION_LESS "3.7.0")
    set(CMAKE_INCLUDE_CURRENT_DIR ON)
endif ()

find_package(Qt5 COMPONENTS Widgets REQUIRED)

add_executable(PathFinder
        src/main.cpp src/main.hpp
        src/ui/gui/MainFrame.cpp src/ui/gui/MainFrame.hpp)

include_directories(include/)

find_library(RPG_CORE rpg_core lib/rpg/core)

target_link_libraries(PathFinder Qt5::Widgets ${RPG_CORE})
