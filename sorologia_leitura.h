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
    explicit sorologia_leitura(QWidget *parent = nullptr);
    ~sorologia_leitura();

private:
    Ui::sorologia_leitura *ui;
};

#endif // SOROLOGIA_LEITURA_H
