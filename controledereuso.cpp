#include "controledereuso.h"
#include "ui_controledereuso.h"
#include <QMessageBox>

ControleDeReuso::ControleDeReuso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ControleDeReuso)
{
    ui->setupUi(this);    

}

ControleDeReuso::~ControleDeReuso()
{
    delete ui;
}

void ControleDeReuso::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton saida = QMessageBox::information(this, "Cancelar", "Todos os dados serão perdidos, deseja sair mesmo assim?", QMessageBox::Yes | QMessageBox::No);
    if(saida == QMessageBox::Yes){
        hide();
    }
}
