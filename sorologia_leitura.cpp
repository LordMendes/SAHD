#include "sorologia_leitura.h"
#include "ui_sorologia_leitura.h"

sorologia_leitura::sorologia_leitura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sorologia_leitura)
{
    ui->setupUi(this);
}

sorologia_leitura::~sorologia_leitura()
{
    delete ui;
}
