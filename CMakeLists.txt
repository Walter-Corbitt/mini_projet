# cmake_minimum_required(VERSION <specify CMake version here>)

set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD 14)
project(mini_projet)

set(CMAKE_PREFIX_PATH "C:\\Qt\\5.14.1\\mingw73_64\\")
find_package(Qt5Widgets)
find_package(Qt5Network)
SET(QT_USE_QTNETWORK true)
INCLUDE_DIRECTORIES(${QT_QTNETWORK_INCLUDE_DIR})

add_executable(mini_projet main.cpp load.cpp load.h)



