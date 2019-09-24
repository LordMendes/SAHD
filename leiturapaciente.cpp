#include "leiturapaciente.h"
#include "ui_leiturapaciente.h"

LeituraPaciente::LeituraPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LeituraPaciente)
{
    setWindowFlags(Qt::Window
                | Qt::WindowMinimizeButtonHint
                | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
}

LeituraPaciente::~LeituraPaciente()
{
    delete ui;
}
