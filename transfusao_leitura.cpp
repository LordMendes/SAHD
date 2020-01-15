#include "transfusao_leitura.h"
#include "ui_transfusao_leitura.h"
#include "req.h"

transfusao_leitura::transfusao_leitura(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::transfusao_leitura)
{
    ui->setupUi(this);
    req Req;
    QJsonDocument obj = Req.get("recentes");

    ui->dataTrans->setText(obj[id]["dataTrans"].toString());
    ui->hemocomponentes->setText(obj[id]["hemocomponentes"].toString());
    ui->hemoderivados->setText(obj[id]["hemoderivados"].toString());
    ui->quantidade->setText(obj[id]["quantidade"].toString());
    ui->nDaBolsa->setText(obj[id]["nDaBolsa"].toString());
    ui->gruposanguineodabolsa->setText(obj[id]["grupoSangue"].toString());
    ui->observacaoTrans->setText(obj[id]["observacaoTrans"].toString());


}

transfusao_leitura::~transfusao_leitura()
{
    delete ui;
}

void transfusao_leitura::on_pushButton_Cancelar_2_clicked()
{
    hide();
}
