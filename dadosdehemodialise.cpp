#include "dadosdehemodialise.h"
#include "ui_dadosdehemodialise.h"
#include <QMessageBox>

DadosDeHemodialise::DadosDeHemodialise(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DadosDeHemodialise)
{
    ui->setupUi(this);
}

DadosDeHemodialise::~DadosDeHemodialise()
{
    delete ui;
}

void DadosDeHemodialise::on_pushButton_Cancelar_clicked()
{
    QMessageBox::StandardButton saida = QMessageBox::information(this, "Cancelar", "Todos os dados serão perdidos, deseja sair mesmo assim?", QMessageBox::Yes | QMessageBox::No);
    if(saida == QMessageBox::Yes){
        hide();
    }
}
