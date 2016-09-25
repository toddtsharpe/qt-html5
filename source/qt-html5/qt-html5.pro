TEMPLATE = app

QT += qml quick webengine websockets webchannel serialport
CONFIG += c++11

SOURCES += main.cpp \
    serialportmanager.cpp \
    commandlinemanager.cpp \
    websocketmanager.cpp

RESOURCES += qml.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    serialportmanager.h \
    commandlinemanager.h \
    websocketmanager.h
