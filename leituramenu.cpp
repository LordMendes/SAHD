#include "leituramenu.h"
#include "ui_leituramenu.h"
#include "req.h"
#include "dadosantropometricos_leitura.h"
#include "escolhapacienteatt.h"
#include "acessoatual_leitura.h"
#include "infeccaodeacesso_leitura.h"
#include "dadoshemodialise_leitura.h"
#include "eventosadversos_leitura.h"
#include "movimentacaodopaciente_leitura.h"
#include "hospitalizacao_leitura.h"

LeituraMenu::LeituraMenu(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LeituraMenu)
{
    req Req;
    QJsonDocument obj = Req.get("orderedPacientes");
    ui->setupUi(this);
    ui->label->setText(obj[id]["nome"].toString());
    this->id = --id;
}


LeituraMenu::~LeituraMenu()
{
    delete ui;
}

void LeituraMenu::on_infeccao_clicked()
{
    infeccaodeacesso_leitura a(this->id);
    a.setModal(true);
    a.exec();
}

void LeituraMenu::on_pushButton_14_clicked()
{
    hide();
}

void LeituraMenu::on_dadosclinicos_clicked()
{
    dadosantropometricos_leitura dados(this->id);
    dados.setModal(true);
    dados.exec();
}

void LeituraMenu::on_eventosadv_clicked()
{
    eventosadversos_leitura a(this->id);
    a.setModal(true);
    a.exec();
}

void LeituraMenu::on_movimentacao_clicked()
{
    movimentacaodopaciente_leitura a(this->id);
    a.setModal(true);
    a.exec();
}

void LeituraMenu::on_acessoatual_clicked()
{
    acessoatual_leitura acesso(this->id);
    acesso.setModal(true);
    acesso.exec();
}

void LeituraMenu::on_hospta_clicked()
{
    hospitalizacao_leitura a(this->id);
    a.setModal(true);
    a.exec();
}
