cmake_minimum_required(VERSION 3.15)
project(simplemvp)
set(CMAKE_AUTOMOC ON)
set(CMAKE_CXX_STANDARD 14)

add_executable(simplemvp main.cpp Fenetre.cpp Fenetre.h presenter.cpp presenter.h Utilisateur.cpp Utilisateur.h)

find_package(Qt5 COMPONENTS REQUIRED Core Gui Widgets Network)
SET(QT_USE_QTNETWORK true)
target_link_libraries(simplemvp  Qt5::Core Qt5::Gui Qt5::Widgets Qt5::Network)