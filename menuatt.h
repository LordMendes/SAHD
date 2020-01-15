#ifndef MENUATT_H
#define MENUATT_H

#include <QDialog>
#include <escolhapacienteatt.h>
#include <dadosantropometricos.h>
#include "req.h"

namespace Ui {
class MenuAtt;
}

class MenuAtt : public QDialog
{
    Q_OBJECT

public:
    explicit MenuAtt(int id, QWidget *parent = 0);
    ~MenuAtt();

private slots:
    void on_pushButton_voltar_clicked();


    void on_pushButton_dadosAntropometricos_clicked();

    void on_pushButton_sorologia_clicked();

    void on_pushButton_movimentacaoPaciente_clicked();

    void on_pushButton_acessoAtual_clicked();

    void on_pushButton_InfeccaoDeAV_clicked();

    void on_pushButton_eventosAdversos_clicked();

    void on_pushButton_Hospitalizacao_clicked();

    void on_pushButton_transfusaoSanguinea_clicked();

    void on_pushButton_controleReusoDialisadores_clicked();

    void on_pushButton_exames_clicked();

    void on_pushButton_dadosClinicos_clicked();


private:
    Ui::MenuAtt *ui;
    int id;
};

#endif // MENUATT_H
