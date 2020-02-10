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
    explicit controledereuso_leitura(int id, QWidget *parent = nullptr);
    ~controledereuso_leitura();

private slots:
    void on_pushButton_2_clicked();

private:
    Ui::controledereuso_leitura *ui;
    int id;
};

#endif // CONTROLEDEREUSO_LEITURA_H
