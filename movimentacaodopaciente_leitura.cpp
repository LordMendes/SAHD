#include "movimentacaodopaciente_leitura.h"
#include "ui_movimentacaodopaciente_leitura.h"

movimentacaodopaciente_leitura::movimentacaodopaciente_leitura(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::movimentacaodopaciente_leitura)
{
    ui->setupUi(this);
    req Req;
    QJsonDocument obj = Req.get("recentes");

    ui->data->setText(obj[id]["dataMovi"].toString());
    ui->situacao->setText(obj[id]["situacaoMovi"].toString());


}

movimentacaodopaciente_leitura::~movimentacaodopaciente_leitura()
{
    delete ui;
}

void movimentacaodopaciente_leitura::on_pushButton_clicked()
{
    hide();
}
