#include <iostream>

#include <iostream>
#include <QtWidgets/QApplication>
#include "Rest/RecupDonnees.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QUrl url("http://api.printful.com/countries");
    RecupDonnees cr(url);
    cr.sendRequest();

    return app.exec();
}