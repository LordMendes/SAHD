#include "sorologia.h"
#include "ui_sorologia.h"
#include <QMessageBox>
#include "req.h"

Sorologia::Sorologia(int id, QWidget *parent) :
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

    this->id = id;

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

void Sorologia::on_pushButton_Confirmar_clicked()
{
    req Req;

    bool hepatiteB = ui->groupBox_hepatiteB->isChecked();
    bool hbsag = ui->checkBox_HbsAg->isChecked();
    QString hbsag_text = ui->comboBox_HbsAg->currentText();
    QString hbsag_edit = ui->lineEdit_HbsAg->text();
    bool antihbs = ui->checkBox_AntiHBs->isChecked();
    QString antihbs_text = ui->comboBox_AntiHBs->currentText();
    QString antihbs_edit = ui->lineEdit_AntiHBs->text();
    bool antihbc = ui->checkBox_AntiHBc->isChecked();
    QString antihc_text = ui->comboBox_AntiHBc->currentText();
    QString antihc_edit = ui->lineEdit_AntiHBc->text();
    bool antihbcigm = ui->checkBox_AntiHBcIgM->isChecked();
    QString antihbcigm_text = ui->comboBox_AntiHBcIgM->currentText();
    QString antihbcigm_edit = ui->lineEdit_AntiHBcIgM->text();
    bool hbeag = ui->checkBox_HBeAg->isChecked();
    QString hbeag_text = ui->comboBox_HBeAg->currentText();
    QString hbeag_edit = ui->lineEdit_HBeAg->text();
    bool antihbe = ui->checkBox_AntiHbe->isChecked();
    QString antihbe_text = ui->comboBox_AntiHbe->currentText();
    QString antihbe_edit = ui->lineEdit_AntiHbe->text();
    bool hepatiteC = ui->groupBox_hepetiteC->isChecked();
    QString antihcv = ui->comboBox_AntiHCV->currentText();
    QString antihcv_text = ui->lineEdit_AntiHCV->text();
    bool hiv = ui->groupBox_HIV->isChecked();
    QString antihiv = ui->comboBox_AntiHIV->currentText();
    QString antihiv_text = ui->lineEdit_AntiHIV->text();


    QJsonObject object{
        {"hepatiteB",hepatiteB },
        {"hbsag",hbsag },
        {"hbsag_text",hbsag_text },
        {"hbsag_edit",hbsag_edit },
        {"antihbs", antihbs},
        {"antihbs_text", antihbs_text},
        {"antihbs_edit",antihbs_edit },
        {"antihbc", antihbc},
        {"antihc_text",antihc_text },
        {"antihc_edit", antihc_edit},
        {"antihbcigm",antihbcigm },
        {"antihbcigm_text", antihbcigm_text},
        {"antihbcigm_edit", antihbcigm_edit},
        {"hbeag", hbeag},
        {"hbeag_text", hbeag_text},
        {"hbeag_edit",hbeag_edit },
        {"antihbe",antihbe },
        {"antihbe_text", antihbe_text},
        {"antihbe_edit",antihbe_edit },
        {"hepatiteC",hepatiteC },
        {"antihcv",antihcv },
        {"antihcv_text",antihcv_text },
        {"hiv", hiv},
        {"antihiv",antihiv },
        {"antihiv_text",antihiv_text}
    };

    QJsonDocument id2 = Req.get("countConsultas");
    int a = id2[0]["count(`id`)"].toInt();
    QString s = QString::number(a);
    Req.put(object,"updateConsultas/"+s);
    Req.put(object,"updateRecente/"+QString::number(id));
    hide();
}
