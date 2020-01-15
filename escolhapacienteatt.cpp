#include "escolhapacienteatt.h"
#include "ui_escolhapacienteatt.h"
#include "menuatt.h"
#include <QJsonObject>
#include "req.h"

EscolhaPacienteAtt::EscolhaPacienteAtt(int user, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EscolhaPacienteAtt)
{
    setWindowFlags(Qt::Window
                | Qt::WindowMinimizeButtonHint
                | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
    this->user = user;
    req Req;
    QJsonDocument jsonDoc = Req.get("pacientes");
    QJsonDocument qnt = Req.get("countPacientes");

    int count = qnt[0]["count(`id`)"].toInt();
    qDebug()<<qnt;

    for(int i = 0 ; i < count ; i++){
        ui->comboBox_listaPaciente->addItem(jsonDoc[i]["nome"].toString());
    }

}

EscolhaPacienteAtt::~EscolhaPacienteAtt()
{
    delete ui;
}

void EscolhaPacienteAtt::on_pushButton_Avancar_clicked()
{
    req Req;
    id = ui->comboBox_listaPaciente->currentIndex();
    QJsonDocument asd = Req.get("pacientes");
    //id = asd[id][""]
    QJsonObject obj{
        {"paciente_id", id},
        {"usuario_id", user}
    };
    qDebug()<<"pac : "<<id;
    qDebug()<<"user : "<<user;
    Req.post(obj,"createConsulta");


    hide();
    MenuAtt menuatt(++id, this);

    menuatt.setModal(true);
    menuatt.exec();
}

void EscolhaPacienteAtt::on_pushButton_voltar_clicked()
{
    hide();
}
