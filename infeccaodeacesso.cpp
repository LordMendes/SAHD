#include "infeccaodeacesso.h"
#include "ui_infeccaodeacesso.h"
#include <QMessageBox>
#include <QJsonObject>

InfeccaoDeAcesso::InfeccaoDeAcesso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfeccaoDeAcesso)
{
    ui->setupUi(this);
    ui->checkBox_celuliteInfecciosa->setEnabled(false);
    ui->checkBox_infestacaoParasitaria->setEnabled(false);
    ui->lineEdit_outro->setEnabled(false);
    ui->lineEdit_infeccaoDeSitioCirurgico->setEnabled(false);
    ui->lineEdit_infeccaoRespiratoriaDeViasAereaSuperior->setEnabled(false);
    ui->lineEdit_infeccaoRespiratoriaDeViasAereaInferiores->setEnabled(false);
    ui->lineEdit_outrasInfeccoes->setEnabled(false);
    ui->lineEdit_resistente1->hide();
    ui->lineEdit_resistente2->hide();
    ui->lineEdit_resistente3->hide();
    ui->lineEdit_resistente4->hide();
    ui->lineEdit_resistente5->hide();
    ui->lineEdit_sensivel1->hide();
    ui->lineEdit_sensivel2->hide();
    ui->lineEdit_sensivel3->hide();
    ui->lineEdit_sensivel4->hide();
    ui->lineEdit_sensivel5->hide();


}

InfeccaoDeAcesso::~InfeccaoDeAcesso()
{
    delete ui;
}


void InfeccaoDeAcesso::on_pushButton_Cancelar_clicked()
{
    QMessageBox::StandardButton saida = QMessageBox::information(this, "Cancelar", "Todos os dados serão perdidos, deseja sair mesmo assim?", QMessageBox::Yes | QMessageBox::No);
    if(saida == QMessageBox::Yes){
        hide();
    }
}

void InfeccaoDeAcesso::on_checkBox_infeccaoDePele_stateChanged(int arg1)
{
    if(ui->checkBox_infeccaoDePele->isChecked()){
        ui->checkBox_celuliteInfecciosa->setEnabled(true);
        ui->checkBox_infestacaoParasitaria->setEnabled(true);
        ui->lineEdit_outro->setEnabled(true);
    }else{
        ui->checkBox_celuliteInfecciosa->setEnabled(false);
        ui->checkBox_infestacaoParasitaria->setEnabled(false);
        ui->lineEdit_outro->setEnabled(false);
    }
}

void InfeccaoDeAcesso::on_checkBox_infeccaoDeSitioCirurgico_stateChanged(int arg1)
{
    if(ui->checkBox_infeccaoDeSitioCirurgico->isChecked()){
        ui->lineEdit_infeccaoDeSitioCirurgico->setEnabled(true);
    }else{
        ui->lineEdit_infeccaoDeSitioCirurgico->setEnabled(false);
    }
}

void InfeccaoDeAcesso::on_checkBox_infeccaoRespiratoriaDeViasAereaSuperiores_stateChanged(int arg1)
{
    if(ui->checkBox_infeccaoRespiratoriaDeViasAereaSuperiores->isChecked()){
        ui->lineEdit_infeccaoRespiratoriaDeViasAereaSuperior->setEnabled(true);
    }else{
        ui->lineEdit_infeccaoRespiratoriaDeViasAereaSuperior->setEnabled(false);
    }
}

void InfeccaoDeAcesso::on_checkBox_infeccaoRespiratoriaDeViasAereaInferiores_stateChanged(int arg1)
{
    if(ui->checkBox_infeccaoRespiratoriaDeViasAereaInferiores->isChecked()){
        ui->lineEdit_infeccaoRespiratoriaDeViasAereaInferiores->setEnabled(true);
    }else{
        ui->lineEdit_infeccaoRespiratoriaDeViasAereaInferiores->setEnabled(false);
    }
}

