//
// Created by Chris-pc on 26/03/2020.
//

#ifndef MINI_PROJET_RECUPDONNEES_H
#define MINI_PROJET_RECUPDONNEES_H

#include <QtCore/QUrl>
#include <string>
#include <map>

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>
#include <QtNetwork/QNetworkReply>
#include <QtWidgets/QMainWindow>
using namespace std;

class RecupDonnees : public QWidget{

private :

public :
    RecupDonnees(QUrl url);
    map <Qstring, Qstring> pays;
    void sendRequest();


public slots :
    void handleJson();

};


#endif //MINI_PROJET_RECUPDONNEES_H