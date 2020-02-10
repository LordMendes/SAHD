#include "exames.h"
#include "ui_exames.h"
#include <QMessageBox>
#include "telalogin.h"
#include "req.h"

exames::exames(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::exames)
{
    setWindowFlags(Qt::Window
                | Qt::WindowMinimizeButtonHint
                | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
    this->id=id;
}

exames::~exames()
{
    delete ui;
}

void exames::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton saida = QMessageBox::information(this, "Sair", "Deseja volta?", QMessageBox::Yes | QMessageBox::No);
    if(saida == QMessageBox::Yes){

        hide();
        TelaLogin *telalogin = new TelaLogin(this);
        telalogin->show();

    }
}

void exames::on_pushButton_clicked()
{
    req Req;

    QString t1 = ui->t1->text();
    QString t2 = ui->t2->text();
    QString t3 = ui->t3->text();
    QString t4 = ui->t4->text();
    QString t5 = ui->t5->text();
    QString d1 = ui->d1->date().toString();
    QString d2 = ui->d2->date().toString();
    QString d3 = ui->d3->date().toString();
    QString d4 = ui->d4->date().toString();
    QString d5 = ui->d5->date().toString();

    QString md1 = ui->md1->date().toString();
    QString md2 = ui->md2->date().toString();
    QString md3 = ui->md3->date().toString();
    QString md4 = ui->md4->date().toString();

    QString me1 = ui->me1->text();
    QString me2 = ui->me2->text();
    QString me3 = ui->me3->text();
    QString me4 = ui->me4->text();

    QString mr1 = ui->mr1->text();
    QString mr2 = ui->mr2->text();
    QString mr3 = ui->mr3->text();
    QString mr4 = ui->mr4->text();

    QString mu1 = ui->mu1->text();
    QString mu2 = ui->mu2->text();
    QString mu3 = ui->mu3->text();
    QString mu4 = ui->mu4->text();

    QString td1 = ui->td1->date().toString();
    QString td2 = ui->td2->date().toString();
    QString td3 = ui->td3->date().toString();
    QString td4 = ui->td4->date().toString();

    QString te1 = ui->te1->text();
    QString te2 = ui->te2->text();
    QString te3 = ui->te3->text();
    QString te4 = ui->te4->text();

    QString tr1 = ui->tr1->text();
    QString tr2 = ui->tr2->text();
    QString tr3 = ui->tr3->text();
    QString tr4 = ui->tr4->text();

    QString tu1 = ui->tu1->text();
    QString tu2 = ui->tu2->text();
    QString tu3 = ui->tu3->text();
    QString tu4 = ui->tu4->text();

    QString sd1 = ui->sd1->date().toString();
    QString sd2 = ui->sd2->date().toString();
    QString sd3 = ui->sd3->date().toString();
    QString sd4 = ui->sd4->date().toString();

    QString se1 = ui->se1->text();
    QString se2 = ui->se2->text();
    QString se3 = ui->se3->text();
    QString se4 = ui->se4->text();

    QString sr1 = ui->sr1->text();
    QString sr2 = ui->sr2->text();
    QString sr3 = ui->sr3->text();
    QString sr4 = ui->sr4->text();

    QString su1 = ui->su1->text();
    QString su2 = ui->su2->text();
    QString su3 = ui->su3->text();
    QString su4 = ui->su4->text();

    QString ad1 = ui->ad1->date().toString();
    QString ad2 = ui->ad2->date().toString();
    QString ad3 = ui->ad3->date().toString();
    QString ad4 = ui->ad4->date().toString();

    QString ae1 = ui->ae1->text();
    QString ae2 = ui->ae2->text();
    QString ae3 = ui->ae3->text();
    QString ae4 = ui->ae4->text();

    QString ar1 = ui->ar1->text();
    QString ar2 = ui->ar2->text();
    QString ar3 = ui->ar3->text();
    QString ar4 = ui->ar4->text();

    QString au1 = ui->au1->text();
    QString au2 = ui->au2->text();
    QString au3 = ui->au3->text();
    QString au4 = ui->au4->text();

    QString ktvExame = ui->ktv->text();
    QString ktvData = ui->dktv->date().toString();

    QJsonObject object{
        {"t1",t1},
        {"t2",t2},
        {"t3",t3},
        {"t4",t4},
        {"t5",t5},
        {"d1",d1},
        {"d2",d2},
        {"d3",d3},
        {"d4",d4},
        {"d5",d5},
        {"md1",md1},
        {"md2",md2},
        {"md3",md3},
        {"md4",md4},
        {"me1",me1},
        {"me2",me2},
        {"me3",me3},
        {"me4",me4},
        {"mr1",mr1},
        {"mr2",mr2},
        {"mr3",mr3},
        {"mr4",mr4},
        {"mu1",mu1},
        {"mu2",mu2},
        {"mu3",mu3},
        {"mu4",mu4},
        {"td1",td1},
        {"td2",td2},
        {"td3",td3},
        {"td4",td4},
        {"te1",te1},
        {"te2",te2},
        {"te3",te3},
        {"te4",te4},
        {"tr1",tr1},
        {"tr2",tr2},
        {"tr3",tr3},
        {"tr4",tr4},
        {"tu1",tu1},
        {"tu2",tu2},
        {"tu3",tu3},
        {"tu4",tu4},
        {"sd1",sd1},
        {"sd2",sd2},
        {"sd3",sd3},
        {"sd4",sd4},
        {"se1",se1},
        {"se2",se2},
        {"se3",se3},
        {"se4",se4},
        {"sr1",sr1},
        {"sr2",sr2},
        {"sr3",sr3},
        {"sr4",sr4},
        {"su1",su1},
        {"su2",su2},
        {"su3",su3},
        {"su4",su4},
        {"ad1",ad1},
        {"ad2",ad2},
        {"ad3",ad3},
        {"ad4",ad4},
        {"ae1",ae1},
        {"ae2",ae2},
        {"ae3",ae3},
        {"ae4",ae4},
        {"ar1",ar1},
        {"ar2",ar2},
        {"ar3",ar3},
        {"ar4",ar4},
        {"au1",au1},
        {"au2",au2},
        {"au3",au3},
        {"au4",au4},
        {"ktvExame",ktvExame},
        {"ktvData",ktvData}
    };

    QJsonDocument id2 = Req.get("countConsultas");
    int a = id2[0]["count(`id`)"].toInt();
    QString s = QString::number(a);
    Req.put(object,"updateConsultas/"+s);
    Req.put(object,"updateRecente/"+QString::number(id));
    hide();

}
