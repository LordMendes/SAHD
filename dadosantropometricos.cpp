#include "dadosantropometricos.h"
#include "ui_dadosantropometricos.h"
#include <string>

dadosAntropometricos::dadosAntropometricos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dadosAntropometricos)
{
    ui->setupUi(this);


}

dadosAntropometricos::~dadosAntropometricos()
{
    delete ui;
}

void dadosAntropometricos::on_pushButton_clicked()
{
    double altura,peso;

    altura = ui->doubleSpinBox_altura->value();
    peso =  ui->doubleSpinBox_pesoInicial->value();

    double IMC= (peso)/(altura*altura);

    ui->label_valorIMC->setText(QString::number(IMC));
}

void dadosAntropometricos::on_pushButton_2_clicked()
{
    hide();
}
