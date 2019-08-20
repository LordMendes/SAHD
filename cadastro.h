#ifndef CADASTRO_H
#define CADASTRO_H


#include <QDialog>
#include <QMainWindow>
#include "req.h"

namespace Ui {
class Cadastro;
}

class Cadastro : public QDialog
{
    Q_OBJECT

public:
    explicit Cadastro(QWidget *parent = 0);
    ~Cadastro();

private slots:
    void on_BotaoCancelarCadastro_clicked();
    void on_BotaoConfirmarCadastro_clicked();
   // void on_checkBox_insuficienciaRenalAguda_stateChanged(int arg1);

private:
    Ui::Cadastro *ui;
};

#endif // CADASTRO_H
