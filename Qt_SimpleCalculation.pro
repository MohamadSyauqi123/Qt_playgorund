QT = core
QT += widgets
CONFIG += console


CONFIG += c++17 cmdline
LIBS += "C:\Qt_playground\Qt_SimpleCalculation\build\Desktop_Qt_6_8_0_MinGW_64_bit-Debug\debug\Qt_MyLib.dll"

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        dialog.cpp \
        main.cpp

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

FORMS += \
    dialog.ui

HEADERS += \
    Qt_MyLib_global.h \
    dialog.h \
    qt_mylib.h
