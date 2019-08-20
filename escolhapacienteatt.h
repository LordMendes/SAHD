#ifndef ESCOLHAPACIENTEATT_H
#define ESCOLHAPACIENTEATT_H

#include <QDialog>
#include "req.h"


namespace Ui {
class EscolhaPacienteAtt;
}

class EscolhaPacienteAtt : public QDialog
{
    Q_OBJECT

public:
    explicit EscolhaPacienteAtt(QWidget *parent = 0);
    ~EscolhaPacienteAtt();

private slots:
    void on_pushButton_Avancar_clicked();

    void on_pushButton_voltar_clicked();

private:
    Ui::EscolhaPacienteAtt *ui;    

};

#endif // ESCOLHAPACIENTEATT_H
