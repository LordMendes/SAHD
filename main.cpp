//#include "hemocontrol.h"
#include <QApplication>
#include "telalogin.h"
#include <QtCore>
#include "cadastrouser.h"



int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    TelaLogin w;
    cadastroUser e;
    w.show();

    return a.exec();
}
