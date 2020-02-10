#ifndef SOROLOGIA_LEITURA_H
#define SOROLOGIA_LEITURA_H

#include <QDialog>

namespace Ui {
class sorologia_leitura;
}

class sorologia_leitura : public QDialog
{
    Q_OBJECT

public:
    explicit sorologia_leitura(int id, QWidget *parent = nullptr);
    ~sorologia_leitura();

private slots:
    void on_pushButton_Cancelar_2_clicked();

private:
    Ui::sorologia_leitura *ui;
    int id;
};

#endif // SOROLOGIA_LEITURA_H
