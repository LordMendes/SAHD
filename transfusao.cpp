#include "transfusao.h"
#include "ui_transfusao.h"
#include <QMessageBox>

transfusao::transfusao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::transfusao)
{
    ui->setupUi(this);
}

transfusao::~transfusao()
{
    delete ui;
}

void transfusao::on_pushButton_Cancelar_clicked()
{
    QMessageBox::StandardButton saida = QMessageBox::information(this, "Cancelar", "Todos os dados serão perdidos, deseja sair mesmo assim?", QMessageBox::Yes | QMessageBox::No);
    if(saida == QMessageBox::Yes){
        hide();
    }
}
