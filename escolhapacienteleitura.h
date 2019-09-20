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

private:
    Ui::escolhapacienteleitura *ui;
};

#endif // ESCOLHAPACIENTELEITURA_H
