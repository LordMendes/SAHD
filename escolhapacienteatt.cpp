#include "escolhapacienteatt.h"
#include "ui_escolhapacienteatt.h"
#include "menuatt.h"

EscolhaPacienteAtt::EscolhaPacienteAtt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EscolhaPacienteAtt)
{
    ui->setupUi(this);
}

EscolhaPacienteAtt::~EscolhaPacienteAtt()
{
    delete ui;
}

void EscolhaPacienteAtt::on_pushButton_Avancar_clicked()
{
    QString nomePaciente = ui->comboBox_listaPaciente->currentText();
    hide();
    MenuAtt menuatt;
    menuatt.setModal(true);
    menuatt.exec();
}

void EscolhaPacienteAtt::on_pushButton_voltar_clicked()
{
    hide();
}
