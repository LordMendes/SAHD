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
    double altura,peso,pesoSeco;

    altura = ui->doubleSpinBox_altura->value();
    peso =  ui->doubleSpinBox_pesoInicial->value();
    pesoSeco = ui->doubleSpinBox_pesoSeco->value();

    double IMC= (peso)/(altura*altura);

    ui->label_valorIMC->setText(QString::number(IMC));

    QJsonObject object{

        {"altura",altura},
        {"pesoInicial",peso},
        {"pesoSeco",pesoSeco},
        {"IMC", IMC}

    };

    req Req;
    Req.post(object, "");
}

void dadosAntropometricos::on_pushButton_2_clicked()
{
    hide();
}
