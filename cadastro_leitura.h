#ifndef CADASTRO_LEITURA_H
#define CADASTRO_LEITURA_H

#include <QDialog>

namespace Ui {
class cadastro_leitura;
}

class cadastro_leitura : public QDialog
{
    Q_OBJECT

public:
    explicit cadastro_leitura(QWidget *parent = nullptr);
    ~cadastro_leitura();

private:
    Ui::cadastro_leitura *ui;
};

#endif // CADASTRO_LEITURA_H
