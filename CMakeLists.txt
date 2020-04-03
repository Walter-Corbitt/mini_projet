cmake_minimum_required(VERSION 3.15)
set(CMAKE_AUTOMOC ON)
project(startquizz)

set(CMAKE_CXX_STANDARD 14)

add_executable(startquizz main.cpp rest/ClientRest.cpp rest/ClientRest.h model/Datas.cpp model/Datas.h)
find_package(Qt5 COMPONENTS REQUIRED Core Gui Widgets Network)
SET(QT_USE_QTNETWORK true)
target_link_libraries(startquizz  Qt5::Core Qt5::Gui Qt5::Widgets Qt5::Network)