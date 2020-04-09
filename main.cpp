#include <iostream>
#include <QtWidgets/QApplication>
#include "ClientRest.h"
#include "Modele.h"

int main(int argc, char *argv[])

{
    QApplication app(argc, argv);
    QUrl url("http://api.printful.com/countries");
    ClientRest cr(url);
    cr.sendrequest();
    return app.exec();
}