#include "dadoshemodialise_leitura.h"
#include "ui_dadoshemodialise_leitura.h"
#include "req.h"
dadoshemodialise_leitura::dadoshemodialise_leitura(int id, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::dadoshemodialise_leitura)
{
    ui->setupUi(this);
    this->id = id;
    req Req;
    QJsonDocument obj = Req.get("recentes");
    int i = id;

    ui->peso_seco->setText((QString)obj[i]["pesoSeco2"].toInt());
    ui->dialise_numero->setText(obj[i]["dialise"].toString());
    ui->data->setText(obj[i]["data2"].toString());
    ui->tempo_hemodialise->setText(obj[i]["tempo"].toString());
    ui->ultrafiltracao->setText(obj[i]["ultrafiltracao"].toString());
    ui->dosagem_de_heparina->setText(obj[i]["dosagem"].toString());
    ui->fluxo_bomba_sangue->setText(obj[i]["fluxoBomba"].toString());
    ui->fluxo_dialisante->setText(obj[i]["fluxoDialisante"].toString());
    ui->temperatura->setText(obj[i]["temperatura"].toString());
    ui->desligar_banho->setText(obj[i]["desligarApos"].toString());
    ui->sodio->setText(obj[i]["sodio"].toString());
    ui->bicarbonato->setText(obj[i]["bicarbonato"].toString());
    ui->solucao_calcio->setText(obj[i]["calcio"].toString());
    ui->solucao_potassio->setText(obj[i]["potassio"].toString());
    ui->cloreto_potassio->setText(obj[i]["KCl"].toString());
    ui->soro_fisiologico->setText(obj[i]["NaCl"].toString());
    ui->soro_fisiologico_tempo->setText(obj[i]["NaClmin"].toString());
    ui->checkBox_FX60->setChecked((bool)obj[i]["fx60"].toInt());
    ui->checkBox_FX80->setChecked((bool)obj[i]["fx80"].toInt());
    ui->checkBox_FX100->setChecked((bool)obj[i]["fx100"].toInt());
    ui->checkBox_CDL->setChecked((bool)obj[i]["cdl"].toInt());
    ui->checkBox_Permicath->setChecked((bool)obj[i]["permicath"].toInt());
    ui->checkBox_permicathTransHepaticoPercutaneo->setChecked((bool)obj[i]["permicathTHP"].toInt());
    ui->checkBox_FAV->setChecked((bool)obj[i]["FAV"].toInt());
    ui->checkBox_PTFE->setChecked((bool)obj[i]["PTFE"].toInt());
    ui->checkBox_segquarsex->setChecked((bool)obj[i]["segquasex"].toInt());
    ui->checkBox_terquinsab->setChecked((bool)obj[i]["terquisav"].toInt());
    ui->soro_fisiologico->setText(obj[i]["NaCl"].toString());
    ui->soro_fisiologico_tempo->setText(obj[i]["NaClmin"].toString());
    ui->checkBox_volumeDeSoro_sim->setChecked((bool)obj[i]["addVolume"].toInt());
    ui->checkBox_primming_sim->setChecked((bool)obj[i]["priming"].toInt());
    ui->prientacoes->setText(obj[i]["Orientacoes"].toString());
    ui->pre_hemo_hora->setText(obj[i]["preHemoHora"].toString());
    ui->pre_hemo_pa->setText(obj[i]["preHemoPA"].toString());
    ui->pre_hemo_tax->setText(obj[i]["preHemoTax"].toString());
    ui->pre_hemo_fc->setText(obj[i]["preHemoFC"].toString());
    ui->pre_hemo_outros->setText(obj[i]["preHemoOutros"].toString());
    ui->primeira_hora_fc->setText(obj[i]["hora1hora"].toString());
    ui->primeira_hora_pa->setText(obj[i]["hora1PA"].toString());
    ui->primeira_hora_tax->setText(obj[i]["hora1Tax"].toString());
    ui->primeira_hora_hora->setText(obj[i]["hora1Hora"].toString());
    ui->primeira_hora_outros_2->setText(obj[i]["hora1Outros"].toString());
    ui->segunda_hora_fc->setText(obj[i]["hora2FC"].toString());
    ui->segunda_hora_pa->setText(obj[i]["hora2PA"].toString());
    ui->segunda_hora_tax->setText(obj[i]["hora2Tax"].toString());
    ui->segunda_hora_hora->setText(obj[i]["hora2Hora"].toString());
    ui->segunda_hora_outros->setText(obj[i]["hora2Outros"].toString());
    ui->terceira_hora_fc->setText(obj[i]["hora3FC"].toString());
    ui->terceira_hora_pa->setText(obj[i]["hora3PA"].toString());
    ui->terceira_hora_tax->setText(obj[i]["hora3Tax"].toString());
    ui->terceira_hora_hora->setText(obj[i]["hora3Hora"].toString());
    ui->terceira_hora_outros->setText(obj[i]["hora3Outros"].toString());
    ui->quarta_hora_fc->setText(obj[i]["hora4FC"].toString());
    ui->quarta_hora_pa->setText(obj[i]["hora4PA"].toString());
    ui->quarta_hora_tax->setText(obj[i]["hora4Tax"].toString());
    ui->quarta_hora_hora->setText(obj[i]["hora4Hora"].toString());
    ui->quarta_hora_outros->setText(obj[i]["hora4Outros"].toString());
    ui->pros_hemo_fc->setText(obj[i]["posHemoFC"].toString());
    ui->pros_hemo_pa->setText(obj[i]["posHemoPA"].toString());
    ui->pros_hemo_tax->setText(obj[i]["posHemoTax"].toString());
    ui->pros_hemo_hora->setText(obj[i]["posHemoHora"].toString());
    ui->pros_hemo_outros->setText(obj[i]["posHemoOutros"].toString());
    ui->checkBox_cefaleia->setChecked((bool)obj[i]["cefaleia"].toInt());
    ui->checkBox_hipotensao->setChecked((bool)obj[i]["hipotensao"].toInt());
    ui->checkBox_hipertensao->setChecked((bool)obj[i]["hipertensao"].toInt());
    ui->checkBox_nauseas->setChecked((bool)obj[i]["nauseas"].toInt());
    ui->checkBox_convulsoes->setChecked((bool)obj[i]["convulsoes"].toInt());
    ui->checkBox_hipoglicemia->setChecked((bool)obj[i]["hipoglicemia"].toInt());
    ui->checkBox_hipoglicemia_2->setChecked((bool)obj[i]["hipergliecemia"].toInt());
    ui->checkBox_febre->setChecked((bool)obj[i]["febre"].toInt());
    ui->checkBox_caimbra->setChecked((bool)obj[i]["caimbra"].toInt());
    ui->checkBox_dipneia->setChecked((bool)obj[i]["dipneia"].toInt());
    ui->checkBox_agitacao->setChecked((bool)obj[i]["agitacao"].toInt());
    ui->checkBox_prurido->setChecked((bool)obj[i]["prurido"].toInt());
    ui->checkBox_arristimias->setChecked((bool)obj[i]["arritimias"].toInt());
    ui->checkBox_FraquezaMusc->setChecked((bool)obj[i]["fraqueza"].toInt());
    ui->checkBox_convulsao->setChecked((bool)obj[i]["convulsao"].toInt());
    ui->checkBox_dorToracica->setChecked((bool)obj[i]["dorToracica"].toInt());
    ui->checkBox_dorLombar->setChecked((bool)obj[i]["dorLombar"].toInt());
    ui->descricao->setText(obj[i]["descricao"].toString());
    ui->dose->setText(obj[i]["dose"].toString());
    ui->via->setText(obj[i]["via"].toString());
    ui->intervalo->setText(obj[i]["intervalo"].toString());
    ui->checagem->setText(obj[i]["checagem"].toString());
    ui->obs->setText(obj[i]["obs"].toString());


}

dadoshemodialise_leitura::~dadoshemodialise_leitura()
{
    delete ui;
}

void dadoshemodialise_leitura::on_groupBox_clicked()
{

}

void dadoshemodialise_leitura::on_scrollArea_customContextMenuRequested(const QPoint &pos)
{

}

void dadoshemodialise_leitura::on_lineEdit_1Hora_FC_cursorPositionChanged(int arg1, int arg2)
{

}

void dadoshemodialise_leitura::on_pushButton_clicked()
{
    hide();
}
