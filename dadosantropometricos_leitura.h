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
    explicit dadosantropometricos_leitura(int id,QWidget *parent = nullptr);
    ~dadosantropometricos_leitura();

private slots:
    void on_voltar_clicked();

private:
    Ui::dadosantropometricos_leitura *ui;
    int id;
};

#endif // DADOSANTROPOMETRICOS_LEITURA_H
