cmake_minimum_required(VERSION 3.15.3)
set(CMAKE_AUTOMOC ON)

project(mini_projet)

set(CMAKE_CXX_STANDARD 3.15.3)

set(CMAKE_PREFIX_PATH "C:\\Qt\\5.12.2\\mingw73_64\\")

find_package(Qt5Widgets)
find_package(Qt5Network)
SET(QT_USE_QTNETWORK true)

add_executable(mini_projet main.cpp Rest/RecupDonnees.cpp Rest/RecupDonnees.h Model/Model.cpp Model/Model.h)
target_link_libraries(Qt5::Core Qt5::Widgets Qt5::Network)