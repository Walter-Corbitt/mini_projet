//
// Created by jason on 29/03/2020.
//

#ifndef MINI_PROJET_MODELE_H
#define MINI_PROJET_MODELE_H
#include <string>


class Modele {
    Modele();

    class drapeau(Data);
    class Nom_Pays(Data);

    virtual Qmap <Qstring, Nom_Pays> Test_Nom_Pays;
    virtual Qmap <Qstring, drapeau> Test_Drapeau;


    Qmap <Qstring, Qstring> Data;
    void Récupération_Data();
    void Stockage_Pays();

};


#endif //MINI_PROJET_MODELE_H
