#include "telalogin.h"
#include "ui_telalogin.h"
#include <QDialog>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonDocument>
#include <iostream>
#include <QDebug>
#include <QObject>
#include <QMessageBox>

TelaLogin::TelaLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TelaLogin)
{
    setWindowFlags(Qt::Window
        | Qt::WindowMinimizeButtonHint
        | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);

    QPixmap logo(":/logo/Resources/logoRim.png");
    ui->label_logo->setPixmap(logo.scaled(300,175,Qt::KeepAspectRatio));

    req Req;

    userList =  Req.get("users");
    userCount = Req.get("countUsers");

}

TelaLogin::~TelaLogin()
{
    delete ui;
}

void TelaLogin::on_pushButton_Entrar_clicked()
{

        int user = userCount[0]["count(`id`)"].toInt();
        qDebug()<<"c:"<<userCount[0]["count(`id`)"].toInt();
        int count=0;
        QString reg = ui->lineEdit_Registro->text();
        QString pass = ui->lineEdit_Senha->text();

        if(reg == NULL || pass  == ""){
            QMessageBox::StandardButton erro = QMessageBox::information(this, "Campos Vazios", "Um ou mais campos estão vazios", QMessageBox::Ok);

        }else{
            for(int i = 0 ; i < user; i++){
                qDebug()<<userList[i]["registro_sahd"];
                qDebug()<<userList[i]["senha"].toString();
                qDebug()<<reg;
                qDebug()<<pass;
                if((userList[i]["registro_sahd"].toString() == reg)&&(userList[i]["senha"].toString() == pass)){
                    break;
                }
                count++;
            }


            if(count >= user){
                QMessageBox::StandardButton erro = QMessageBox::information(this, "Cancelar", "Usuário ou Senha incorretos", QMessageBox::Ok);
            }else{
                qDebug()<<userList[count]["nome"].toString();
                hemocontrol2 = new hemoControl(count-1, this);
                hemocontrol2->show();
                hide();
            }
        }


}

void TelaLogin::on_pushButton_Sair_clicked()
{
    QMessageBox::StandardButton saida = QMessageBox::information(this, "Sair", "Tem certeza que deseja sair?", QMessageBox::Yes | QMessageBox::No);
    if(saida == QMessageBox::Yes){
        QApplication::quit();
    }
}
