//
// Created by Chris-pc on 26/03/2020.
//

#include "RecupDonnees.h"

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
        qDebug()<<data;
    }
}
