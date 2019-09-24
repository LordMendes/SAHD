#include "dadosdehemodialise.h"
#include "ui_dadosdehemodialise.h"
#include <QMessageBox>

DadosDeHemodialise::DadosDeHemodialise(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DadosDeHemodialise)
{
    setWindowFlags(Qt::Window
                | Qt::WindowMinimizeButtonHint
                | Qt::WindowMaximizeButtonHint);
    ui->setupUi(this);
}

DadosDeHemodialise::~DadosDeHemodialise()
{
    delete ui;
}

void DadosDeHemodialise::on_pushButton_Cancelar_clicked()
{
    QMessageBox::StandardButton saida = QMessageBox::information(this, "Cancelar", "Todos os dados serão perdidos, deseja sair mesmo assim?", QMessageBox::Yes | QMessageBox::No);
    if(saida == QMessageBox::Yes){
        hide();
    }
}

void DadosDeHemodialise::on_pushButton_Confirmar_clicked()
{
    QString nome = ui->lineEdit_nome->text();
    QString pesoSeco = ui->lineEdit_pesoSeco->text();
    QString dialise = ui->lineEdit_dialiseDeNumero->text();
    QString data = ui->dateEdit_data->date().toString();
    bool segquasex = ui->checkBox_segquarsex->isChecked();
    bool terquisab = ui->checkBox_terquinsab->isChecked();
    QString tempo = ui->lineEdit_tempoDeHemodialise->text();
    QString ultrafiltracao = ui->lineEdit_ultrafiltracao->text();
    QString dosagem = ui->lineEdit_heparinaNaoFracioanada->text();
    bool fx60 = ui->checkBox_FX60->isChecked();
    bool fx80 = ui->checkBox_FX80->isChecked();
    bool fx100 = ui->checkBox_FX100->isChecked();
    bool cdl = ui->checkBox_CDL->isChecked();
    bool permicath = ui->checkBox_Permicath->isChecked();
    bool permicathTHP = ui->checkBox_permicathTransHepaticoPercutaneo->isChecked();
    bool FAV = ui->checkBox_FAV->isChecked();
    bool PTFE = ui->checkBox_PTFE->isChecked();
    QString fluxoBomba = ui->lineEdit_fluxoDeBombaDeSangue->text();
    QString fluxoDialisante = ui->lineEdit_fluxoDoDialisante->text();
    QString temperatura = ui->lineEdit_temperatura->text();
    QString desligarApos = ui->timeEdit_desligarOBanho->text();
    QString sodio = ui->lineEdit_sodio->text();
    QString bicarbonato = ui->lineEdit_bicarbonado->text();
    QString calcio = ui->lineEdit_solucaoComCalcio->text();
    QString potassio = ui->lineEdit_solucaoComPotassio->text();
    QString KCL = ui->spinBox_cloretoDePotassio->text();
    QString NaCl = ui->lineEdit_SoroFisiologico_mL->text();
    QString NaClmin = ui->lineEdit_soroFisiologico_minutos->text();
    bool addVolume = ui->checkBox_volumeDeSoro_sim->isChecked();
    bool priming = ui->checkBox_primming_sim->isChecked();
    QString Orientacoes = ui->textEdit_orientacoes->toPlainText();
    QString preHemoHora = ui->timeEdit_PreHemo->text();
    QString preHemoPA = ui->lineEdit_PreHemo_PA->text();
    QString preHemoFC = ui->lineEdit_PreHemo_FC->text();
    QString preHemoTax = ui->lineEdit_PreHemo_TAX->text();
    QString preHemoOutros = ui->lineEdit_PreHemo_Outros->text();
    QString hora1Hora = ui->timeEdit_1Hora->text();
    QString hora1PA = ui->lineEdit_1Hora_PA->text();
    QString hora1FC = ui->lineEdit_1Hora_FC->text();
    QString hora1Tax = ui->lineEdit_1Hora_TAX->text();
    QString hora1Outros = ui->lineEdit_1Hora_Outros->text();
    QString hora2Hora = ui->timeEdit_2Hora->text();
    QString hora2PA = ui->lineEdit_2Hora_PA->text();
    QString hora2FC = ui->lineEdit_2Hora_FC->text();
    QString hora2Tax = ui->lineEdit_2Hora_TAX->text();
    QString hora2Outros = ui->lineEdit_2Hora_Outros->text();
    QString hora3Hora = ui->timeEdit_3Hora->text();
    QString hora3PA = ui->lineEdit_3Hora_PA->text();
    QString hora3FC = ui->lineEdit_3Hora_FC->text();
    QString hora3Tax = ui->lineEdit_3Hora_TAX->text();
    QString hora3Outos = ui->lineEdit_3Hora_Outros->text();
    QString hora4Hora = ui->timeEdit_4Hora->text();
    QString hora4PA = ui->lineEdit_4Hora_PA->text();
    QString hora4FC = ui->lineEdit_4Hora_FC->text();
    QString hora4Tax = ui->lineEdit_4Hora_TAX->text();
    QString hora4Outros = ui->lineEdit_4Hora_Outros->text();
    QString posHemoHora = ui->timeEdit_PosHemo->text();
    QString posHemoPA = ui->lineEdit_PosHemo_PA->text();
    QString posHemoFC = ui->lineEdit_PosHemo_FC->text();
    QString posHemoTax = ui->lineEdit_PosHemo_TAX->text();
    QString posHemoOutros = ui->lineEdit_PosHemo_Outros->text();
    bool cefaleia = ui->checkBox_cefaleia->isChecked();
    bool hipotensao = ui->checkBox_hipotensao->isChecked();
    bool hipertensao = ui->checkBox_hipertensao->isChecked();
    bool nauseas = ui->checkBox_nauseas->isChecked();
    bool convulsoes = ui->checkBox_nauseas->isChecked();
    bool hipoglicemia = ui->checkBox_hipoglicemia->isChecked();
    bool hiperglicemia = ui->checkBox_hipoglicemia_2->isChecked();
    bool febre = ui->checkBox_febre->isChecked();
    bool caimbra = ui->checkBox_caimbra->isChecked();
    bool dipneia = ui->checkBox_dipneia->isChecked();
    bool agitacao = ui->checkBox_agitacao->isChecked();
    bool prurido = ui->checkBox_prurido->isChecked();
    bool arritmias = ui->checkBox_arristimias->isChecked();
    bool fraqueza = ui->checkBox_FraquezaMusc->isChecked();
    bool convulsao = ui->checkBox_convulsao->isChecked();
    bool dorToracica = ui->checkBox_dorToracica->isChecked();
    bool dorLombar = ui->checkBox_dorLombar->isChecked();
    QString descricao = ui->lineEdit_PresMed_descricao->text();
    QString dose = ui->lineEdit_PresMed_dose->text();
    QString via = ui->lineEdit_PresMed_via->text();
    QString intervalo = ui->lineEdit_PresMed_intervalo->text();
    QString checagem = ui->lineEdit_PresMed_checagem->text();
    QString obs = ui->lineEdit_PresMed_obs->text();

    QJsonObject object {

        {"NaCl",NaCl},
        {"NaClmin",NaClmin},
        {"addVolume",addVolume},
        {"priming",priming},
        {"Orientacoes",Orientacoes},
        {"preHemoHora",preHemoHora},
        {"preHemoPA",preHemoPA},
        {"preHemoFC",preHemoFC},
        {"preHemoTax",preHemoTax},
        {"preHemoOutros",preHemoOutros},
        {"hora1Hora",hora1Hora},
        {"hora1PA",hora1PA},
        {"hora1FC",hora1FC},
        {"hora1Tax",hora1Tax},
        {"hora1Outros",hora1Outros},
        {"hora2Hora",hora2Hora},
        {"hora2PA",hora2PA},
        {"hora2FC",hora2FC},
        {"hora2Tax",hora2Tax},
        {"hora2Outros",hora2Outros},
        {"hora3Hora",hora3Hora},
        {"hora3PA",hora3PA},
        {"hora3FC",hora3FC},
        {"hora3Tax",hora3Tax},
        {"hora3Outos",hora3Outos},
        {"hora4Hora",hora4Hora},
        {"hora4PA",hora4PA},
        {"hora4FC",hora4FC},
        {"hora4Tax",hora4Tax},
        {"hora4Outros",hora4Outros},
        {"posHemoHora",posHemoHora},
        {"posHemoPA",posHemoPA},
        {"posHemoFC",posHemoFC},
        {"posHemoTax",posHemoTax},
        {"posHemoOutros",posHemoOutros},
        {"cefaleia",cefaleia},
        {"hipotensao",hipotensao},
        {"hipertensao",hipertensao},
        {"nauseas",nauseas},
        {"convulsoes",convulsoes},
        {"hipoglicemia",hipoglicemia},
        {"hiperglicemia",hiperglicemia},
        {"febre",febre},
        {"caimbra",caimbra},
        {"dipneia",dipneia},
        {"agitacao",agitacao},
        {"prurido",prurido},
        {"arritmias",arritmias},
        {"fraqueza",fraqueza},
        {"convulsao",convulsao},
        {"dorToracica",dorToracica},
        {"dorLombar",dorLombar},
        {"descricao",descricao},
        {"dose",dose},
        {"via",via},
        {"intervalo",intervalo},
        {"checagem",checagem},
        {"obs",obs}
    };

    req Req;
    Req.post(object,"");

}
