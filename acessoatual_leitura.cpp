#include "acessoatual_leitura.h"
#include "ui_acessoatual_leitura.h"

acessoatual_leitura::acessoatual_leitura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::acessoatual_leitura)
{
    ui->setupUi(this);
}

acessoatual_leitura::~acessoatual_leitura()
{
    delete ui;
}
