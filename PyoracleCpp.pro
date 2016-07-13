QT += widgets
QT +=quickwidgets
QT += core gui multimedia

SOURCES += \
    main.cpp \
    window.cpp \
    items.cpp

HEADERS += \
    window.h \
    items.h

DISTFILES += \
    MySlider.qml

FORMS +=

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../LibXtract-master/dist/lib/
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../LibXtract-master/dist/lib/
else:unix: LIBS += -L$$PWD/../../LibXtract-master/dist/lib/

INCLUDEPATH += $$PWD/../../LibXtract-master/include/xtract
DEPENDPATH += $$PWD/../../LibXtract-master/include/xtract
