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
#include "controledereuso_leitura.h"
#include "exames_leitura.h"
#include "transfusao_leitura.h"
#include "sorologia_leitura.h"

LeituraMenu::LeituraMenu(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LeituraMenu)
{
    setWindowFlags(Qt::Window
                    | Qt::WindowMinimizeButtonHint
                    | Qt::WindowMaximizeButtonHint);
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
    dadoshemodialise_leitura dados(this->id);
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

void LeituraMenu::on_controledereuso_clicked()
{
    controledereuso_leitura a(this->id);
    a.setModal(true);
    a.exec();
}

void LeituraMenu::on_exames_clicked()
{
    exames_leitura a(this->id);
    a.setModal(true);
    a.exec();
}

void LeituraMenu::on_transfusao_clicked()
{
    transfusao_leitura a(this->id);
    a.setModal(true);
    a.exec();
}

void LeituraMenu::on_dadosantro_clicked()
{
    dadosantropometricos_leitura a(this->id);
    a.setModal(true);
    a.exec();
}

void LeituraMenu::on_sorologia_clicked()
{
    sorologia_leitura a(this->id);
    a.setModal(true);
    a.exec();
}
