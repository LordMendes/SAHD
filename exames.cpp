#include "exames.h"
#include "ui_exames.h"
#include <QMessageBox>
#include "telalogin.h"

exames::exames(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::exames)
{
    setWindowFlags(Qt::Window
                | Qt::WindowMinimizeButtonHint
                | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
    this->id=id;
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
