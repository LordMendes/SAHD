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

    QNetworkAccessManager man;
    QJsonObject json;
    QNetworkRequest req(QUrl("http://localhost:8080/createUser"));
    req.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QNetworkReply *reply = man.post(req, QJsonDocument(object).toJson());
    while (!reply->isFinished())
    {
        qApp->processEvents();
    }

    QByteArray response_data = reply->readAll();

    QJsonDocument jsonDoc = QJsonDocument::fromJson(response_data);
    json = jsonDoc.object();

    reply->deleteLater();
    if(!reply->error()){
        qDebug()<<"POST foi um sucesso!";
        QMessageBox::StandardButton saida = QMessageBox::information(this, "Cadastro", "Cadastro realizado com sucesso, deseja cadastrar outro?", QMessageBox::Ok | QMessageBox::No);
        if(saida == QMessageBox::No){
            hide();
        }else{
            ui->lineEdit_Nome->setText("");
            ui->lineEdit_Cargo->setText("");
            ui->lineEdit_Email->setText("");
            ui->lineEdit_Senha->setText("");
            ui->lineEdit_RegSahd->setText("");
            ui->lineEdit_Telefone->setText("");
            ui->lineEdit_RegConselho->setText("");
            ui->checkBox_adm->setChecked(false);
            ui->checkBox_std->setChecked(false);
        }
    }else{
        qDebug()<< "erro";
    }

}
