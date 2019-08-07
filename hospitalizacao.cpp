#include "hospitalizacao.h"
#include "ui_hospitalizacao.h"
#include <QMessageBox>

Hospitalizacao::Hospitalizacao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Hospitalizacao)
{
    ui->setupUi(this);
}

Hospitalizacao::~Hospitalizacao()
{
    delete ui;
}

void Hospitalizacao::on_pushButton_clicked()
{
    QMessageBox::StandardButton saida = QMessageBox::information(this, "Cancelar", "Todos os dados serão perdidos, deseja sair mesmo assim?", QMessageBox::Yes | QMessageBox::No);
    if(saida == QMessageBox::Yes){
        hide();
    }
}
