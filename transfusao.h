#ifndef TRANSFUSAO_H
#define TRANSFUSAO_H

#include <QDialog>
#include "req.h"

namespace Ui {
class transfusao;
}

class transfusao : public QDialog
{
    Q_OBJECT

public:
    explicit transfusao(int id, QWidget *parent = 0);
    ~transfusao();

private slots:
    void on_pushButton_Cancelar_clicked();

    void on_pushButton_Confirmar_clicked();

private:
    int id;
    Ui::transfusao *ui;
};

#endif // TRANSFUSAO_H
