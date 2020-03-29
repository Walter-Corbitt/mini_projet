//
// Created by Chris-pc on 26/03/2020.
//

#ifndef MINI_PROJET_MODELE_H
#define MINI_PROJET_MODELE_H
#include <string>
#include "../Rest/RecupDonnees.h"

class Model {

public :

    Model();

    class pays(InfosPays);
    class flag(InfosPays);

    virtual Qmap <Qstring, pays> DevinePays;
    virtual Qmap <Qstring, flag> DevineFlag;

    Qmap <Qstring, Qstring> InfosPays;

};


#endif //MINI_PROJET_MODELE_H
