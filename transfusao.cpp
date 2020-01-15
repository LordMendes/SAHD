#include "transfusao.h"
#include "ui_transfusao.h"
#include <QMessageBox>

transfusao::transfusao(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::transfusao)
{
    setWindowFlags(Qt::Window
                | Qt::WindowMinimizeButtonHint
                | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
    this->id = id;
}

transfusao::~transfusao()
{
    delete ui;
}

void transfusao::on_pushButton_Cancelar_clicked()
{
    QMessageBox::StandardButton saida = QMessageBox::information(this, "Cancelar", "Todos os dados serão perdidos, deseja sair mesmo assim?", QMessageBox::Yes | QMessageBox::No);
    if(saida == QMessageBox::Yes){
        hide();
    }
}

void transfusao::on_pushButton_Confirmar_clicked()
{
    req Req;

    QString dataTrans = ui->dataTrans->date().toString();
    QString hemocomponentes = ui->hemocomponentes->currentText();
    QString hemoderivados = ui->hemoderivados->currentText();
    QString quantidade = ui->quantidade->text();
    QString nDaBolsa = ui->nDaBolsa->text();
    QString grupoSangue = ui->grupoSangue->currentText();
    QString observacao = ui->observacao->text();


    QJsonObject object{

        {"dataTrans",dataTrans},
        {"hemocomponentes",hemocomponentes},
        {"hemoderivados",hemoderivados},
        {"quantidade",quantidade},
        {"nDaBolsa",nDaBolsa},
        {"grupoSangue",grupoSangue},
        {"observacaoTrans",observacao}

    };

    QJsonDocument id2 = Req.get("countConsultas");
    int a = id2[0]["count(`id`)"].toInt();
    QString s = QString::number(a);
    Req.put(object,"updateConsultas/"+s);
    Req.put(object,"updateRecente/"+QString::number(id));
    hide();
}
