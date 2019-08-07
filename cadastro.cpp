#include "cadastro.h"
#include "ui_cadastro.h"
#include <QMessageBox>
#include "hemocontrol.h"
#include <QMessageBox>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonDocument>
#include <iostream>
#include <QDebug>
#include <QObject>
#include <string>

using namespace std;

Cadastro::Cadastro(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Cadastro)
{
    ui->setupUi(this);

}

Cadastro::~Cadastro()
{
    delete ui;

}

void Cadastro::on_BotaoCancelarCadastro_clicked()
{
    QMessageBox::StandardButton saida = QMessageBox::information(this, "Cancelar Cadastro", "Todos os dados serão perdidos, deseja sair mesmo assim?", QMessageBox::Yes | QMessageBox::No);
    if(saida == QMessageBox::Yes){
        hide();
    }
}

void Cadastro::on_BotaoConfirmarCadastro_clicked()
{

    //dados cadastrais
    QString nome = ui->lineNome->text();
    QString dataN = ui->lineNascimento->date().toString();
    QString cpf = ui->lineCPF->text();
    QString rg = ui->lineRG->text();
    QString regHospitalar = ui->lineRegistroHospitalar->text();
    QString cns = ui->lineCNS->text();
    QString procedencia = ui->lineProcedencia->text();
    QString naturalidade = ui->lineNaturalidade->text();
    QString cor = ui->comboBox->currentText();
    QString endereco = ui->lineEndereco->text();
    QString nomeMae = ui->lineNomeMae->text();
    QString responsavel = ui->lineResponsavelLegal->text();
    QString telefone = ui->lineTelefoneFixo->text();
    QString celular = ui->lineCelular->text();
    QString email = ui->lineEmail->text();
    QString cncdo = ui->lineCNCDO->text();
    QString historia = ui->txtHistorico->toPlainText();
    //doença renal cronica
    bool doencaRCbool = ui->checkBox_doencaRenalCronica->isChecked();
    QString doencaRC = ui->line_doencaRenalCronica->text();
    //doença de base
    bool nefroesclerose = ui->checkBox_nefroescleroseHipertensiva->isChecked();
    bool nefropatia = ui->checkBox_nefropatiaDiabetica->isChecked();
    bool glomerulopatias = ui->checkBox_glomerulopatias->isChecked();
    bool lupus = ui->checkBox_lupusEritemasoSistemico->isChecked();
    bool doencaUrulogica = ui->checkBox_doencaUrologica->isChecked();
    bool doencaCronica = ui->checkBox_doencaCronicaDoEnxerto->isChecked();
    bool cardiorrenal = ui->checkBox_cardiorrenal->isChecked();
    bool hepatorrenal = ui->checkBox_hepatorrenal->isChecked();
    bool sindrome = ui->checkBox_sindromeNefrotica->isChecked();
    bool doencaPolocistica = ui->checkBox_doencaPolicistica->isChecked();
    bool causas = ui->checkBox_mieloma->isChecked();
    bool malFormacao = ui->checkBox_malFormacaoCongenita->isChecked();
    bool naoSeAplica = ui->checkBox_naoSeAplica->isChecked();
    bool insuficienciaRA = ui->checkBox_insuficienciaRenalAguda->isChecked();
    QString dataIRA = ui->dateEdit_insuficienciaRenalAguda->date().toString();
    //grupo sanguineo
    QString grupoSanguinio = ui->comboBox_GrupoSanguineo->currentText();
    QString fator = ui->comboBox_FatorRh->currentText();
    //alergias
    bool CBmedicamento = ui->checkBox_medicamentos->isChecked();
    QString medicamentos = ui->lineEdit_medicamentos->text();
    bool microporo = ui->checkBox_curativos_micropore->isChecked();
    bool transpore = ui->checkBox_curativos_transpore->isChecked();
    bool filme = ui->checkBox_curativos_filmeTransparente->isChecked();
    bool CBoutro = ui->checkBox_curativos_outro->isChecked();
    QString outro = ui->lineEdit_curativos_outro->text();
    bool concentradoHemacias = ui->checkBox_hemocomponentes_concentradoDeHemacias->isChecked();
    bool plasma = ui->checkBox_hemocomponentes_plasma->isChecked();
    bool concentradoPlaquetas = ui->checkBox_hemocomponentes_concentradoDePlaquetas->isChecked();

    //CRIANDO O OBJETO JSON
    QJsonObject object
    {
        {"nome", nome},
        {"data", dataN},
        {"cpf", cpf},
        {"rg", rg},
        {"cns", cns},
        {"procedencia", procedencia},
        {"naturalidade", naturalidade},
        {"cor", cor},
        {"endereco", endereco},
        {"nomeMae", nomeMae},
        {"responsavel", responsavel},
        {"telefone", telefone},
        {"celular", celular},
        {"email", email},
        {"cncdo", cncdo},
        {"doencaRCbool", doencaRCbool},
        {"doencaRC", doencaRC},
        {"nefroesclerose", nefroesclerose},
        {"nefropatia", nefropatia},
        {"glomerulopatias", glomerulopatias},
        {"lupus", lupus},
        {"doencaUrulogica", doencaUrulogica},
        {"doencaCronica", doencaCronica},
        {"cardiorrenal", cardiorrenal},
        {"hepatorrenal", hepatorrenal},
        {"sindrome", sindrome},
        {"doencaPolocistica", doencaPolocistica},
        {"causas", causas},
        {"malFormacao", malFormacao},
        {"naoSeAplica", naoSeAplica},
        {"insuficienciaRA", insuficienciaRA},
        {"dataIRA", dataIRA},
        {"grupoSanguinio", grupoSanguinio},
        {"fator", fator},
        {"CBmedicamento", CBmedicamento},
        {"medicamentos", medicamentos},
        {"microporo", microporo},
        {"transpore", transpore},
        {"filme", filme},
        {"CBoutro", CBoutro},
        {"outro", outro},
        {"concentradoHemacias", concentradoHemacias},
        {"plasma", plasma},
        {"concentradoPlaquetas", concentradoPlaquetas}

    };


    QNetworkAccessManager man;
    QNetworkRequest req(QUrl("https://mighty-fortress-83537.herokuapp.com/createUser"));
    req.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    QJsonObject json;
    QNetworkReply *reply = man.post(req, QJsonDocument(object).toJson());
    while (!reply->isFinished())
    {
        qApp->processEvents();
    }

    QByteArray response_data = reply->readAll();

    QJsonDocument jsonDoc = QJsonDocument::fromJson(response_data);
    json = jsonDoc.object();

    qDebug() <<json.keys();

    reply->deleteLater();
    if(!reply->error()){
            hide();
    }




}


/*oid Cadastro::on_checkBox_insuficienciaRenalAguda_stateChanged(int arg1)
{
    if(ui->checkBox_doencaRenalCronica->isChecked()){
        QMessageBox::information(this,"Duplicidade","Essa opção não pode ser marcada caso 'Doença Renal Crônica' esteja marcada");
        ui->checkBox_insuficienciaRenalAguda->setChecked(false);
    }else{
        ui->checkBox_insuficienciaRenalAguda->setChecked(true);
    }

}*/

