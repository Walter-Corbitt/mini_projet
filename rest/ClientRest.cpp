//
// Created by eric on 22/03/2020.
//

#include <QtCore/QJsonDocument>
#include <QtCore/QJsonObject>
#include <QtCore/QJsonArray>
#include <QtCore/QEventLoop>
#include <QtWidgets/QProgressDialog>
#include <unistd.h>
#include "ClientRest.h"
#include "../model/Datas.h"


ClientRest::ClientRest(QUrl url) {
    networkManager=new QNetworkAccessManager();
    request.setUrl(url);
    QObject::connect(networkManager, SIGNAL(finished(QNetworkReply*)),this, SLOT(loaddata()));

}

void ClientRest::sendrequest() {
    currentReply=networkManager->get(request);
}



void ClientRest::loaddata() {
    if (currentReply->error() != QNetworkReply::NoError) {
        qDebug() << currentReply->error();
    } else {
        networkManager->disconnect();
        QString data = (QString) currentReply->readAll();
        QJsonDocument doc = QJsonDocument::fromJson(data.toUtf8()); //transformation de la réponse en jsondoc
        QJsonObject jsonObject = doc.object();  //le doc en jsonobjec
        QJsonArray jsonArray = jsonObject["result"].toArray(); //on trandorme on qjsonarray à partir de la racine result de la réponse
        qDebug()<<jsonArray;
        int i = 0; //numéro  pour la liste de code

                foreach (const QJsonValue &value, jsonArray) { //parcours du tableau
                QJsonObject obj = value.toObject();
                Datas::codetopays.insert(pair<QString, QString>(obj["code"].toString(), obj["name"].toString()));
                Datas::paystocode.insert(pair<QString, QString>(obj["name"].toString(), obj["code"].toString()));
                Datas::listcode.insert(pair<int, QString>(i, obj["code"].toString()));
                i++;
                Datas::loadprogress++;

            }

        qDebug() << Datas::codetopays.size();
        qDebug() << Datas::listcode.size();
        qDebug() << Datas::codetopays.size();


    }

}



