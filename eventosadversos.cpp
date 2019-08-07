#include "eventosadversos.h"
#include "ui_eventosadversos.h"
#include "qmessagebox.h"

EventosAdversos::EventosAdversos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EventosAdversos)
{
    ui->setupUi(this);

    ui->lineEdit_evento1->hide();
    ui->lineEdit_evento2->hide();
    ui->lineEdit_evento3->hide();
    ui->lineEdit_evento4->hide();

}

EventosAdversos::~EventosAdversos()
{
    delete ui;
}

void EventosAdversos::on_pushButton_cancelar_clicked()
{
    QMessageBox::StandardButton saida = QMessageBox::information(this, "Cancelar", "Todos os dados serão perdidos, deseja sair mesmo assim?", QMessageBox::Yes | QMessageBox::No);
    if(saida == QMessageBox::Yes){
        hide();
    }
}



void EventosAdversos::on_comboBox_evento1_currentTextChanged(const QString &arg1)
{
    if(ui->comboBox_evento1->currentText() == "Outros (identificar)"){
        ui->lineEdit_evento1->show();
    }else{
        ui->lineEdit_evento1->hide();
    }
}

void EventosAdversos::on_comboBox_evento2_currentTextChanged(const QString &arg1)
{
    if(ui->comboBox_evento2->currentText() == "Outros (identificar)"){
        ui->lineEdit_evento2->show();
    }else{
        ui->lineEdit_evento2->hide();
    }
}

void EventosAdversos::on_comboBox_evento3_currentTextChanged(const QString &arg1)
{
    if(ui->comboBox_evento3->currentText() == "Outros (identificar)"){
        ui->lineEdit_evento3->show();
    }else{
        ui->lineEdit_evento3->hide();
    }
}

void EventosAdversos::on_comboBox_evento4_currentTextChanged(const QString &arg1)
{
    if(ui->comboBox_evento4->currentText() == "Outros (identificar)"){
        ui->lineEdit_evento4->show();
    }else{
        ui->lineEdit_evento4->hide();
    }
}
