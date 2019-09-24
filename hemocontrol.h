#ifndef HEMOCONTROL_H
#define HEMOCONTROL_H

#include <QMainWindow>
#include <cadastro.h>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonDocument>
#include <iostream>
#include <QDebug>
#include <QObject>
#include "req.h"

namespace Ui {
class hemoControl;
}

class hemoControl : public QMainWindow
{
    Q_OBJECT

public:
    explicit hemoControl(int user, QWidget *parent = 0);
    ~hemoControl();

    void setUser(int);

private slots:
    void on_SairButton_clicked();
    void on_registerButton_clicked();

    void on_AttButton_clicked();

    void on_actionSair_triggered();

    void on_actionAdicionar_Usu_rio_triggered();

    void on_actionConsultar_Usu_rio_triggered();

    void on_btnListPascientes_clicked();

private:
    Ui::hemoControl *ui;
    void on_actionSair_clicked();
    int user;
    QJsonDocument users;

};

#endif // HEMOCONTROL_H
