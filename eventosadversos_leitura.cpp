#include "eventosadversos_leitura.h"
#include "ui_eventosadversos_leitura.h"
#include "req.h"
eventosadversos_leitura::eventosadversos_leitura(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::eventosadversos_leitura)
{
    setWindowFlags(Qt::Window
                | Qt::WindowMinimizeButtonHint
                | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);

    req Req;
    QJsonDocument obj = Req.get("recentes");

    ui->evento1->setText(obj[id]["evento1"].toString());
    ui->outros1->setText(obj[id]["outros1"].toString());
    ui->evento2->setText(obj[id]["evento2"].toString());
    ui->outros2->setText(obj[id]["outros2"].toString());
    ui->evento3->setText(obj[id]["evento3"].toString());
    ui->outros3->setText(obj[id]["outros3"].toString());
    ui->evento4->setText(obj[id]["evento4"].toString());
    ui->outros4->setText(obj[id]["outros4"].toString());


}

eventosadversos_leitura::~eventosadversos_leitura()
{
    delete ui;
}

void eventosadversos_leitura::on_pushButton_voltar_clicked()
{
    hide();
}
