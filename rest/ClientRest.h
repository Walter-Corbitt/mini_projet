//
// Created by eric on 22/03/2020.
//

#ifndef NATIONALFLAGQUIZZ_CLIENTREST_H
#define NATIONALFLAGQUIZZ_CLIENTREST_H


#include <QtWidgets/QWidget>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QtWidgets/QProgressDialog>
#include <QThread>

using namespace std;

class ClientRest : public QObject {

    Q_OBJECT;
public:
     QNetworkAccessManager *networkManager;
     QNetworkRequest request;
     QNetworkReply* currentReply;





public:
    ClientRest(QUrl url);



public slots:

    void sendrequest();
    void loaddata();

};


#endif //NATIONALFLAGQUIZZ_CLIENTREST_H
