#include "cadastro_leitura.h"
#include "ui_cadastro_leitura.h"
#include "req.h"
cadastro_leitura::cadastro_leitura(int user,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cadastro_leitura)
{
    setWindowFlags(Qt::Window
                | Qt::WindowMinimizeButtonHint
                | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);

    req Req;
    QJsonDocument object = Req.get("orderedPacientes");


    ui->nome->setText((object[user]["nome"].toString()));
    ui->datanascimento->setText((object[user]["data"].toString()));
    ui->CPF->setText((object[user]["cpf"].toString()));
    ui->rg->setText((object[user]["rg"].toString()));
    ui->CNS->setText(object[user]["cns"].toString());
    ui->Procedencia->setText(object[user]["procedencia"].toString());
    ui->Naturalidade->setText(object[user]["naturalidade"].toString());
    ui->cor->setText(object[user]["cor"].toString());
    ui->endereco->setText(object[user]["endereco"].toString());
    ui->nomeMae->setText(object[user]["nomeMae"].toString());
    ui->responsavellegal->setText(object[user]["responsavel"].toString());
    ui->telefonefixo->setText(object[user]["telefone"].toString());
    ui->celular->setText(object[user]["celular"].toString());
    ui->email->setText(object[user]["email"].toString());
    ui->cadastronocncdo->setText(object[user]["cncdo"].toString());
    ui->historia->setText(object[user]["historia"].toString());
    ui->checkdoencarenai->setChecked(object[user]["doencaRCbool"].toInt());
    ui->doencarenalcronica->setText(object[user]["doencaRC"].toString());
    ui->nefroesclerose->setChecked(object[user]["nefroesclerose"].toInt());
    ui->nefropatiadiabetica->setChecked(object[user]["nefropatia"].toInt());
    ui->Glomerulopatias->setChecked(object[user]["glomerulopatias"].toInt());
    ui->lupuseritemasosistemico->setChecked(object[user]["lupus"].toInt());
    ui->doencaurologica->setChecked(object[user]["doencaUrulogica"].toInt());
    ui->doencarenalcronica->setText(object[user]["doencaCronica"].toString());
    ui->Cardiorenal->setChecked(object[user]["cardiorrenal"].toInt());
    ui->Hepatorrenal->setChecked(object[user]["hepatorrenal"].toInt());
    ui->sindromenefrotica->setChecked(object[user]["sindrome"].toInt());
    ui->doencapoliscistica->setChecked(object[user]["doencaPolocistica"].toInt());
    ui->causasobstrutivasmieloma->setChecked(object[user]["causas"].toInt());
    ui->malformacaocongenita->setChecked(object[user]["malFormacao"].toInt());
    ui->naoseaplica->setChecked(object[user]["naoSeAplica"].toInt());
    ui->checkinsufieciencia->setChecked(object[user]["insuficienciaRA"].toInt());
    ui->datainsuficienciarenalaguda->setText(object[user]["dataIRA"].toString());
    ui->grupoletra->setText(object[user]["grupoSanguinio"].toString());
    ui->grupopolo->setText(object[user]["fator"].toString());
    ui->checkmedicamento->setChecked(object[user]["CBmedicamento"].toInt());
    ui->medicamento->setText(object[user]["medicamentos"].toString());
    ui->Micropore->setChecked(object[user]["microporo"].toInt());
    ui->Transpore->setChecked(object[user]["transpore"].toInt());;
    ui->checkfilme->setChecked(object[user]["filme"].toInt());
    ui->checkoutro->setChecked(object[user]["CBoutro"].toInt());
    ui->outro->setText(object[user]["outro"].toString());
    ui->concentradodehemacias->setChecked(object[user]["concentradoHemacias"].toInt());
    ui->plasma->setChecked(object[user]["plasma"].toInt());
    ui->concentradodeplaquetas->setChecked(object[user]["concentradoPlaquetas"].toInt());


}

cadastro_leitura::~cadastro_leitura()
{
    delete ui;
}

void cadastro_leitura::on_pushButton_clicked()
{
    hide();
}
