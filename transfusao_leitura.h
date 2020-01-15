#ifndef TRANSFUSAO_LEITURA_H
#define TRANSFUSAO_LEITURA_H

#include <QDialog>

namespace Ui {
class transfusao_leitura;
}

class transfusao_leitura : public QDialog
{
    Q_OBJECT

public:
    explicit transfusao_leitura(int id, QWidget *parent = nullptr);
    ~transfusao_leitura();

private slots:
    void on_pushButton_Cancelar_2_clicked();

private:
    Ui::transfusao_leitura *ui;
    int id;
};

#endif // TRANSFUSAO_LEITURA_H
