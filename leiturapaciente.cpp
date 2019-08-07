#include "leiturapaciente.h"
#include "ui_leiturapaciente.h"

LeituraPaciente::LeituraPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LeituraPaciente)
{
    ui->setupUi(this);
}

LeituraPaciente::~LeituraPaciente()
{
    delete ui;
}
