#ifndef ACESSOATUAL_LEITURA_H
#define ACESSOATUAL_LEITURA_H

#include <QDialog>

namespace Ui {
class acessoatual_leitura;
}

class acessoatual_leitura : public QDialog
{
    Q_OBJECT

public:
    explicit acessoatual_leitura(int id, QWidget *parent = nullptr);
    ~acessoatual_leitura();

private slots:
    void on_pushButton_clicked();

private:
    Ui::acessoatual_leitura *ui;
    int id;
};

#endif // ACESSOATUAL_LEITURA_H
