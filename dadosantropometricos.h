#ifndef DADOSANTROPOMETRICOS_H
#define DADOSANTROPOMETRICOS_H

#include <QDialog>
#include "req.h"

namespace Ui {
class dadosAntropometricos;
}

class dadosAntropometricos : public QDialog
{
    Q_OBJECT

public:
    explicit dadosAntropometricos(int id, QWidget *parent = 0);
    ~dadosAntropometricos();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::dadosAntropometricos *ui;
    int id;
};

#endif // DADOSANTROPOMETRICOS_H
