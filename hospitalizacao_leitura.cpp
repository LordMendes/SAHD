#include "hospitalizacao_leitura.h"
#include "ui_hospitalizacao_leitura.h"
#include "req.h"

hospitalizacao_leitura::hospitalizacao_leitura(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::hospitalizacao_leitura)
{
    setWindowFlags(Qt::Window
        | Qt::WindowMinimizeButtonHint
        | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
    req Req;
    QJsonDocument obj = Req.get("recentes");

    ui->data->setText(obj[id]["dataHosp"].toString());
    ui->local->setText(obj[id]["local"].toString());
    ui->motivo->setText(obj[id]["motivoHosp"].toString());
    ui->data_alta->setText(obj[id]["dataAlta"].toString());
    ui->observacoes->setText(obj[id]["observacoes"].toString());


}

hospitalizacao_leitura::~hospitalizacao_leitura()
{
    delete ui;
}

void hospitalizacao_leitura::on_pushButton_voltar_clicked()
{
    hide();
}
