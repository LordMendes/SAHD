#ifndef HOSPITALIZACAO_H
#define HOSPITALIZACAO_H

#include <QDialog>

namespace Ui {
class Hospitalizacao;
}

class Hospitalizacao : public QDialog
{
    Q_OBJECT

public:
    explicit Hospitalizacao(QWidget *parent = 0);
    ~Hospitalizacao();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Hospitalizacao *ui;
};

#endif // HOSPITALIZACAO_H
