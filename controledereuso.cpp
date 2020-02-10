#include "controledereuso.h"
#include "ui_controledereuso.h"
#include <QJsonObject>
#include "req.h"

controledereuso::controledereuso(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::controledereuso)
{
    setWindowFlags(Qt::Window
                | Qt::WindowMinimizeButtonHint
                | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
}

controledereuso::~controledereuso()
{
    delete ui;
}

void controledereuso::on_pushButton_2_clicked()
{
    hide();
}

void controledereuso::on_pushButton_clicked()
{
    QString dataReuso = ui->dataReuso->date().toString();
    QString nDoReuso = ui->nDoReuso->text();
    QString primingReuso = ui->priming->text();
    QString setArterial = ui->setArterial->text();
    QString setVenoso = ui->setVenoso->text();
    QString motivoDescarte = ui->motivoDoDescarte->text();

    QJsonObject object{
        {"dataReuso",dataReuso},
        {"nDoReuso",nDoReuso},
        {"primingReuso",primingReuso},
        {"setArterial",setArterial},
        {"setVenoso",setVenoso},
        {"motivoDescarte",motivoDescarte}
    };

    req Req;
    QJsonDocument id2 = Req.get("countConsultas");
    int a = id2[0]["count(`id`)"].toInt();
    QString s = QString::number(a);
    Req.put(object,"updateConsultas/"+s);
    Req.put(object,"updateRecente/"+QString::number(id));
    hide();
}
