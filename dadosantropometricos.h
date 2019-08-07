#ifndef DADOSANTROPOMETRICOS_H
#define DADOSANTROPOMETRICOS_H

#include <QDialog>

namespace Ui {
class dadosAntropometricos;
}

class dadosAntropometricos : public QDialog
{
    Q_OBJECT

public:
    explicit dadosAntropometricos(QWidget *parent = 0);
    ~dadosAntropometricos();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::dadosAntropometricos *ui;
};

#endif // DADOSANTROPOMETRICOS_H
