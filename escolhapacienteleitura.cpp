#include "escolhapacienteleitura.h"
#include "ui_escolhapacienteleitura.h"

escolhapacienteleitura::escolhapacienteleitura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::escolhapacienteleitura)
{
    ui->setupUi(this);
}

escolhapacienteleitura::~escolhapacienteleitura()
{
    delete ui;
}
