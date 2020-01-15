#include "controledereuso.h"
#include "ui_controledereuso.h"

controledereuso::controledereuso(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::controledereuso)
{
    ui->setupUi(this);
}

controledereuso::~controledereuso()
{
    delete ui;
}
