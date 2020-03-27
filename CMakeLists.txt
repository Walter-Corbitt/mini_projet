set(CMAKE_AUTOMOC ON)
cmake_minimum_required(VERSION 13)
project(mini_projet)

set(CMAKE_CXX_STANDARD 13.5.3)

set(CMAKE_PREFIX_PATH "C:\\Qt\\5.12.2\\mingw73_64\\")
find_package(Qt5Widgets)
find_package(Qt5Network)
SET(QT_USE_QTNETWORK true)
INCLUDE_DIRECTORIES(${QT_QTNETWORK_INCLUDE_DIR})
add_executable(mini_projet main.cpp Rest/RecupDonnees.cpp Rest/RecupDonnees.h Model/Model.cpp Model/Model.h)
