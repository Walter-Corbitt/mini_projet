//
// Created by Chris-pc on 26/03/2020.
//

#ifndef MINI_PROJET_RECUPDONNEES_H
#define MINI_PROJET_RECUPDONNEES_H

#include <QtCore/QUrl>
#include <map>
#include <QtCore/QString>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QtCore/QObject>
#include <QtWidgets/QMainWindow>

using namespace std;

class RecupDonnees : public QWidget{
    Q_OBJECT
    QNetworkAccessManager networkManager;
    QNetworkRequest request;
    QNetworkReply* currentReply;
private :

public :
    RecupDonnees(QUrl url);
    void sendRequest();
    void ParseJson(QString data);

public slots :
    void handleJson();

};


#endif //MINI_PROJET_RECUPDONNEES_H