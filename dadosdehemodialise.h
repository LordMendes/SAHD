#ifndef DADOSDEHEMODIALISE_H
#define DADOSDEHEMODIALISE_H

#include <QDialog>
#include "req.h"
#include <QJsonObject>

namespace Ui {
class DadosDeHemodialise;
}

class DadosDeHemodialise : public QDialog
{
    Q_OBJECT

public:
    explicit DadosDeHemodialise(int id, QWidget *parent = 0);
    ~DadosDeHemodialise();

private slots:
    void on_pushButton_Cancelar_clicked();

    void on_pushButton_Confirmar_clicked();

private:
    Ui::DadosDeHemodialise *ui;
    int id;
};

#endif // DADOSDEHEMODIALISE_H
