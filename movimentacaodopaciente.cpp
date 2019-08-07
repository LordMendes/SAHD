#include "movimentacaodopaciente.h"
#include "ui_movimentacaodopaciente.h"
#include <QMessageBox>

MovimentacaoDoPaciente::MovimentacaoDoPaciente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MovimentacaoDoPaciente)
{
    ui->setupUi(this);
    ui->lineEdit_Outros->hide();

}

MovimentacaoDoPaciente::~MovimentacaoDoPaciente()
{
    delete ui;

}

void MovimentacaoDoPaciente::on_pushButton_cancelar_clicked()
{
    QMessageBox::StandardButton saida = QMessageBox::information(this, "Cancelar", "Todos os dados serão perdidos, deseja sair mesmo assim?", QMessageBox::Yes | QMessageBox::No);
    if(saida == QMessageBox::Yes){
        hide();
    }
}

void MovimentacaoDoPaciente::on_comboBox_situacao_activated(const QString &arg1)
{

    if(ui->comboBox_situacao->currentText() == "Outros"){
        ui->lineEdit_Outros->show();
    }else{
        ui->lineEdit_Outros->hide();
    }
}
