#ifndef CONTROLEDEREUSO_LEITURA_H
#define CONTROLEDEREUSO_LEITURA_H

#include <QDialog>

namespace Ui {
class controledereuso_leitura;
}

class controledereuso_leitura : public QDialog
{
    Q_OBJECT

public:
    explicit controledereuso_leitura(QWidget *parent = nullptr);
    ~controledereuso_leitura();

private:
    Ui::controledereuso_leitura *ui;
};

#endif // CONTROLEDEREUSO_LEITURA_H
