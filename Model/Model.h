//
// Created by Chris-pc on 26/03/2020.
//

#ifndef MINI_PROJET_MODELE_H
#define MINI_PROJET_MODELE_H
#include <string>
#include "../Rest/RecupDonnees.h"
using namespace std;

class Model {

public :

    Model();

    Qmap <Qstring, Qstring> InfosPays;

    Qmap <Qstring, Qvector<Qstring>> DevinePays;
    Qmap <Qstring, Qvector<Qstring>> DevineFlag;
    
};


#endif //MINI_PROJET_MODELE_H
