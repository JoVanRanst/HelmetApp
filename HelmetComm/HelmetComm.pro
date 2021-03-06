#-------------------------------------------------
#
# Project created by QtCreator 2017-01-31T16:34:01
#
#-------------------------------------------------

QT       += core gui svg

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HelmetComm
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainmenu.cpp \
    animationmenu.cpp \
    textmenu.cpp \
    soundmenu.cpp \
    optionsmenu.cpp \
    animationcreation.cpp \
    ledmatrix_main.cpp \
    ledmatrix_animation.cpp \
    ledmatrix_textanimation.cpp \
    ledmatrix_characters.cpp

HEADERS  += mainmenu.h \
    animationmenu.h \
    textmenu.h \
    soundmenu.h \
    optionsmenu.h \
    animationcreation.h \
    ledmatrix_main.h \
    ledmatrix_characters.h \
    ledmatrix_characters_definitions.h

FORMS    += mainmenu.ui \
    animationmenu.ui \
    textmenu.ui \
    soundmenu.ui \
    optionsmenu.ui \
    animationcreation.ui

CONFIG += mobility
MOBILITY = 

RESOURCES += \
    styles.qrc \
    recources.qrc

DISTFILES += \
    styleBase.qss \
    image/LedOff.png \
    image/LedOn.png \
    TODOlist.txt