void InfeccaoDeAcesso::on_checkBox_outrasInfeccoes_stateChanged(int arg1)
{
    if(ui->checkBox_outrasInfeccoes->isChecked()){
        ui->lineEdit_outrasInfeccoes->setEnabled(true);
    }else{
        ui->lineEdit_outrasInfeccoes->setEnabled(false);
    }
}


void InfeccaoDeAcesso::on_checkBox_hemoculturaSAOR_stateChanged(int arg1)
{

}

void InfeccaoDeAcesso::on_pushButton_cancelar_clicked()
{

    QString data = ui->dateEdit_infeccaoDeAcesso->date().toString();
    bool CDL = ui->checkBox_CDL->isChecked();
    bool permicath = ui->checkBox_Permicath->isChecked();
    bool clpthp = ui->checkBox_transHepatico->isChecked();
    bool FAV = ui->checkBox_FAV->isChecked();
    bool PTFE = ui->checkBox_PTFE->isChecked();
    bool hiperama = ui->groupBox_HiperamiaNoStioDeInsercaoDeCAteter->isChecked();
    bool hiperamia1 = ui->checkBox_HiperamiaEmTunelDeCateter->isChecked();
    bool hiperamia2 = ui->checkBox_hiperamiaEmFAV->isChecked();
    bool hiperamia3 = ui->checkBox_hiperamiaEmPTFE->isChecked();
    bool endurecimentotc = ui->groupBox_endurecimentoEmTornoDoCateter->isChecked();
    bool endurecimento1 = ui->checkBox_endurecimentoEmFAV->isChecked();
    bool endurecimento2 = ui->checkBox_endurecimentoEmPTFE->isChecked();
    bool secrecaoPSIC = ui->groupBox_secrecao->isChecked();
    bool secrecao1 = ui->checkBox_secrecaoFAV->isChecked();
    bool secrecao2 = ui->checkBox_secrecaoPTFE->isChecked();
    bool colecao = ui->checkBox_colecaoDeSecrecao->isChecked();
    bool edemaLA = ui->checkBox_edemaEmLocalDeAcesso->isChecked();
    bool dorEmLocal = ui->checkBox_dorEmLocalDeAcesso->isChecked();
    bool odor = ui->checkBox_odorFetido->isChecked();
    bool febre = ui->checkBox_febre->isChecked();
    bool calafrios = ui->checkBox_calafrios->isChecked();
    bool mialdia = ui->checkBox_mialgia->isChecked();
    QString outroSintoma = ui->lineEdit_outrosSinais->text();
    bool hemocultura = ui->checkBox_hemocultura->isChecked();
    bool swab = ui->checkBox_swab->isChecked();
    bool pontaCateter = ui->checkBox_pontaDeCateter->isChecked();
    bool outrosColhidos = ui->checkBox_outrosExames_2->isChecked();
    QString outrosColhidos2 = ui->lineEdit_outrosExames->text();
    bool lookterapia = ui->checkBox_lookterapia->isChecked();
    QString antibiotico = ui->lineEdit_antibiotico->text();
    QString tempoantibiotico = ui->spinBox_TUlookterapia4->text();
    bool mulpirocinaT = ui->checkBox_MupirocinaTopica->isChecked();
    QString tempomMulpirocina = ui->spinBox_MupirocinaTopica->text();
    bool vancominicina = ui->checkBox_vancomicina->isChecked();
    QString tempovancominicina = ui->spinBox_vancomicina->text();
    bool gentamicina = ui->checkBox_gentamicina->isChecked();
    QString tempoGentamicina = ui->spinBox_gentamicina->text();
    bool meropenem = ui->checkBox_meropenem->isChecked();
    QString tempoMeropenem = ui->spinBox_meropenem->text();
    bool cefepine = ui->checkBox_cefepime->isChecked();
    QString tempoCefepine = ui->spinBox_cefepime->text();
    bool pirecilina = ui->checkBox_pieperacilinaTazobactam->isChecked();
    QString tempoPirecilina = ui->spinBox_pieperacilinaTazobactam->text();
    bool polimixina = ui->checkBox_polimixinaB->isChecked();
    QString tempoPolimixina = ui->spinBox_polimixinaB->text();
    bool anfotericina = ui->checkBox_anfotericinaB->isChecked();
    QString tempoAnfotericina = ui->spinBox_anfotericinaB->text();
    bool cefazolina = ui->checkBox_cefazolina->isChecked();
    QString tempoCefazolina = ui->spinBox_cefazolina->text();
    bool teicoplanina = ui->checkBox_teicoplanina->isChecked();
    QString tempoTeicoplanina = ui->spinBox_teicoplanina->text();
    bool oxacilina = ui->checkBox_oxacilina->isChecked();
    QString tempoOxacilina = ui->spinBox_oxacilina->text();
    bool daptomicina = ui->checkBox_daptomicina->isChecked();
    QString tempoDaptomicina = ui->spinBox_daptomicina->text();
    bool ciprofloxacino = ui->checkBox_ciprofloxacino->isChecked();
    QString tempoCiproflo = ui->spinBox_ciprofloxacino->text();
    bool levofloxacino =ui->checkBox_levofloxacino->isChecked();
    QString tempoLevofla = ui->spinBox_levofloxacino->text();
    bool amoxilina = ui->checkBox_amoxilinaClavunlato->isChecked();
    QString tempoAmoxilina = ui->spinBox_amoxilinaClavunlato->text();
    bool cefalexina = ui->checkBox_cefalexina->isChecked();
    QString tempoCefalexina = ui->spinBox_cefalexina->text();
    bool outros = ui->checkBox_outrosAntibioticos->isChecked();
    QString outros2 = ui->lineEdit_outro->text();
    QString tempoOutros =ui->spinBox_outrosAntibioticos->text();
    bool hemoculturaP = ui->checkBox_hemocultura->isChecked();
    bool pontadeCP = ui->checkBox_pontaDeCateterPositiva->isChecked();
    bool swabPositivo = ui->groupBox_op7->isChecked();
    QString micro1 = ui->comboBox_5->currentText();
    QString micro2 = ui->comboBox_6->currentText();
    QString micro3 = ui->comboBox_7->currentText();
    QString micro4 = ui->comboBox_8->currentText();
    QString micro5 = ui->comboBox_9->currentText();
    QString sensivel1 = ui->lineEdit_sensivel1->text();
    QString sensivel2 = ui->lineEdit_sensivel2->text();
    QString sensivel3 = ui->lineEdit_sensivel3->text();
    QString sensivel4 = ui->lineEdit_sensivel4->text();
    QString sensivel5 = ui->lineEdit_sensivel5->text();
    QString resistente1 = ui->lineEdit_resistente1->text();
    QString resistente2 = ui->lineEdit_resistente2->text();
    QString resistente3 = ui->lineEdit_resistente3->text();
    QString resistente4 = ui->lineEdit_resistente4->text();
    QString resistente5 = ui->lineEdit_resistente5->text();


}

