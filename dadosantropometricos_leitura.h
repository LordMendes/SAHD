#ifndef DADOSANTROPOMETRICOS_LEITURA_H
#define DADOSANTROPOMETRICOS_LEITURA_H

#include <QWidget>

namespace Ui {
class dadosantropometricos_leitura;
}

class dadosantropometricos_leitura : public QWidget
{
    Q_OBJECT

public:
    explicit dadosantropometricos_leitura(QWidget *parent = nullptr);
    ~dadosantropometricos_leitura();

private:
    Ui::dadosantropometricos_leitura *ui;
};

#endif // DADOSANTROPOMETRICOS_LEITURA_H
