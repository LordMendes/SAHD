#ifndef HOSPITALIZACAO_LEITURA_H
#define HOSPITALIZACAO_LEITURA_H

#include <QDialog>

namespace Ui {
class hospitalizacao_leitura;
}

class hospitalizacao_leitura : public QDialog
{
    Q_OBJECT

public:
    explicit hospitalizacao_leitura(int id, QWidget *parent = nullptr);
    ~hospitalizacao_leitura();

private:
    Ui::hospitalizacao_leitura *ui;
    int id;
};

#endif // HOSPITALIZACAO_LEITURA_H
