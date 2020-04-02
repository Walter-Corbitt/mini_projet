set(CMAKE_AUTOMOC ON)
cmake_minimum_required(VERSION 3.14.5)

project(mini_projet)
set(CMAKE_CXX_STANDARD 14)

set(CMAKE_PREFIX_PATH "C:\\Qt\\5.12.2\\mingw73_64\\")

find_package(Qt5 COMPONENTS REQUIRED Core Gui Widgets Network)
SET(QT_USE_QTNETWORK true)

add_executable(mini_projet main.cpp Rest/RecupDonnees.cpp Rest/RecupDonnees.h Model/Model.cpp Model/Model.h)
target_link_libraries(mini_projet  Qt5::Core Qt5::Gui Qt5::Widgets Qt5::Network ${QT_LIBRARIES})