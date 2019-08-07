#include "exames.h"
#include "ui_exames.h"
#include <QMessageBox>
#include "telalogin.h"

exames::exames(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::exames)
{
    ui->setupUi(this);
}

exames::~exames()
{
    delete ui;
}

void exames::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton saida = QMessageBox::information(this, "Sair", "Deseja volta?", QMessageBox::Yes | QMessageBox::No);
    if(saida == QMessageBox::Yes){

        hide();
        TelaLogin *telalogin = new TelaLogin(this);
        telalogin->show();

    }
}
