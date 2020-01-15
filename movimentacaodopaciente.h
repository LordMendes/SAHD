#ifndef MOVIMENTACAODOPACIENTE_H
#define MOVIMENTACAODOPACIENTE_H

#include <QDialog>
#include "req.h"

namespace Ui {
class MovimentacaoDoPaciente;
}

class MovimentacaoDoPaciente : public QDialog
{
    Q_OBJECT

public:
    explicit MovimentacaoDoPaciente(int id, QWidget *parent = 0);
    ~MovimentacaoDoPaciente();

private slots:

    void on_pushButton_cancelar_clicked();

    void on_comboBox_situacao_activated(const QString &arg1);

    void on_pushButton_confirmar_clicked();

private:
    Ui::MovimentacaoDoPaciente *ui;
    int id;
};

#endif // MOVIMENTACAODOPACIENTE_H
