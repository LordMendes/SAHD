#include "cadastrouser.h"
#include "ui_cadastrouser.h"
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonDocument>
#include <iostream>
#include <QDebug>
#include <QObject>
#include <QMessageBox>

cadastroUser::cadastroUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cadastroUser)
{
    setWindowFlags(Qt::Window
                | Qt::WindowMinimizeButtonHint
                | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
}

cadastroUser::~cadastroUser()
{
    delete ui;
}

void cadastroUser::on_pushButton_2_clicked()
{

    QString nome = ui->lineEdit_Nome->text();
    QString cargo = ui->lineEdit_Cargo->text();
    QString email = ui->lineEdit_Email->text();
    QString  senha = ui->lineEdit_Senha->text();
    QString regSAHD = ui->lineEdit_RegSahd->text();
    QString telefone = ui->lineEdit_Telefone->text();
    QString regCons = ui->lineEdit_RegConselho->text();
    bool userAdm = ui->checkBox_adm->isChecked();
    bool userPad = ui->checkBox_std->isChecked();

    QJsonObject object
    {

        {"nome", nome},
        {"status", true},
        {"cargo", cargo},
        {"registro_conselho", regCons},
        {"telefone", telefone},
        {"email", email},
        {"registro_sahd", regSAHD},
        {"senha", senha},
        {"conta_padrao", userPad},
        {"conta_administrador", userAdm}

    };

    req Req;
    Req.post(object, "createUser");

}

void cadastroUser::on_pushButton_clicked()
{
    hide();
}
