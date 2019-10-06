#include "leituramenu.h"
#include "ui_leituramenu.h"

LeituraMenu::LeituraMenu(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LeituraMenu)
{
    ui->setupUi(this);
}

LeituraMenu::~LeituraMenu()
{
    delete ui;
}
