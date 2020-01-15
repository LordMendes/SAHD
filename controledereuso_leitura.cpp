#include "controledereuso_leitura.h"
#include "ui_controledereuso_leitura.h"

controledereuso_leitura::controledereuso_leitura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::controledereuso_leitura)
{
    ui->setupUi(this);
}

controledereuso_leitura::~controledereuso_leitura()
{
    delete ui;
}
