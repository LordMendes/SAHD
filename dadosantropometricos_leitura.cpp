#include "dadosantropometricos_leitura.h"
#include "ui_dadosantropometricos_leitura.h"
#include "req.h"

dadosantropometricos_leitura::dadosantropometricos_leitura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dadosantropometricos_leitura)
{
    ui->setupUi(this);

    req Req;
    QJsonDocument obj;
    obj = Req.get("pacientes");

}

dadosantropometricos_leitura::~dadosantropometricos_leitura()
{
    delete ui;
}
