#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QJsonObject>
#include <QJsonDocument>
#include <iostream>
#include <QDebug>
#include <QObject>
#include <QMessageBox>

#ifndef REQ_H
#define REQ_H


class req
{
public:
    req();
    QJsonDocument get(QString rota);
    void post(QJsonObject object, QString rota);

};

#endif // REQ_H
