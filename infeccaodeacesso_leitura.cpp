#include "infeccaodeacesso_leitura.h"
#include "ui_infeccaodeacesso_leitura.h"
#include "req.h"

infeccaodeacesso_leitura::infeccaodeacesso_leitura(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::infeccaodeacesso_leitura)
{
    ui->setupUi(this);
    req Req;
    QJsonDocument obj =  Req.get("recentes");
    qDebug()<<"CDLInfec:"<<(bool)obj[id]["CDLInfec"].toInt();
    qDebug()<<"ID: "<<id;
    ui->data->setText(obj[id]["dataInfec"].toString());
    ui->checkBox_CDL->setChecked((bool)obj[id]["CDLInfec"].toInt());
    ui->checkBox_Permicath->setChecked((bool)obj[id]["permicathInfec"].toInt());
    ui->checkBox_transHepatico->setChecked((bool)obj[id]["clpthp"].toInt());
    ui->checkBox_FAV->setChecked((bool)obj[id]["FAV2"].toInt());
    ui->checkBox_PTFE->setChecked((bool)obj[id]["PTFEInfec"].toInt());
    ui->checkBox_HiperamiaEmTunelDeCateter->setChecked((bool)obj[id]["hiperamia1"].toInt());
    ui->checkBox_hiperamiaEmFAV->setChecked((bool)obj[id]["hiperamia2"].toInt());
    ui->checkBox_hiperamiaEmPTFE->setChecked((bool)obj[id]["hiperamia3"].toInt());
    ui->groupBox_HiperamiaNoStioDeInsercaoDeCAteter->setChecked((bool)obj[id]["hiperama"].toInt());
    ui->groupBox_endurecimentoEmTornoDoCateter->setChecked((bool)obj[id]["endurecimentotc"].toInt());
    ui->checkBox_endurecimentoEmFAV->setChecked((bool)obj[id]["endurecimento1"].toInt());
    ui->checkBox_endurecimentoEmPTFE->setChecked((bool)obj[id]["endurecimento2"].toInt());
    ui->groupBox_secrecao->setChecked((bool)obj[id]["secrecaoPSIC"].toInt());
    ui->checkBox_secrecaoFAV->setChecked((bool)obj[id]["secrecao1"].toInt());
    ui->checkBox_secrecaoPTFE->setChecked((bool)obj[id]["secrecao2"].toInt());
    ui->checkBox_colecaoDeSecrecao->setChecked((bool)obj[id]["colecao"].toInt());
    ui->checkBox_edemaEmLocalDeAcesso->setChecked((bool)obj[id]["edemaLA"].toInt());
    ui->checkBox_dorEmLocalDeAcesso->setChecked((bool)obj[id]["dorEmLocal"].toInt());
    ui->checkBox_odorFetido->setChecked((bool)obj[id]["odor"].toInt());
    ui->checkBox_febre->setChecked((bool)obj[id]["febreInfec"].toInt());
    ui->checkBox_calafrios->setChecked((bool)obj[id]["calafrios"].toInt());
    ui->checkBox_mialgia->setChecked((bool)obj[id]["mialdia"].toInt());
    ui->checkBox_outrosSinais->setChecked((bool)obj[id][""].toInt());
    ui->outros_sintomas->setText(obj[id]["outroSintoma"].toString());
    ui->checkBox_hemocultura->setChecked((bool)obj[id]["hemocultura"].toInt());
    ui->checkBox_swab->setChecked((bool)obj[id]["swab"].toInt());
    ui->checkBox_pontaDeCateter->setChecked((bool)obj[id]["pontaCateter"].toInt());
    ui->checkBox_outrosExames_2->setText(obj[id]["outrosColhidos"].toString());
    ui->checkBox_lookterapia->setChecked((bool)obj[id]["lookterapia"].toInt());
    ui->checkBox_MupirocinaTopica->setChecked((bool)obj[id]["mulpirocinaT"].toInt());
    ui->checkBox_vancomicina->setChecked((bool)obj[id]["vancominicina"].toInt());
    ui->checkBox_gentamicina->setChecked((bool)obj[id]["gentamicina"].toInt());
    ui->checkBox_meropenem->setChecked((bool)obj[id]["meropenem"].toInt());
    ui->checkBox_cefepime->setChecked((bool)obj[id]["cefepine"].toInt());
    ui->checkBox_pieperacilinaTazobactam->setChecked((bool)obj[id]["pirecilina"].toInt());
    ui->checkBox_polimixinaB->setChecked((bool)obj[id]["polimixina"].toInt());
    ui->checkBox_anfotericinaB->setChecked((bool)obj[id]["anfotericina"].toInt());
    ui->checkBox_cefazolina->setChecked((bool)obj[id]["cefazolina"].toInt());
    ui->checkBox_teicoplanina->setChecked((bool)obj[id]["teicoplanina"].toInt());
    ui->checkBox_oxacilina->setChecked((bool)obj[id]["oxacilina"].toInt());
    ui->checkBox_daptomicina->setChecked((bool)obj[id]["daptomicina"].toInt());
    ui->checkBox_ciprofloxacino->setChecked((bool)obj[id]["ciprofloxacino"].toInt());
    ui->checkBox_levofloxacino->setChecked((bool)obj[id]["levofloxacino"].toInt());
    ui->checkBox_amoxilinaClavunlato->setChecked((bool)obj[id]["amoxilina"].toInt());
    ui->checkBox_cefalexina->setChecked((bool)obj[id]["cefalexina"].toInt());
    ui->checkBox_outrosAntibioticos->setChecked((bool)obj[id][""].toInt());
    ui->antibiotico->setText(obj[id]["antibiotico"].toString());
    ui->tempo_uso1->setText(obj[id]["tempoantibiotico"].toString());
    ui->tempo_uso2->setText(obj[id]["tempomMulpirocina"].toString());
    ui->tempo_uso3->setText(obj[id]["tempovancominicina"].toString());
    ui->tempo_uso4->setText(obj[id]["tempoGentamicina"].toString());
    ui->tempo_uso5->setText(obj[id]["tempoMeropenem"].toString());
    ui->tempo_uso6->setText(obj[id]["tempoCefepine"].toString());
    ui->tempo_uso7->setText(obj[id]["tempoPirecilina"].toString());
    ui->tempo_uso8->setText(obj[id]["tempoPolimixina"].toString());
    ui->tempo_uso9->setText(obj[id]["tempoAnfotericina"].toString());
    ui->tempo_uso10->setText(obj[id]["tempoCefazolina"].toString());
    ui->tempo_uso11->setText(obj[id]["tempoTeicoplanina"].toString());
    ui->tempo_uso12->setText(obj[id]["tempoOxacilina"].toString());
    ui->tempo_uso13->setText(obj[id]["tempoDaptomicina"].toString());
    ui->tempo_uso14->setText(obj[id]["tempoCiproflo"].toString());
    ui->tempo_uso15->setText(obj[id]["tempoLevofla"].toString());
    ui->tempo_uso16->setText(obj[id]["tempoAmoxilina"].toString());
    ui->tempo_uso_outro->setText(obj[id]["tempoOutros"].toString());
    ui->d1->setText(obj[id][""].toString());
    ui->d2->setText(obj[id][""].toString());
    ui->d3->setText(obj[id][""].toString());
    ui->d4->setText(obj[id][""].toString());
    ui->d5->setText(obj[id][""].toString());
    ui->d6->setText(obj[id][""].toString());
    ui->d7->setText(obj[id][""].toString());
    ui->d8->setText(obj[id][""].toString());
    ui->d9->setText(obj[id][""].toString());
    ui->d10->setText(obj[id][""].toString());
    ui->d11->setText(obj[id][""].toString());
    ui->d12->setText(obj[id][""].toString());
    ui->d13->setText(obj[id][""].toString());
    ui->d14->setText(obj[id][""].toString());
    ui->d15->setText(obj[id][""].toString());
    ui->d16->setText(obj[id][""].toString());
    ui->checkBox_hemocultura->setChecked((bool)obj[id]["hemoculturaP"].toInt());
    ui->checkBox_pontaDeCateterPositiva->setChecked((bool)obj[id]["pontadeCP"].toInt());
    ui->microorganismos_1->setText(obj[id]["micro1"].toString());
    ui->microorganismos_2->setText(obj[id]["micro2"].toString());
    ui->microorganismos_3->setText(obj[id]["micro3"].toString());
    ui->microorganismos_4->setText(obj[id]["micro4"].toString());
    ui->microorganismos_5->setText(obj[id]["micro5"].toString());
    ui->resistente_a_1->setText(obj[id]["sensivel1"].toString());
    ui->resistente_a_2->setText(obj[id]["sensivel2"].toString());
    ui->resistente_a_3->setText(obj[id]["sensivel3"].toString());
    ui->resistente_a_4->setText(obj[id]["sensivel4"].toString());
    ui->resistente_a_5->setText(obj[id]["sensivel5"].toString());
    ui->sensivel_a_1->setText(obj[id]["resistente1"].toString());
    ui->sensivel_a_2->setText(obj[id]["resistente2"].toString());
    ui->sensivel_a_3->setText(obj[id]["resistente3"].toString());
    ui->sensivel_a_4->setText(obj[id]["resistente4"].toString());
    ui->sensivel_a_5->setText(obj[id]["resistente5"].toString());
    ui->cb1->setChecked((bool)obj[id][""].toInt());
    ui->cb2->setChecked((bool)obj[id][""].toInt());
    ui->cb3->setChecked((bool)obj[id][""].toInt());
    ui->cb4->setChecked((bool)obj[id][""].toInt());
    ui->cb5->setChecked((bool)obj[id][""].toInt());
    ui->cb6->setChecked((bool)obj[id][""].toInt());
    ui->cb7->setChecked((bool)obj[id][""].toInt());
    ui->cb8->setChecked((bool)obj[id][""].toInt());
    ui->cb9->setChecked((bool)obj[id][""].toInt());
    ui->cb10->setChecked((bool)obj[id][""].toInt());
    ui->checkBox_outrasInfeccoes->setChecked((bool)obj[id]["outroTipo"].toInt());
    ui->checkBox_infeccaoDeTratoUrinario->setChecked((bool)obj[id]["infeccaoUrinaria"].toInt());
    ui->checkBox_infeccaoIntestinalOuFocoAbdominal->setChecked((bool)obj[id]["infeccaoIntestinal"].toInt());
    ui->checkBox_infeccaoDeSitioCirurgico->setChecked((bool)obj[id]["infeccaoSitio"].toInt());
    ui->checkBox_infeccaoDePele->setChecked((bool)obj[id]["infeccaoPele"].toInt());
    ui->checkBox_infestacaoParasitaria->setChecked((bool)obj[id]["infestaocaoParasita"].toInt());
    ui->checkBox_celuliteInfecciosa->setChecked((bool)obj[id]["celuliteInfecciosa"].toInt());
    ui->checkBox_infeccaoRespiratoriaDeViasAereaInferiores->setChecked((bool)obj[id]["infeccaoAereaInf"].toInt());
    ui->checkBox_infeccaoRespiratoriaDeViasAereaSuperiores->setChecked((bool)obj[id][""].toInt());
    ui->checkBox_outrasInfeccoes->setChecked((bool)obj[id]["outrasInfec"].toInt());


}

infeccaodeacesso_leitura::~infeccaodeacesso_leitura()
{
    delete ui;
}

void infeccaodeacesso_leitura::on_pushButton_Voltar_clicked()
{
    hide();
}
