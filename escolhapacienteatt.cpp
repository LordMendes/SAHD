#include "escolhapacienteatt.h"
#include "ui_escolhapacienteatt.h"
#include "menuatt.h"
#include <QJsonObject>

EscolhaPacienteAtt::EscolhaPacienteAtt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EscolhaPacienteAtt)
{
    ui->setupUi(this);

    req Req;
    QJsonDocument jsonDoc = Req.get("orderedUsers");
    QJsonDocument qnt = Req.get("countUsers");

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
    id = ui->comboBox_listaPaciente->currentIndex();
    hide();
    MenuAtt menuatt(id, this);
    menuatt.setModal(true);
    menuatt.exec();
}

void EscolhaPacienteAtt::on_pushButton_voltar_clicked()
{
    hide();
}
