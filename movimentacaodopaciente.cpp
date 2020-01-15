#include "movimentacaodopaciente.h"
#include "ui_movimentacaodopaciente.h"
#include <QMessageBox>
#include "req.h"
#include <QJsonObject>

MovimentacaoDoPaciente::MovimentacaoDoPaciente(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MovimentacaoDoPaciente)
{
    setWindowFlags(Qt::Window
                | Qt::WindowMinimizeButtonHint
                | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
    this->id = id;
    ui->lineEdit_Outros->hide();

}

MovimentacaoDoPaciente::~MovimentacaoDoPaciente()
{
    delete ui;

}

void MovimentacaoDoPaciente::on_pushButton_cancelar_clicked()
{
    QMessageBox::StandardButton saida = QMessageBox::information(this, "Cancelar", "Todos os dados serão perdidos, deseja sair mesmo assim?", QMessageBox::Yes | QMessageBox::No);
    if(saida == QMessageBox::Yes){
        hide();
    }
}

void MovimentacaoDoPaciente::on_comboBox_situacao_activated(const QString &arg1)
{

    if(ui->comboBox_situacao->currentText() == "Outros"){
        ui->lineEdit_Outros->show();
    }else{
        ui->lineEdit_Outros->hide();
    }
}

void MovimentacaoDoPaciente::on_pushButton_confirmar_clicked()
{
    req Req;

    QString dataMovi = ui->dateEdit->date().toString();
    QString situacaoMovi = ui->comboBox_situacao->currentText();

    QJsonObject object{
        {"dataMovi", dataMovi},
        {"situacaoMovi", situacaoMovi}
    };

    QJsonDocument id2 = Req.get("countConsultas");
    int a = id2[0]["count(`id`)"].toInt();
    QString s = QString::number(a);
    Req.put(object,"updateConsultas/"+s);
    Req.put(object,"updateRecente/"+QString::number(id));
    hide();

}
