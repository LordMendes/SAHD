#ifndef ESCOLHAPACIENTELEITURA_H
#define ESCOLHAPACIENTELEITURA_H

#include <QDialog>

namespace Ui {
class escolhapacienteleitura;
}

class escolhapacienteleitura : public QDialog
{
    Q_OBJECT

public:
    explicit escolhapacienteleitura(QWidget *parent = nullptr);
    ~escolhapacienteleitura();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::escolhapacienteleitura *ui;
};

#endif // ESCOLHAPACIENTELEITURA_H
