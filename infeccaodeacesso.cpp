#include "infeccaodeacesso.h"
#include "ui_infeccaodeacesso.h"
#include <QMessageBox>

InfeccaoDeAcesso::InfeccaoDeAcesso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfeccaoDeAcesso)
{
    ui->setupUi(this);
    ui->checkBox_celuliteInfecciosa->setEnabled(false);
    ui->checkBox_infestacaoParasitaria->setEnabled(false);
    ui->lineEdit_outro->setEnabled(false);
    ui->lineEdit_infeccaoDeSitioCirurgico->setEnabled(false);
    ui->lineEdit_infeccaoRespiratoriaDeViasAereaSuperior->setEnabled(false);
    ui->lineEdit_infeccaoRespiratoriaDeViasAereaInferiores->setEnabled(false);
    ui->lineEdit_outrasInfeccoes->setEnabled(false);
    ui->lineEdit_resistente1->hide();
    ui->lineEdit_resistente2->hide();
    ui->lineEdit_resistente3->hide();
    ui->lineEdit_resistente4->hide();
    ui->lineEdit_resistente5->hide();
    ui->lineEdit_sensivel1->hide();
    ui->lineEdit_sensivel2->hide();
    ui->lineEdit_sensivel3->hide();
    ui->lineEdit_sensivel4->hide();
    ui->lineEdit_sensivel5->hide();


}

InfeccaoDeAcesso::~InfeccaoDeAcesso()
{
    delete ui;
}


void InfeccaoDeAcesso::on_pushButton_Cancelar_clicked()
{
    QMessageBox::StandardButton saida = QMessageBox::information(this, "Cancelar", "Todos os dados serão perdidos, deseja sair mesmo assim?", QMessageBox::Yes | QMessageBox::No);
    if(saida == QMessageBox::Yes){
        hide();
    }
}

void InfeccaoDeAcesso::on_checkBox_infeccaoDePele_stateChanged(int arg1)
{
    if(ui->checkBox_infeccaoDePele->isChecked()){
        ui->checkBox_celuliteInfecciosa->setEnabled(true);
        ui->checkBox_infestacaoParasitaria->setEnabled(true);
        ui->lineEdit_outro->setEnabled(true);
    }else{
        ui->checkBox_celuliteInfecciosa->setEnabled(false);
        ui->checkBox_infestacaoParasitaria->setEnabled(false);
        ui->lineEdit_outro->setEnabled(false);
    }
}

void InfeccaoDeAcesso::on_checkBox_infeccaoDeSitioCirurgico_stateChanged(int arg1)
{
    if(ui->checkBox_infeccaoDeSitioCirurgico->isChecked()){
        ui->lineEdit_infeccaoDeSitioCirurgico->setEnabled(true);
    }else{
        ui->lineEdit_infeccaoDeSitioCirurgico->setEnabled(false);
    }
}

void InfeccaoDeAcesso::on_checkBox_infeccaoRespiratoriaDeViasAereaSuperiores_stateChanged(int arg1)
{
    if(ui->checkBox_infeccaoRespiratoriaDeViasAereaSuperiores->isChecked()){
        ui->lineEdit_infeccaoRespiratoriaDeViasAereaSuperior->setEnabled(true);
    }else{
        ui->lineEdit_infeccaoRespiratoriaDeViasAereaSuperior->setEnabled(false);
    }
}

void InfeccaoDeAcesso::on_checkBox_infeccaoRespiratoriaDeViasAereaInferiores_stateChanged(int arg1)
{
    if(ui->checkBox_infeccaoRespiratoriaDeViasAereaInferiores->isChecked()){
        ui->lineEdit_infeccaoRespiratoriaDeViasAereaInferiores->setEnabled(true);
    }else{
        ui->lineEdit_infeccaoRespiratoriaDeViasAereaInferiores->setEnabled(false);
    }
}

void InfeccaoDeAcesso::on_checkBox_outrasInfeccoes_stateChanged(int arg1)
{
    if(ui->checkBox_outrasInfeccoes->isChecked()){
        ui->lineEdit_outrasInfeccoes->setEnabled(true);
    }else{
        ui->lineEdit_outrasInfeccoes->setEnabled(false);
    }
}


void InfeccaoDeAcesso::on_checkBox_hemoculturaSAOR_stateChanged(int arg1)
{

}
