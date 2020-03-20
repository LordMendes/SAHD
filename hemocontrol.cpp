#include "hemocontrol.h"
#include "ui_hemocontrol.h"
#include "cadastro.h"
#include "cadastrouser.h"
#include <QMessageBox>
#include "telalogin.h"
#include <QPixmap>
#include "menuatt.h"
#include "escolhapacienteatt.h"
#include "leiturauser.h"
#include <cadastro_leitura.h>
#include "escolhapacienteleitura.h"


hemoControl::hemoControl(int user, QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::hemoControl)
{
    setWindowFlags(Qt::Window
                | Qt::WindowMinimizeButtonHint
                | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);

    QPixmap logo(":/logo/Resources/logoRim.png");
    ui->label_logoMenu->setPixmap(logo.scaled(300,175,Qt::KeepAspectRatio));


    this->user = user;

    req Req;

    users = Req.get("users");
    qDebug()<<"user :"<<user;
    ui->label->setText(users[user]["nome"].toString());


}

hemoControl::~hemoControl()
{
    delete ui;
}

void hemoControl::on_SairButton_clicked()
{
    QMessageBox::StandardButton saida = QMessageBox::information(this, "Sair", "Deseja voltar a tela de Login?", QMessageBox::Yes | QMessageBox::No);
    if(saida == QMessageBox::Yes){

        hide();
        TelaLogin *telalogin = new TelaLogin(this);
        telalogin->show();

    }
}

void hemoControl::on_registerButton_clicked()
{
    Cadastro cadastro;
    cadastro.setModal(true);
    cadastro.exec();
}

void hemoControl::on_AttButton_clicked()
{

    EscolhaPacienteAtt escolha(user);
    qDebug()<<"hemocontrol : "<<user;
    escolha.setModal(false);
    escolha.exec();
}

void hemoControl::on_actionSair_triggered()
{
    QMessageBox::StandardButton saida = QMessageBox::information(this, "Sair", "Deseja voltar a tela de Login?", QMessageBox::Yes | QMessageBox::No);
    if(saida == QMessageBox::Yes){

        hide();
        TelaLogin *telalogin = new TelaLogin(this);
        telalogin->show();

    }
}


void hemoControl::on_actionAdicionar_Usu_rio_triggered()
{
    cadastroUser cad;
    cad.setModal(true);
    cad.exec();
}

void hemoControl::on_actionConsultar_Usu_rio_triggered()
{
    LeituraUser leitura;
    leitura.setModal(true);
    leitura.exec();
}

void hemoControl::setUser(int x){
    this->user = x;
}

void hemoControl::on_btnListPascientes_clicked()
{
    escolhapacienteleitura leitura;
    leitura.setModal(true);
    leitura.exec();
}
