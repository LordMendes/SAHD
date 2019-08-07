#ifndef TELALOGIN_H
#define TELALOGIN_H

#include <QDialog>
#include <hemocontrol.h>
#include "hemocontrol.h"
#include <QPixmap>
#include <QMessageBox>
#include "req.h"

namespace Ui {
class TelaLogin;
}

class QSqlTableModel;

class TelaLogin : public QDialog
{
    Q_OBJECT

public:
    explicit TelaLogin(QWidget *parent = 0);
    ~TelaLogin();

private slots:
    void on_pushButton_Entrar_clicked();

    void on_pushButton_Sair_clicked();

private:
    Ui::TelaLogin *ui;
    hemoControl *hemocontrol2;
    QJsonDocument userList;
    QJsonDocument userCount;

};

#endif // TELALOGIN_H
