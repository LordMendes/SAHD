#ifndef INFECCAODEACESSO_LEITURA_H
#define INFECCAODEACESSO_LEITURA_H

#include <QDialog>

namespace Ui {
class infeccaodeacesso_leitura;
}

class infeccaodeacesso_leitura : public QDialog
{
    Q_OBJECT

public:
    explicit infeccaodeacesso_leitura(int id, QWidget *parent = nullptr);
    ~infeccaodeacesso_leitura();

private slots:
    void on_pushButton_Voltar_clicked();

private:
    Ui::infeccaodeacesso_leitura *ui;
    int id;
};

#endif // INFECCAODEACESSO_LEITURA_H
