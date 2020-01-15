#ifndef MOVIMENTACAODOPACIENTE_LEITURA_H
#define MOVIMENTACAODOPACIENTE_LEITURA_H

#include <QDialog>
#include "req.h"

namespace Ui {
class movimentacaodopaciente_leitura;
}

class movimentacaodopaciente_leitura : public QDialog
{
    Q_OBJECT

public:
    explicit movimentacaodopaciente_leitura(int id, QWidget *parent = nullptr);
    ~movimentacaodopaciente_leitura();

private slots:
    void on_pushButton_clicked();

private:
    Ui::movimentacaodopaciente_leitura *ui;
    int id;
};

#endif // MOVIMENTACAODOPACIENTE_LEITURA_H
