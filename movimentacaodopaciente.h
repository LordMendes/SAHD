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
    explicit MovimentacaoDoPaciente(QWidget *parent = 0);
    ~MovimentacaoDoPaciente();

private slots:

    void on_pushButton_cancelar_clicked();

    void on_comboBox_situacao_activated(const QString &arg1);

private:
    Ui::MovimentacaoDoPaciente *ui;
};

#endif // MOVIMENTACAODOPACIENTE_H
