#include <iostream>
#include <QtWidgets/QApplication>
#include "rest/ClientRest.h"
#include "settings/settings.h"
#include "model/Datas.h"

int settings::nbquestions =10;
int settings::delai=2000;
int settings::nbmaxdelai=60;
int settings::nbmaxquestions=100;
int settings::nbmindelai=1;
int settings ::nbminimumquestions=10;
int settings::nbcolonnes=2;
int settings::nbdrapeauquestions=4;
QUrl settings::imageurl=QUrl("http://www.geognos.com/api/en/countries/flag/");
QUrl settings::webserviceadress=QUrl("https://api.printful.com/countries");
map<QString,QString> Datas::codetopays;
map<QString,QString> Datas::paystocode;
map<int,QString> Datas::listcode;
map<QString,QImage> Datas::listeimage;
vector<QString> Datas::drapeauxquizz;
int Datas::loadprogress=0;

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);



    ClientRest *rest=new ClientRest(settings::webserviceadress);
    rest->sendrequest();






    return app.exec();
}
