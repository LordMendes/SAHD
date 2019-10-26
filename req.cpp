#include "req.h"

req::req()
{

}

void req::post(QJsonObject object, QString rota){
    QNetworkAccessManager man;
    QJsonObject json;
    QNetworkRequest req(QUrl("https://saad-api.herokuapp.com/"+rota));
    req.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QNetworkReply *reply = man.post(req, QJsonDocument(object).toJson());
    while (!reply->isFinished())
    {
        qApp->processEvents();
    }

    if(!reply->error()){
        qDebug()<<"POST foi um sucesso!";
    }else{
        qDebug()<< "erro";
    }
}

QJsonDocument req::get(QString rota){
    QNetworkAccessManager man;
    QJsonObject json;
    QNetworkRequest req(QUrl("https://saad-api.herokuapp.com/"+rota));
    req.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    QNetworkReply *reply = man.get(req);
    while (!reply->isFinished())
    {
        qApp->processEvents();
    }

    QByteArray response_data = reply->readAll();

    QJsonDocument jsonDoc = QJsonDocument::fromJson(response_data);
    json = jsonDoc.object();

    if(!reply->error()){
        qDebug()<<"GET foi um sucesso!";
    }else{
        qDebug()<< "erro";
    }

    return jsonDoc;
}

void req::put(QJsonObject object, QString rota){
    QNetworkAccessManager man;
    QJsonObject json;
    QNetworkRequest req(QUrl("https://saad-api.herokuapp.com/"+rota));
    req.setHeader(QNetworkRequest::ContentTypeHeader, QString("application/json"));

    QNetworkReply *reply = man.put(req, QJsonDocument(object).toJson());
    while (!reply->isFinished())
    {
        qApp->processEvents();
    }

    if(!reply->error()){
        qDebug()<<"PUT foi um sucesso!";
    }else{
        qDebug()<< "erro : "<<reply->error();
    }
}

