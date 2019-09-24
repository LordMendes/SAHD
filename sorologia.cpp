#include "sorologia.h"
#include "ui_sorologia.h"
#include <QMessageBox>

Sorologia::Sorologia(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Sorologia)
{
    setWindowFlags(Qt::Window
                | Qt::WindowMinimizeButtonHint
                | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);

    ui->comboBox_AntiHBc->setEnabled(false);
    ui->comboBox_AntiHBcIgM->setEnabled(false);
    ui->comboBox_AntiHbe->setEnabled(false);
    ui->comboBox_AntiHBs->setEnabled(false);
    ui->comboBox_HBeAg->setEnabled(false);
    ui->comboBox_HbsAg->setEnabled(false);

}

Sorologia::~Sorologia()
{
    delete ui;
}

void Sorologia::on_pushButton_Cancelar_clicked()
{
    QMessageBox::StandardButton saida = QMessageBox::information(this, "Cancelar", "Todos os dados serão perdidos, deseja sair mesmo assim?", QMessageBox::Yes | QMessageBox::No);
    if(saida == QMessageBox::Yes){
        hide();
    }
    hide();
}

void Sorologia::on_checkBox_HbsAg_stateChanged(int arg1)
{

    if(ui->checkBox_HbsAg->isChecked()){
            ui->comboBox_HbsAg->setEnabled(true);
    }else{
        ui->comboBox_HbsAg->setEnabled(false);
    }
}

void Sorologia::on_checkBox_AntiHBs_stateChanged(int arg1)
{
    if(ui->checkBox_AntiHBs->isChecked()){
            ui->comboBox_AntiHBs->setEnabled(true);
    }else{
        ui->comboBox_AntiHBs->setEnabled(false);
    }
}

void Sorologia::on_checkBox_AntiHBc_stateChanged(int arg1)
{
    if(ui->checkBox_AntiHBc->isChecked()){
        ui->comboBox_AntiHBc->setEnabled(true);
    }else{
        ui->comboBox_AntiHBc->setEnabled(false);
    }
}

void Sorologia::on_checkBox_AntiHBcIgM_stateChanged(int arg1)
{
    if(ui->checkBox_AntiHBcIgM->isChecked()){
        ui->comboBox_AntiHBcIgM->setEnabled(true);
    }else{
        ui->comboBox_AntiHBcIgM->setEnabled(false);
    }
}

void Sorologia::on_checkBox_HBeAg_stateChanged(int arg1)
{
    if(ui->checkBox_HBeAg->isChecked()){
        ui->comboBox_HBeAg->setEnabled(true);
    }else{
        ui->comboBox_HBeAg->setEnabled(false);
    }
}

void Sorologia::on_checkBox_AntiHbe_stateChanged(int arg1)
{
    if(ui->checkBox_AntiHbe->isChecked()){
        ui->comboBox_AntiHbe->setEnabled(true);
    }else{
        ui->comboBox_AntiHbe->setEnabled(false);
    }
}
