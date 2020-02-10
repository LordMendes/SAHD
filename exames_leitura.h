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
    explicit exames_leitura(int id, QWidget *parent = nullptr);
    ~exames_leitura();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::exames_leitura *ui;
    int id;
};

#endif // EXAMES_LEITURA_H
