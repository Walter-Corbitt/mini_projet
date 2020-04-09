//
// Created by venne on 07/04/2020.
//

#include "ClientRest.h"
#include <QtCore/QUrl>

ClientRest::ClientRest(QUrl url) {
    request.setUrl(url);
    QObject::connect(&networkManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(handleJson()));

}

void ClientRest::handleJson() {
    if (currentReply->error() != QNetworkReply::NoError)
    {
        qDebug()<<currentReply->error();
    }
    else{
        QString data = (QString) currentReply->readAll();
        qDebug()<<data;
    }
}

void ClientRest::sendrequest() {

    currentReply=networkManager.get(request);

}