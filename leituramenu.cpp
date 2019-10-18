#include "leituramenu.h"
#include "ui_leituramenu.h"
#include "req.h"
#include "dadosantropometricos_leitura.h"
#include "escolhapacienteatt.h"

LeituraMenu::LeituraMenu(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LeituraMenu)
{
    req Req;
    QJsonDocument obj = Req.get("pacientes");
    ui->setupUi(this);
    ui->label->setText(obj[id]["nome"].toString());
}

LeituraMenu::~LeituraMenu()
{
    delete ui;
}

void LeituraMenu::on_pushButton_3_clicked()
{
    dadosantropometricos_leitura dados;
    dados.setModal(true);
    dados.exec();
}
