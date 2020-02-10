#ifndef EXAMES_LEITURA_H
#define EXAMES_LEITURA_H

#include <QDialog>

namespace Ui {
class exames_leitura;
}

class exames_leitura : public QDialog
{
    Q_OBJECT

public:
    explicit exames_leitura(QWidget *parent = nullptr);
    ~exames_leitura();

private:
    Ui::exames_leitura *ui;
};

#endif // EXAMES_LEITURA_H
