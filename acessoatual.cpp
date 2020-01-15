#include "acessoatual.h"
#include "ui_acessoatual.h"
#include <QMessageBox>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonDocument>
#include <iostream>
#include <QDebug>
#include <QObject>
#include <string>

AcessoAtual::AcessoAtual(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AcessoAtual)
{
    setWindowFlags(Qt::Window
        | Qt::WindowMinimizeButtonHint
        | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
    this->id=id;
}

AcessoAtual::~AcessoAtual()
{
    delete ui;
}

void AcessoAtual::on_pushButton_Cancelar_clicked()
{
    QMessageBox::StandardButton saida = QMessageBox::information(this, "Cancelar", "Todos os dados serão perdidos, deseja sair mesmo assim?", QMessageBox::Yes | QMessageBox::No);
    if(saida == QMessageBox::Yes){
        hide();
    }
}

void AcessoAtual::on_pushButton_Confirmar_clicked()
{
    QString cateterDL;
    QString cateterDLP;
    QString cateterDLPTHP;
    QString fistula;
    QString protese;

    if(ui->groupBox_cateterDuploLumen->isChecked()){
        cateterDL = ui->comboBox_localCateterDuploLumen->currentText();
    }
    if(ui->groupBox_cateterDeLongaPermanncia->isChecked()){
        cateterDLP = ui->comboBox_localCateterDeLongaPermanencia->currentText();
    }
    if(ui->groupBox_cateterDeLongaPermanenciaTransHepaticoPercutaneo->isChecked()){
        cateterDLPTHP = ui->comboBox_localCateterDeLongaPermanenciaTransHepaticoPercutaneo->currentText();
    }
    if(ui->groupBox_fistulaArterioVenosa->isChecked()){
        fistula = ui->comboBox_localFistulaArterioVenosa->currentText();
    }
    if(ui->groupBox_proteseEnxertoDePTFE->isChecked()){
        protese = ui->comboBox_localProteseEnxertoDePTFE->currentText();
    }
    req Req;
    QJsonDocument id2 = Req.get("countConsultas");
    QJsonObject object
    {
        {"cateterDL", cateterDL},
        {"cateterDLP", cateterDLP},
        {"cateterDLPTHP", cateterDLPTHP},
        {"fistula", fistula},
        {"protese", protese}

    };

    int a = id2[0]["count(`id`)"].toInt();
    QString s = QString::number(a);
    qDebug()<<"put consultas";
    Req.put(object,"updateConsultas/"+QString::number(a));
    qDebug()<<"put recente";
    Req.put(object,"updateRecente/"+QString::number(id));
    hide();
    qDebug()<<"id : "<<id;

}
