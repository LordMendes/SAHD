#ifndef SOROLOGIA_H
#define SOROLOGIA_H

#include <QDialog>
#include "req.h"

namespace Ui {
class Sorologia;
}

class Sorologia : public QDialog
{
    Q_OBJECT

public:
    explicit Sorologia(int id, QWidget *parent = 0);
    ~Sorologia();

private slots:
    void on_pushButton_Cancelar_clicked();

    void on_checkBox_HbsAg_stateChanged(int arg1);

    void on_checkBox_AntiHBs_stateChanged(int arg1);

    void on_checkBox_AntiHBc_stateChanged(int arg1);

    void on_checkBox_AntiHBcIgM_stateChanged(int arg1);

    void on_checkBox_HBeAg_stateChanged(int arg1);

    void on_checkBox_AntiHbe_stateChanged(int arg1);

    void on_pushButton_Confirmar_clicked();

private:
    Ui::Sorologia *ui;

    int id;
};

#endif // SOROLOGIA_H
