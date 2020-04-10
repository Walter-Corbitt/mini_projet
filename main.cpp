#include <iostream>
#include <QtWidgets/QApplication>
#include "Fenetre.h"
#include "presenter.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);


    presenter *p=new presenter();

    return app.exec();
}