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
#include "dadosdehemodialise.h"
#include <QJsonDocument>


MenuAtt::MenuAtt(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuAtt)
{
    setWindowFlags(Qt::Window
                | Qt::WindowMinimizeButtonHint
                | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
    req Req;
    QJsonDocument users = Req.get("pacientes");
    this->id =id;
    qDebug()<<id;
    qDebug()<<users[id]["nome"].toString();
    ui->label->setText(users[--id]["nome"].toString());
}

MenuAtt::~MenuAtt()
{
    delete ui;
    ui->pushButton_dadosClinicos->hide();
    ui->pushButton_exames->hide();
}

void MenuAtt::on_pushButton_voltar_clicked()
{
    hide();
}

void MenuAtt::on_pushButton_dadosAntropometricos_clicked()
{
    dadosAntropometricos imc(id);
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
    MovimentacaoDoPaciente movimentacao(this->id);
    movimentacao.setModal(true);
    movimentacao.exec();
}

void MenuAtt::on_pushButton_acessoAtual_clicked()
{
    AcessoAtual acessoatual(this->id);
    acessoatual.setModal(true);
    acessoatual.exec();
}

void MenuAtt::on_pushButton_InfeccaoDeAV_clicked()
{
    InfeccaoDeAcesso iDeAcesso(id);
    iDeAcesso.setModal(true);
    iDeAcesso.showMaximized();
    iDeAcesso.exec();
}

void MenuAtt::on_pushButton_eventosAdversos_clicked()
{
    EventosAdversos eventosadv(id);
    eventosadv.setModal(true);
    eventosadv.exec();
}

void MenuAtt::on_pushButton_Hospitalizacao_clicked()
{
    Hospitalizacao hospitalizacao(id);
    hospitalizacao.setModal(true);
    hospitalizacao.exec();
}

void MenuAtt::on_pushButton_transfusaoSanguinea_clicked()
{
    transfusao Transfusao(id);
    Transfusao.setModal(true);
    Transfusao.exec();
}

void MenuAtt::on_pushButton_controleReusoDialisadores_clicked()
{
    ControleDeReuso controle(id);
    controle.setModal(true);
    controle.exec();
}

void MenuAtt::on_pushButton_exames_clicked()
{
    exames exame(id);
    exame.setModal(true);
    exame.exec();
}

void MenuAtt::on_pushButton_dadosClinicos_clicked()
{
    DadosDeHemodialise dados(id);
    dados.setModal(true);
    dados.exec();
}
