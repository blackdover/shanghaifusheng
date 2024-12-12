QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    backend.cpp \
    bank.cpp \
    connectus.cpp \
    eventmanager.cpp \
    eventwindow.cpp \
    help.cpp \
    hospital.cpp \
    item.cpp \
    itemmanager.cpp \
    loading.cpp \
    main.cpp \
    mainwindow.cpp \
    player.cpp \
    rankitem.cpp \
    rankitemmanager.cpp \
    post.cpp \
    rent.cpp \
    settlement.cpp \
    start.cpp \
    ranking.cpp \
    stdmessagebox.cpp \
    sudomodel.cpp

HEADERS += \
    backend.h \
    bank.h \
    connectus.h \
    eventmanager.h \
    eventwindow.h \
    help.h \
    hospital.h \
    item.h \
    itemmanager.h \
    loading.h \
    mainwindow.h \
    player.h \
    rankitem.h \
    rankitemmanager.h \
    post.h \
    rent.h \
    settlement.h \
    start.h \
    ranking.h \
    stdmessagebox.h \
    sudomodel.h


FORMS += \
    backend.ui \
    bank.ui \
    connectus.ui \
    eventwindow.ui \
    help.ui \
    hospital.ui \
    loading.ui \
    mainwindow.ui \
    post.ui \
    rent.ui \
    settlement.ui \
    start.ui \
    ranking.ui \
    sudomodel.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    items.txt

RESOURCES += \
    txtResource.qrc
