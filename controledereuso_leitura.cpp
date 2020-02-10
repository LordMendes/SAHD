#include "controledereuso_leitura.h"
#include "ui_controledereuso_leitura.h"
#include "req.h"

controledereuso_leitura::controledereuso_leitura(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::controledereuso_leitura)
{
    ui->setupUi(this);

    this->id = id;
    req Req;
    QJsonDocument obj = Req.get("recentes");

    ui->data->setText(obj[id]["dataReuso"].toString());
    ui->nDoReuso->setText(obj[id]["nDoReuso"].toString());
    ui->primingReuso->setText(obj[id]["primingReuso"].toString());
    ui->setArterial->setText(obj[id]["setArterial"].toString());
    ui->setVenoso->setText(obj[id]["setVenoso"].toString());
    ui->motivoDescarte->setText(obj[id]["motivoDescarte"].toString());

}

controledereuso_leitura::~controledereuso_leitura()
{
    delete ui;
}

void controledereuso_leitura::on_pushButton_2_clicked()
{
    hide();
}
