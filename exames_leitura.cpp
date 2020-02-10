#include "exames_leitura.h"
#include "ui_exames_leitura.h"
#include "req.h"

exames_leitura::exames_leitura(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::exames_leitura)
{
    setWindowFlags(Qt::Window
                    | Qt::WindowMinimizeButtonHint
                    | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
    this->id = id;

    req Req;
    QJsonDocument obj = Req.get("recentes");

    ui->d1->setText(obj[id]["d1"].toString());
    ui->d2->setText(obj[id]["d2"].toString());
    ui->d3->setText(obj[id]["d3"].toString());
    ui->d4->setText(obj[id]["d4"].toString());
    ui->d5->setText(obj[id]["d5"].toString());
    ui->t1->setText(obj[id]["t1"].toString());
    ui->t2->setText(obj[id]["t2"].toString());
    ui->t3->setText(obj[id]["t3"].toString());
    ui->t4->setText(obj[id]["t4"].toString());
    ui->t5->setText(obj[id]["t5"].toString());

    ui->md1->setText(obj[id]["md1"].toString());
    ui->md2->setText(obj[id]["md2"].toString());
    ui->md3->setText(obj[id]["md3"].toString());
    ui->md4->setText(obj[id]["md4"].toString());
    ui->me1->setText(obj[id]["me1"].toString());
    ui->me2->setText(obj[id]["me2"].toString());
    ui->me3->setText(obj[id]["me3"].toString());
    ui->me4->setText(obj[id]["me4"].toString());
    ui->mr1->setText(obj[id]["mr1"].toString());
    ui->mr2->setText(obj[id]["mr2"].toString());
    ui->mr3->setText(obj[id]["mr3"].toString());
    ui->mr4->setText(obj[id]["mr4"].toString());
    ui->mu1->setText(obj[id]["mu1"].toString());
    ui->mu2->setText(obj[id]["mu2"].toString());
    ui->mu3->setText(obj[id]["mu3"].toString());
    ui->mu4->setText(obj[id]["mu4"].toString());

    ui->td1->setText(obj[id]["td1"].toString());
    ui->td2->setText(obj[id]["td2"].toString());
    ui->td3->setText(obj[id]["td3"].toString());
    ui->td4->setText(obj[id]["td4"].toString());
    ui->te1->setText(obj[id]["te1"].toString());
    ui->te2->setText(obj[id]["te2"].toString());
    ui->te3->setText(obj[id]["te3"].toString());
    ui->te4->setText(obj[id]["te4"].toString());
    ui->tr1->setText(obj[id]["tr1"].toString());
    ui->tr2->setText(obj[id]["tr2"].toString());
    ui->tr3->setText(obj[id]["tr3"].toString());
    ui->tr4->setText(obj[id]["tr4"].toString());
    ui->tu1->setText(obj[id]["tu1"].toString());
    ui->tu2->setText(obj[id]["tu2"].toString());
    ui->tu3->setText(obj[id]["tu3"].toString());
    ui->tu4->setText(obj[id]["tu4"].toString());

    ui->sd1->setText(obj[id]["sd1"].toString());
    ui->sd2->setText(obj[id]["sd2"].toString());
    ui->sd3->setText(obj[id]["sd3"].toString());
    ui->sd4->setText(obj[id]["sd4"].toString());
    ui->se1->setText(obj[id]["se1"].toString());
    ui->se2->setText(obj[id]["se2"].toString());
    ui->se3->setText(obj[id]["se3"].toString());
    ui->se4->setText(obj[id]["se4"].toString());
    ui->sr1->setText(obj[id]["sr1"].toString());
    ui->sr2->setText(obj[id]["sr2"].toString());
    ui->sr3->setText(obj[id]["sr3"].toString());
    ui->sr4->setText(obj[id]["sr4"].toString());
    ui->su1->setText(obj[id]["su1"].toString());
    ui->su2->setText(obj[id]["su2"].toString());
    ui->su3->setText(obj[id]["su3"].toString());
    ui->su4->setText(obj[id]["su4"].toString());

    ui->ad1->setText(obj[id]["ad1"].toString());
    ui->ad2->setText(obj[id]["ad2"].toString());
    ui->ad3->setText(obj[id]["ad3"].toString());
    ui->ad4->setText(obj[id]["ad4"].toString());
    ui->ae1->setText(obj[id]["ae1"].toString());
    ui->ae2->setText(obj[id]["ae2"].toString());
    ui->ae3->setText(obj[id]["ae3"].toString());
    ui->ae4->setText(obj[id]["ae4"].toString());
    ui->ar1->setText(obj[id]["ar1"].toString());
    ui->ar2->setText(obj[id]["ar2"].toString());
    ui->ar3->setText(obj[id]["ar3"].toString());
    ui->ar4->setText(obj[id]["ar4"].toString());
    ui->au1->setText(obj[id]["au1"].toString());
    ui->au2->setText(obj[id]["au2"].toString());
    ui->au3->setText(obj[id]["au3"].toString());
    ui->au4->setText(obj[id]["au4"].toString());

    ui->ktvExame->setText(obj[id]["ktvExame"].toString());
    ui->ktvData->setText(obj[id]["ktvData"].toString());

}

exames_leitura::~exames_leitura()
{
    delete ui;
}

void exames_leitura::on_pushButton_2_clicked()
{
    hide();
}
