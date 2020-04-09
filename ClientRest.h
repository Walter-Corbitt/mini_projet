//
// Created by venne on 07/04/2020.
//

#ifndef MINI_PROJET_CLIENTREST_H
#define MINI_PROJET_CLIENTREST_H

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QtWidgets/QMainWindow>

class ClientRest:public QWidget {
Q_OBJECT
    QNetworkAccessManager networkManager;
    QNetworkRequest request;
    QNetworkReply* currentReply;
public:
    ClientRest(QUrl url);
    void sendrequest();
public slots:
    void handleJson();
};


#endif //TESTGITSN2_CLIENTREST_H
