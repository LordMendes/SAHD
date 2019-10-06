#include "dadosantropometricos_leitura.h"
#include "ui_dadosantropometricos_leitura.h"

dadosantropometricos_leitura::dadosantropometricos_leitura(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::dadosantropometricos_leitura)
{
    ui->setupUi(this);
}

dadosantropometricos_leitura::~dadosantropometricos_leitura()
{
    delete ui;
}