void InfeccaoDeAcesso::on_comboBox_5_activated(const QString &arg1)
{
    if(ui->comboBox_5->currentText()=="outro"){
        ui->lineEdit_sensivel1->show();
        ui->lineEdit_resistente1->show();
    }
}

void InfeccaoDeAcesso::on_comboBox_6_activated(const QString &arg1)
{
    if(ui->comboBox_6->currentText()=="outro"){
        ui->lineEdit_sensivel2->show();
        ui->lineEdit_resistente2->show();
    }
}

void InfeccaoDeAcesso::on_comboBox_7_activated(const QString &arg1)
{
    if(ui->comboBox_7->currentText()=="outro"){
        ui->lineEdit_sensivel3->show();
        ui->lineEdit_resistente3->show();
    }
}

void InfeccaoDeAcesso::on_comboBox_8_activated(const QString &arg1)
{
    if(ui->comboBox_8->currentText()=="outro"){
        ui->lineEdit_sensivel4->show();
        ui->lineEdit_resistente4->show();
    }
}

void InfeccaoDeAcesso::on_comboBox_9_activated(const QString &arg1)
{
    if(ui->comboBox_8->currentText()=="outro"){
        ui->lineEdit_sensivel5->show();
        ui->lineEdit_resistente5->show();
    }
}
