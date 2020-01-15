#include "infeccaodeacesso.h"
#include "ui_infeccaodeacesso.h"
#include <QMessageBox>
#include <QJsonObject>

InfeccaoDeAcesso::InfeccaoDeAcesso(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InfeccaoDeAcesso)
{
    setWindowFlags(Qt::Window
                | Qt::WindowMinimizeButtonHint
                | Qt::WindowMaximizeButtonHint);
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
    this->id = id;

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
    bool outroTipo = ui->checkBox_outrasInfeccoes->isChecked();
    bool infeccaoUrinaria = ui->checkBox_infeccaoDeTratoUrinario->isChecked();
    bool infeccaoIntestinal  = ui->checkBox_infeccaoIntestinalOuFocoAbdominal->isChecked();
    bool infeccaoSitio = ui->checkBox_infeccaoDeSitioCirurgico->isChecked();
    QString infeccaoSitioL = ui->lineEdit_infeccaoDeSitioCirurgico->text();
    bool infeccaoPele = ui->checkBox_infeccaoDePele->isChecked();
    bool infestaocaoParasita = ui->checkBox_infestacaoParasitaria->isChecked();
    bool celuliteInfecciosa = ui->checkBox_celuliteInfecciosa->isChecked();
    QString outro = ui->lineEdit_outro->text();
    bool infeccaoAereaSup = ui->checkBox_infeccaoRespiratoriaDeViasAereaSuperiores->isChecked();
    QString infeccaoAereaSupL = ui->lineEdit_infeccaoRespiratoriaDeViasAereaSuperior->text();
    bool infeccaoAereaInf = ui->checkBox_infeccaoRespiratoriaDeViasAereaInferiores->isChecked();
    QString infeccaoAereaInfL = ui->lineEdit_infeccaoRespiratoriaDeViasAereaInferiores->text();
    bool outrasInfec = ui->checkBox_outrasInfeccoes->isChecked();
    QString especificar = ui->lineEdit_outrasInfeccoes->text();

    QJsonObject object {
        {"dataInfec",data},
        {"CDLInfec",CDL},
        {"permicathInfec",permicath},
        {"clpthp",clpthp},
        {"FAV2",FAV},
        {"PTFEInfec",PTFE},
        {"hiperama",hiperama},
        {"hiperamia1",hiperamia1},
        {"hiperamia2",hiperamia2},
        {"hiperamia3",hiperamia3},
        {"endurecimentotc",endurecimentotc},
        {"endurecimento1",endurecimento1},
        {"endurecimento2",endurecimento2},
        {"secrecaoPSIC",secrecaoPSIC},
        {"secrecao1",secrecao1},
        {"secrecao2",secrecao2},
        {"colecao",colecao},
        {"edemaLA",edemaLA},
        {"dorEmLocal",dorEmLocal},
        {"odor",odor},
        {"febreInfec",febre},
        {"calafrios",calafrios},
        {"mialdia",mialdia},
        {"outroSintoma",outroSintoma},
        {"hemocultura",hemocultura},
        {"swab",swab},
        {"pontaCateter",pontaCateter},
        {"outrosColhidos",outrosColhidos},
        {"outrosColhidos2",outrosColhidos2},
        {"lookterapia",lookterapia},
        {"antibiotico",antibiotico},
        {"tempoantibiotico",tempoantibiotico},
        {"mulpirocinaT",mulpirocinaT},
        {"tempomMulpirocina",tempomMulpirocina},
        {"vancominicina",vancominicina},
        {"tempovancominicina",tempovancominicina},
        {"gentamicina",gentamicina},
        {"tempoGentamicina",tempoGentamicina},
        {"meropenem",meropenem},
        {"tempoMeropenem",tempoMeropenem},
        {"cefepine",cefepine},
        {"tempoCefepine",tempoCefepine},
        {"pirecilina",pirecilina},
        {"tempoPirecilina",tempoPirecilina},
        {"polimixina",polimixina},
        {"tempoPolimixina",tempoPolimixina},
        {"anfotericina",anfotericina},
        {"tempoAnfotericina",tempoAnfotericina},
        {"cefazolina",cefazolina},
        {"tempoCefazolina",tempoCefazolina},
        {"teicoplanina",teicoplanina},
        {"tempoTeicoplanina",tempoTeicoplanina},
        {"oxacilina",oxacilina},
        {"tempoOxacilina",tempoOxacilina},
        {"daptomicina",daptomicina},
        {"tempoDaptomicina",tempoDaptomicina},
        {"ciprofloxacino",ciprofloxacino},
        {"tempoCiproflo",tempoCiproflo},
        {"levofloxacino",levofloxacino},
        {"tempoLevofla",tempoLevofla},
        {"amoxilina",amoxilina},
        {"tempoAmoxilina",tempoAmoxilina},
        {"cefalexina",cefalexina},
        {"tempoCefalexina",tempoCefalexina},
        {"outrosAcesso",outros},
        {"outrosAcesso2",outros2},
        {"tempoOutros",tempoOutros},
        {"hemoculturaP",hemoculturaP},
        {"pontadeCP",pontadeCP},
        {"swabPositivo",swabPositivo},
        {"micro1",micro1},
        {"micro2",micro2},
        {"micro3",micro3},
        {"micro4",micro4},
        {"micro5",micro5},
        {"sensivel1",sensivel1},
        {"sensivel2",sensivel2},
        {"sensivel3",sensivel3},
        {"sensivel4",sensivel5},
        {"resistente1",resistente1},
        {"resistente2",resistente2},
        {"resistente3",resistente3},
        {"resistente4",resistente4},
        {"resistente5",resistente5},
        {"outroTipo",outroTipo},
        {"infeccaoUrinaria",infeccaoUrinaria},
        {"infeccaoIntestinal",infeccaoIntestinal},
        {"infeccaoSitio",infeccaoSitio},
        {"infeccaoSitioL",infeccaoSitioL},
        {"infeccaoPele",infeccaoPele},
        {"celuliteInfecciosa",celuliteInfecciosa},
        {"outroInfec",outro},
        {"infeccaoAereaSup",infeccaoAereaSup},
        {"infeccaoAereaSupL",infeccaoAereaSupL},
        {"infeccaoAereaInf",infeccaoAereaInf},
        {"infeccaoAereaInfL",infeccaoAereaInfL},
        {"outrasInfec",outrasInfec},
        {"especificar",especificar}
    };

    req Req;
    QJsonDocument id2 = Req.get("countConsultas");
    int a = id2[0]["count(`id`)"].toInt();
    QString s = QString::number(a);
    Req.put(object,"updateConsultas/"+s);
    Req.put(object,"updateRecente/"+QString::number(id));
    hide();
    qDebug()<<"id: "<<id;

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
