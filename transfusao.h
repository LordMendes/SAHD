#ifndef TRANSFUSAO_H
#define TRANSFUSAO_H

#include <QDialog>

namespace Ui {
class transfusao;
}

class transfusao : public QDialog
{
    Q_OBJECT

public:
    explicit transfusao(QWidget *parent = 0);
    ~transfusao();

private slots:
    void on_pushButton_Cancelar_clicked();

private:
    Ui::transfusao *ui;
};

#endif // TRANSFUSAO_H
