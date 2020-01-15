#ifndef EVENTOSADVERSOS_LEITURA_H
#define EVENTOSADVERSOS_LEITURA_H

#include <QDialog>

namespace Ui {
class eventosadversos_leitura;
}

class eventosadversos_leitura : public QDialog
{
    Q_OBJECT

public:
    explicit eventosadversos_leitura(int id, QWidget *parent = nullptr);
    ~eventosadversos_leitura();

private:
    Ui::eventosadversos_leitura *ui;
    int id;
};

#endif // EVENTOSADVERSOS_LEITURA_H
