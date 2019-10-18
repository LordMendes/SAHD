#ifndef DADOSANTROPOMETRICOS_LEITURA_H
#define DADOSANTROPOMETRICOS_LEITURA_H

#include <QWidget>
#include <QDialog>

namespace Ui {
class dadosantropometricos_leitura;
}

class dadosantropometricos_leitura : public QDialog
{
    Q_OBJECT

public:
    explicit dadosantropometricos_leitura(QWidget *parent = nullptr);
    ~dadosantropometricos_leitura();

private:
    Ui::dadosantropometricos_leitura *ui;
};

#endif // DADOSANTROPOMETRICOS_LEITURA_H
