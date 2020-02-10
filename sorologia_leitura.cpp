#include "sorologia_leitura.h"
#include "ui_sorologia_leitura.h"
#include "req.h"
sorologia_leitura::sorologia_leitura(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sorologia_leitura)
{
    setWindowFlags(Qt::Window
                    | Qt::WindowMinimizeButtonHint
                    | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);

    req Req;
    QJsonDocument obj = Req.get("recentes");

    ui->bc1->setText(obj[id]["hbsag_text"].toString());
    ui->bc2->setText(obj[id]["antihbs_text"].toString());
    ui->bc3->setText(obj[id]["antihc_text"].toString());
    ui->bc4->setText(obj[id]["antihbcigm_text"].toString());
    ui->bc5->setText(obj[id]["hbeag_text"].toString());
    ui->bc6->setText(obj[id]["antihbe_text"].toString());
    ui->bt1->setText(obj[id]["hbsag_edit"].toString());
    ui->bt2->setText(obj[id]["antihbs_edit"].toString());
    ui->bt3->setText(obj[id]["antihc_edit"].toString());
    ui->bt4->setText(obj[id]["antihbcigm_edit"].toString());
    ui->bt5->setText(obj[id]["hbeag_edit"].toString());
    ui->bt6->setText(obj[id]["antihbe_edit"].toString());

    ui->cc1->setText(obj[id]["antihcv"].toString());
    ui->ct1->setText(obj[id]["antihcv_text"].toString());

    ui->hc1->setText(obj[id]["antihiv"].toString());
    ui->ht1->setText(obj[id]["antihiv_text"].toString());

}

sorologia_leitura::~sorologia_leitura()
{
    delete ui;
}

void sorologia_leitura::on_pushButton_Cancelar_2_clicked()
{
    hide();
}
