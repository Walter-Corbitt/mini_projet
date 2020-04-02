//
// Created by Chris-pc on 26/03/2020.
//

#include <QtCore/QJsonDocument>
#include <QtCore/QJsonObject>
#include <QtCore/QJsonArray>
#include "RecupDonnees.h"
#include "../Model/Model.h"


RecupDonnees::RecupDonnees(QUrl url) {
    request.setUrl(url);
    QObject::connect(&networkManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(handleJson()));

}

void RecupDonnees::sendRequest() {
    currentReply=networkManager.get(request);
}

void RecupDonnees::handleJson() {
    if (currentReply->error() != QNetworkReply::NoError)
    {
        qDebug()<<currentReply->error();
    }
    else{
        QString data = (QString) currentReply->readAll();
        //qDebug()<<data;
    }
}

void RecupDonnees::ParseJson(QString data) {
    QJsonDocument doc = QJsonDocument::fromJson(data.toUtf8());
    QJsonObject jsonObject = doc.object();
    QJsonArray jsonArray = jsonObject["result"].toArray();
    qDebug()<<jsonArray;
    int i =0;
    foreach (const QJsonValue &value, jsonArray) { //parcours du tableau
            QJsonObject obj = value.toObject();
            Model::codetopays.insert(pair<QString, QString>(obj["code"].toString(), obj["name"].toString()));
            Model::paystocode.insert(pair<QString, QString>(obj["name"].toString(), obj["code"].toString()));
            Model::listcode.insert(pair<int, QString>(i, obj["code"].toString()));
            i++;
            Model::loadprogress++;
            //LoaderProgress::getProgressBarInstance()->setValue(Model::loadprogress);
        }
}
