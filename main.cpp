//#include "hemocontrol.h"
#include <QApplication>
#include "telalogin.h"
#include <QtCore>




int main(int argc, char *argv[])
{

    QApplication a(argc, argv);
    TelaLogin w;
    w.show();

    return a.exec();
}
