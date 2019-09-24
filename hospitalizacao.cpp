#include "hospitalizacao.h"
#include "ui_hospitalizacao.h"
#include <QMessageBox>
#include <QJsonObject>

Hospitalizacao::Hospitalizacao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Hospitalizacao)
{
    setWindowFlags(Qt::Window
                | Qt::WindowMinimizeButtonHint
                | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);

}

Hospitalizacao::~Hospitalizacao()
{
    delete ui;
}

void Hospitalizacao::on_pushButton_clicked()
{
    QMessageBox::StandardButton saida = QMessageBox::information(this, "Cancelar", "Todos os dados serão perdidos, deseja sair mesmo assim?", QMessageBox::Yes | QMessageBox::No);
    if(saida == QMessageBox::Yes){
        hide();
    }
}

void Hospitalizacao::on_pushButton_2_clicked()
{
    QString data =ui->dateEdit_Data->date().toString();
    QString local =ui->lineEdit_Local->text();
    QString motivo = ui->lineEdit_Motivo->text();
    QString dataAlta = ui->dateEdit_DataDaAlta->date().toString();
    QString observacoes = ui->lineEdit_Observaes->text();

    QJsonObject object{
        {"data",data},
        {"local",local},
        {"motivo",motivo},
        {"dataAlta",dataAlta},
        {"observacoes",observacoes}
    };

    req Req;
    Req.post(object,"");

}
