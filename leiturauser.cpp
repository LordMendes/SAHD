#include "leiturauser.h"
#include "ui_leiturauser.h"
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

LeituraUser::LeituraUser(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LeituraUser)
{
    setWindowFlags(Qt::Window
                | Qt::WindowMinimizeButtonHint
                | Qt::WindowMaximizeButtonHint);

    ui->setupUi(this);

    req Req;
    jsonDoc = Req.get("orderedUsers");
    qnt = Req.get("countUsers");

    int count = qnt[0]["count(`id`)"].toInt();
    qDebug()<<qnt;

    for(int i = 0 ; i < count ; i++){
        ui->comboBox->addItem(jsonDoc[i]["nome"].toString());
    }

}

LeituraUser::~LeituraUser()
{
    delete ui;
}

void LeituraUser::on_comboBox_currentTextChanged(const QString &arg1)
{

    ui->lbnome->setText(jsonDoc[ui->comboBox->currentIndex()]["nome"].toString());
    if(jsonDoc[ui->comboBox->currentIndex()]["status"].toBool()){
        ui->lbstatus->setText("Inativo");
    }else{
        ui->lbstatus->setText("Ativo");
    }
    ui->lbcargo->setText(jsonDoc[ui->comboBox->currentIndex()]["cargo"].toString());
    ui->lbregistro->setNum((jsonDoc[ui->comboBox->currentIndex()]["registro_conselho"]).toInt());
    ui->lbtelefone->setText(jsonDoc[ui->comboBox->currentIndex()]["telefone"].toString());
    ui->lbemail->setText(jsonDoc[ui->comboBox->currentIndex()]["email"].toString());
    ui->lbsahd->setNum(jsonDoc[ui->comboBox->currentIndex()]["registro_sahd"].toInt());
    ui->senha->setText(jsonDoc[ui->comboBox->currentIndex()]["senha"].toString());
    if(jsonDoc[ui->comboBox->currentIndex()]["conta_padrao"].toBool()){
        ui->lbtipo->setText("Usuário Padrão");
    }else{
        ui->lbtipo->setText("Usuário Administrador");
    }
}

void LeituraUser::on_pushButton_clicked()
{
    hide();
}
