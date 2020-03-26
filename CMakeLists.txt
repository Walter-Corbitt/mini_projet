# cmake_minimum_required(VERSION <specify CMake version here>)
project(mini_projet)

set(CMAKE_CXX_STANDARD 14 )

find_package(Qt5Widgets REQUIRED)
set(CMAKE_PREFIX_PATH "C:\\Qt\\Qt5.14.0\\5.14.0\\mingw73_32\\")

add_executable(mini_projet main.cpp Rest/RecupDonnees.cpp Rest/RecupDonnees.h Model/Modele.cpp Model/Modele.h)

