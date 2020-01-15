#include "dadosantropometricos_leitura.h"
#include "ui_dadosantropometricos_leitura.h"
#include "req.h"

dadosantropometricos_leitura::dadosantropometricos_leitura(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dadosantropometricos_leitura)
{
    ui->setupUi(this);

    req Req;
    QJsonDocument obj = Req.get("recentes");
    QJsonDocument counts = Req.get("countPacientes");
    int limit = counts[0]["count(`id`)"].toInt();
    int i;
    for(i=0 ; i < limit;i++){
        if(i==this->id)
            break;
    }
    qDebug()<<"i: "<<id;

    ui->altura->setText(obj[i]["altura"].toString());
    ui->peso_inicial->setText(obj[i]["pesoInicial"].toString());
    ui->peso_seco->setText(obj[i]["pesoSeco"].toString());
    ui->imc->setText(obj[i]["IMC"].toString());


}

dadosantropometricos_leitura::~dadosantropometricos_leitura()
{
    delete ui;
}

void dadosantropometricos_leitura::on_voltar_clicked()
{
    hide();
}
