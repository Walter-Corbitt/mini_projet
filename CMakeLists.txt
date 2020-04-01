cmake_minimum_required(VERSION 3.15)
set(CMAKE_AUTOMOC ON)
project(NationalFlagQuizz)

set(CMAKE_CXX_STANDARD 14)

add_executable(NationalFlagQuizz main.cpp Fenetre.cpp Fenetre.h frames/FrameMenu.cpp frames/FrameMenu.h settings/settings.cpp settings/settings.h frames/FrameSettings.cpp frames/FrameSettings.h frames/FrameImage.cpp frames/FrameImage.h frames/FrameQuizzTypeFlag.cpp frames/FrameQuizzTypeFlag.h frames/FrameQuizzTypeQuestion.cpp frames/FrameQuizzTypeQuestion.h rest/ClientRest.cpp rest/ClientRest.h model/Datas.cpp model/Datas.h utils/Utils.cpp utils/Utils.h frames/FrameQuizz.cpp frames/FrameQuizz.h  frames/FenetrePrincipale.cpp frames/FenetrePrincipale.h control/FenetreControl.cpp control/FenetreControl.h control/LoaderProgress.cpp control/LoaderProgress.h)
find_package(Qt5 COMPONENTS REQUIRED Core Gui Widgets Network)
SET(QT_USE_QTNETWORK true)
target_link_libraries(NationalFlagQuizz  Qt5::Core Qt5::Gui Qt5::Widgets Qt5::Network)