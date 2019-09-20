#include "cadastro_leitura.h"
#include "ui_cadastro_leitura.h"

cadastro_leitura::cadastro_leitura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cadastro_leitura)
{
    ui->setupUi(this);
}

cadastro_leitura::~cadastro_leitura()
{
    delete ui;
}
