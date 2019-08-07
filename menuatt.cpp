#include "menuatt.h"
#include "ui_menuatt.h"
#include "escolhapacienteatt.h"
#include <QLabel>
#include "sorologia.h"
#include "movimentacaodopaciente.h"
#include "acessoatual.h"
#include "infeccaodeacesso.h"
#include "eventosadversos.h"
#include "hospitalizacao.h"
#include "transfusao.h"
#include "controledereuso.h"
#include "exames.h"


MenuAtt::MenuAtt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuAtt)
{
    ui->setupUi(this);

    ui->label->setText("NOME DO PACIENTE");
}

MenuAtt::~MenuAtt()
{
    delete ui;
    ui->pushButton_dadosClinicos->hide();
    ui->pushButton_implanteDeAcesso->hide();
    ui->pushButton_exames->hide();
    ui->pushButton_indicadores->hide();
}

void MenuAtt::on_pushButton_voltar_clicked()
{
    hide();
}

void MenuAtt::on_pushButton_dadosAntropometricos_clicked()
{
    dadosAntropometricos imc;
    imc.setModal(true);
    imc.exec();

}

void MenuAtt::on_pushButton_sorologia_clicked()
{
    Sorologia sorologia;
    sorologia.setModal(true);
    sorologia.exec();
}

void MenuAtt::on_pushButton_movimentacaoPaciente_clicked()
{
    MovimentacaoDoPaciente movimentacao;
    movimentacao.setModal(true);
    movimentacao.exec();
}

void MenuAtt::on_pushButton_acessoAtual_clicked()
{
    AcessoAtual acessoatual;
    acessoatual.setModal(true);
    acessoatual.exec();
}

void MenuAtt::on_pushButton_InfeccaoDeAV_clicked()
{
    InfeccaoDeAcesso iDeAcesso;
    iDeAcesso.setModal(true);
    iDeAcesso.showMaximized();
    iDeAcesso.exec();
}

void MenuAtt::on_pushButton_eventosAdversos_clicked()
{
    EventosAdversos eventosadv;
    eventosadv.setModal(true);
    eventosadv.exec();
}

void MenuAtt::on_pushButton_Hospitalizacao_clicked()
{
    Hospitalizacao hospitalizacao;
    hospitalizacao.setModal(true);
    hospitalizacao.exec();
}

void MenuAtt::on_pushButton_transfusaoSanguinea_clicked()
{
    transfusao Transfusao;
    Transfusao.setModal(true);
    Transfusao.exec();
}

void MenuAtt::on_pushButton_controleReusoDialisadores_clicked()
{
    ControleDeReuso controle;
    controle.setModal(true);
    controle.exec();
}

void MenuAtt::on_pushButton_exames_clicked()
{
    exames exame;
    exame.setModal(true);
    exame.exec();
}
