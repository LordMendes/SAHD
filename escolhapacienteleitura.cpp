#include "escolhapacienteleitura.h"
#include "ui_escolhapacienteleitura.h"
#include "req.h"
#include <QJsonDocument>
#include "leituramenu.h"

escolhapacienteleitura::escolhapacienteleitura(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::escolhapacienteleitura)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window
                | Qt::WindowMinimizeButtonHint
                | Qt::WindowMaximizeButtonHint);

    req Req;
    QJsonDocument jsonDoc = Req.get("pacientes");
    QJsonDocument qnt = Req.get("countPacientes");

    int count = qnt[0]["count(`id`)"].toInt();
    qDebug()<<qnt;

    for(int i = 0 ; i < count ; i++){
        ui->comboBox->addItem(jsonDoc[i]["nome"].toString());
    }
}

escolhapacienteleitura::~escolhapacienteleitura()
{
    delete ui;
}

void escolhapacienteleitura::on_pushButton_clicked()
{
    int id = ui->comboBox->currentIndex();
    hide();
    qDebug()<<"id : "<<id;
    LeituraMenu menuatt(++id, this);
    menuatt.setModal(true);
    menuatt.exec();
}

void escolhapacienteleitura::on_pushButton_2_clicked()
{
    hide();
}
