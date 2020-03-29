//
// Created by Chris-pc on 26/03/2020.
//

#ifndef MINI_PROJET_MODELE_H
#define MINI_PROJET_MODELE_H
#include <string>
#include "../Rest/RecupDonnees.h"

class Model {

public :
    Qmap <Qstring, Qstring> InfosPays;

    Model();

    class pays(InfosPays);
    class flag(InfosPays);

    Qstring paysChoisi;
    Qstring flagChoisi;

    virtual Qmap <flagChoisi, pays> DevinePays;
    virtual Qmap <paysChoisi, flag> DevineFlag;
    
};


#endif //MINI_PROJET_MODELE_H
