#include "acessoatual_leitura.h"
#include "ui_acessoatual_leitura.h"
#include "req.h"
acessoatual_leitura::acessoatual_leitura(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::acessoatual_leitura)
{
    setWindowFlags(Qt::Window
        | Qt::WindowMinimizeButtonHint
        | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
    this->id = id;
    req Req;
    QJsonDocument obj = Req.get("recentes");
    QJsonDocument counts = Req.get("countPacientes");
    int limit = counts[0]["count(`id`)"].toInt();
    int i;
    for(i=0 ; i < limit;i++){
        if(i==this->id)
            break;
    }
    i-=2;
    qDebug()<<"i: "<<i;
    ui->cateterduplolumen->setText(obj[i]["cateterDL"].toString());
    ui->cateterdelongapermanencia->setText(obj[i]["cateterDLP"].toString());
    ui->cateterdelongapermanenciatranshepatico->setText(obj[i]["cateterDLPTHP"].toString());
    ui->fistulaarteriovenosa->setText(obj[i]["fistula"].toString());
    ui->protese->setText(obj[i]["protese"].toString());
}

acessoatual_leitura::~acessoatual_leitura()
{
    delete ui;
}

void acessoatual_leitura::on_pushButton_clicked()
{
    hide();
}
