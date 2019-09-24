#include "eventosadversos.h"
#include "ui_eventosadversos.h"
#include "qmessagebox.h"
#include <QJsonObject>

EventosAdversos::EventosAdversos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EventosAdversos)
{
    setWindowFlags(Qt::Window
                | Qt::WindowMinimizeButtonHint
                | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);

    ui->lineEdit_evento1->hide();
    ui->lineEdit_evento2->hide();
    ui->lineEdit_evento3->hide();
    ui->lineEdit_evento4->hide();

    QString outros1=NULL,outros2=NULL,outros3=NULL,outros4=NULL;

    QString evento1 = ui->comboBox_evento1->currentText();
    if(ui->comboBox_evento1->currentIndex() == 35){
        outros1 = ui->lineEdit_evento1->text();
    };
    QString evento2 = ui->comboBox_evento2->currentText();
    if(ui->comboBox_evento1->currentIndex() == 35){
        outros2 = ui->lineEdit_evento2->text();
    };
    QString evento3 = ui->comboBox_evento3->currentText();
    if(ui->comboBox_evento1->currentIndex() == 35){
        outros3 = ui->lineEdit_evento3->text();
    };
    QString evento4 = ui->comboBox_evento4->currentText();
    if(ui->comboBox_evento1->currentIndex() == 35){
        outros4 = ui->lineEdit_evento4->text();
    };


    QJsonObject object {
        {"evento1",evento1},
        {"outros1",outros1},
        {"evento2", evento2},
        {"outros2", outros2},
        {"evento3",evento3},        
        {"outros3", outros3},
        {"evento4", evento4},
        {"outros4", outros4}
    };

    req Req;
    Req.post(object,"");

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
