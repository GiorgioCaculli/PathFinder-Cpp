cmake_minimum_required(VERSION 3.19)
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
        src/core/character/Character.cpp src/core/character/Character.hpp
        src/core/character/race/Race.cpp src/core/character/race/Race.hpp
        src/core/character/race/Elf.cpp src/core/character/race/Elf.hpp
        src/core/character/divinity/Divinity.cpp src/core/character/divinity/Divinity.hpp
        src/ui/gui/MainFrame.cpp src/ui/gui/MainFrame.hpp src/core/character/characteristics/Characteristic.cpp src/core/character/characteristics/Characteristic.hpp src/core/character/characteristics/Force.cpp src/core/character/characteristics/Force.hpp src/core/character/characteristics/Dexterity.cpp src/core/character/characteristics/Dexterity.hpp src/core/character/characteristics/Constitution.cpp src/core/character/characteristics/Constitution.hpp src/core/character/characteristics/Intelligence.cpp src/core/character/characteristics/Intelligence.hpp src/core/character/characteristics/Wisdom.cpp src/core/character/characteristics/Wisdom.hpp src/core/character/characteristics/Charisma.cpp src/core/character/characteristics/Charisma.hpp)

target_link_libraries(PathFinder Qt5::Widgets)
