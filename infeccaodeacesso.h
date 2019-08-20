#ifndef INFECCAODEACESSO_H
#define INFECCAODEACESSO_H

#include <QDialog>
#include "req.h"

namespace Ui {
class InfeccaoDeAcesso;
}

class InfeccaoDeAcesso : public QDialog
{
    Q_OBJECT

public:
    explicit InfeccaoDeAcesso(QWidget *parent = 0);
    ~InfeccaoDeAcesso();

private slots:

    void on_pushButton_Cancelar_clicked();

    void on_checkBox_infeccaoDePele_stateChanged(int arg1);

    void on_checkBox_infeccaoDeSitioCirurgico_stateChanged(int arg1);

    void on_checkBox_infeccaoRespiratoriaDeViasAereaSuperiores_stateChanged(int arg1);

    void on_checkBox_infeccaoRespiratoriaDeViasAereaInferiores_stateChanged(int arg1);

    void on_checkBox_outrasInfeccoes_stateChanged(int arg1);

    void on_checkBox_hemoculturaSAOR_stateChanged(int arg1);

private:
    Ui::InfeccaoDeAcesso *ui;
};

#endif // INFECCAODEACESSO_H
