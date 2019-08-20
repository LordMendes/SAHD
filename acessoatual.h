#ifndef ACESSOATUAL_H
#define ACESSOATUAL_H

#include <QDialog>
#include "req.h"

namespace Ui {
class AcessoAtual;
}

class AcessoAtual : public QDialog
{
    Q_OBJECT

public:
    explicit AcessoAtual(QWidget *parent = 0);
    ~AcessoAtual();

private slots:
    void on_pushButton_Cancelar_clicked();

    void on_pushButton_Confirmar_clicked();

private:
    Ui::AcessoAtual *ui;
};

#endif // ACESSOATUAL_H
