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
        acessoatual_leitura.cpp \
        cadastro.cpp \
        cadastro_leitura.cpp \
        cadastrouser.cpp \
        controledereuso.cpp \
        controledereuso_leitura.cpp \
        dadosantropometricos.cpp \
        dadosantropometricos_leitura.cpp \
        dadosdehemodialise.cpp \
        dadoshemodialise_leitura.cpp \
        escolhapacienteatt.cpp \
        escolhapacienteleitura.cpp \
        eventosadversos.cpp \
        eventosadversos_leitura.cpp \
        exames.cpp \
        exames_leitura.cpp \
        getid.cpp \
        hemocontrol.cpp \
        hospitalizacao.cpp \
        hospitalizacao_leitura.cpp \
        infeccaodeacesso.cpp \
        infeccaodeacesso_leitura.cpp \
        leituramenu.cpp \
        leiturapaciente.cpp \
        leiturauser.cpp \
        main.cpp \
        menuatt.cpp \
        movimentacaodopaciente.cpp \
        movimentacaodopaciente_leitura.cpp \
        req.cpp \
        sorologia.cpp \
        sorologia_leitura.cpp \
        telalogin.cpp \
        transfusao.cpp \
        transfusao_leitura.cpp

HEADERS += \
    acessoatual.h \
    acessoatual_leitura.h \
    cadastro.h \
    cadastro_leitura.h \
    cadastrouser.h \
    controledereuso.h \
    controledereuso_leitura.h \
    dadosantropometricos.h \
    dadosantropometricos_leitura.h \
    dadosdehemodialise.h \
    dadoshemodialise_leitura.h \
    escolhapacienteatt.h \
    escolhapacienteleitura.h \
    eventosadversos.h \
    eventosadversos_leitura.h \
    exames.h \
    exames_leitura.h \
    getid.h \
    hemocontrol.h \
    hospitalizacao.h \
    hospitalizacao_leitura.h \
    infeccaodeacesso.h \
    infeccaodeacesso_leitura.h \
    leituramenu.h \
    leiturapaciente.h \
    leiturauser.h \
    menuatt.h \
    movimentacaodopaciente.h \
    movimentacaodopaciente_leitura.h \
    req.h \
    sorologia.h \
    sorologia_leitura.h \
    telalogin.h \
    transfusao.h \
    transfusao_leitura.h

FORMS += \
    acessoatual.ui \
    acessoatual_leitura.ui \
    cadastro.ui \
    cadastro_leitura.ui \
    cadastrouser.ui \
    controledereuso.ui \
    controledereuso_leitura.ui \
    dadosantropometricos.ui \
    dadosantropometricos_leitura.ui \
    dadosdehemodialise.ui \
    dadoshemodialise_leitura.ui \
    escolhapacienteatt.ui \
    escolhapacienteleitura.ui \
    eventosadversos.ui \
    eventosadversos_leitura.ui \
    exames.ui \
    exames_leitura.ui \
    hemocontrol.ui \
    hospitalizacao.ui \
    hospitalizacao_leitura.ui \
    infeccaodeacesso.ui \
    infeccaodeacesso_leitura.ui \
    leituramenu.ui \
    leiturapaciente.ui \
    leiturauser.ui \
    menuatt.ui \
    movimentacaodopaciente.ui \
    movimentacaodopaciente_leitura.ui \
    sorologia.ui \
    sorologia_leitura.ui \
    telalogin.ui \
    transfusao.ui \
    transfusao_leitura.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES +=

RESOURCES += \
    resources.qrc
