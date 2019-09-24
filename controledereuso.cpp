#include "controledereuso.h"
#include "ui_controledereuso.h"
#include <QMessageBox>
#include <QJsonObject>


ControleDeReuso::ControleDeReuso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ControleDeReuso)
{
    setWindowFlags(Qt::Window
                | Qt::WindowMinimizeButtonHint
                | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);    

}

ControleDeReuso::~ControleDeReuso()
{
    delete ui;
}

void ControleDeReuso::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton saida = QMessageBox::information(this, "Cancelar", "Todos os dados serão perdidos, deseja sair mesmo assim?", QMessageBox::Yes | QMessageBox::No);
    if(saida == QMessageBox::Yes){
        hide();
    }
}

void ControleDeReuso::on_pushButton_confirmar_clicked()
{

    QString registro = ui->lineEdit_Registro->text();
    QString data = ui->dateEdit_data->date().toString();
    int nreuso = ui->spinBox_NDoReuso->value();
    QString capilar = ui->lineEdit_primingDoCapilar->text();
    QString setArterial = ui->lineEdit_setArterial->text();
    QString setVenoso = ui->lineEdit_setVenoso->text();
    QString motivo = ui->lineEdit_motivoDoDescarte->text();

    QJsonObject object{
        {"data", data},
        {"nreuso", nreuso},
        {"capilar", capilar},
        {"setArterial",setArterial},
        {"setVenoso",setVenoso},
        {"motivo", motivo}
    };

    req Req;
    Req.post(object,"");


}
