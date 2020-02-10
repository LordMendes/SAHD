#include "exames_leitura.h"
#include "ui_exames_leitura.h"

exames_leitura::exames_leitura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::exames_leitura)
{
    ui->setupUi(this);
}

exames_leitura::~exames_leitura()
{
    delete ui;
}
