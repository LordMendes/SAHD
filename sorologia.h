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
    explicit Sorologia(QWidget *parent = 0);
    ~Sorologia();

private slots:
    void on_pushButton_Cancelar_clicked();

    void on_checkBox_HbsAg_stateChanged(int arg1);

    void on_checkBox_AntiHBs_stateChanged(int arg1);

    void on_checkBox_AntiHBc_stateChanged(int arg1);

    void on_checkBox_AntiHBcIgM_stateChanged(int arg1);

    void on_checkBox_HBeAg_stateChanged(int arg1);

    void on_checkBox_AntiHbe_stateChanged(int arg1);

private:
    Ui::Sorologia *ui;
};

#endif // SOROLOGIA_H
