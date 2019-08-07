#-------------------------------------------------
#
# Project created by QtCreator 2019-08-04T21:54:53
#
#-------------------------------------------------

QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SAHD
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        acessoatual.cpp \
        cadastro.cpp \
        cadastrouser.cpp \
        controledereuso.cpp \
        dadosantropometricos.cpp \
        dadosdehemodialise.cpp \
        escolhapacienteatt.cpp \
        eventosadversos.cpp \
        exames.cpp \
        hemocontrol.cpp \
        hospitalizacao.cpp \
        infeccaodeacesso.cpp \
        leiturapaciente.cpp \
        leiturauser.cpp \
        main.cpp \
        menuatt.cpp \
        movimentacaodopaciente.cpp \
        req.cpp \
        sorologia.cpp \
        telalogin.cpp \
        transfusao.cpp

HEADERS += \
    acessoatual.h \
    cadastro.h \
    cadastrouser.h \
    controledereuso.h \
    dadosantropometricos.h \
    dadosdehemodialise.h \
    escolhapacienteatt.h \
    eventosadversos.h \
    exames.h \
    hemocontrol.h \
    hospitalizacao.h \
    infeccaodeacesso.h \
    leiturapaciente.h \
    leiturauser.h \
    menuatt.h \
    movimentacaodopaciente.h \
    req.h \
    sorologia.h \
    telalogin.h \
    transfusao.h

FORMS += \
    acessoatual.ui \
    cadastro.ui \
    cadastrouser.ui \
    controledereuso.ui \
    dadosantropometricos.ui \
    dadosdehemodialise.ui \
    escolhapacienteatt.ui \
    eventosadversos.ui \
    exames.ui \
    hemocontrol.ui \
    hospitalizacao.ui \
    infeccaodeacesso.ui \
    leiturapaciente.ui \
    leiturauser.ui \
    menuatt.ui \
    movimentacaodopaciente.ui \
    sorologia.ui \
    telalogin.ui \
    transfusao.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    resources.qrc
