//
// Created by Chris-pc on 26/03/2020.
//

#ifndef MINI_PROJET_MODELE_H
#define MINI_PROJET_MODELE_H
#include <string>
#include <map>
#include <QtCore/QString>
#include <QtWidgets/QProgressDialog>
#include "../Rest/RecupDonnees.h"
using namespace std;

class Model {

public :

    static map<QString,QString> codetopays;  //correspondance codepays -> nompays
    static map<QString,QString> paystocode; //correspondance nompays->codepays
    static map<int ,QString> listcode; //plus pratique pour les tirages aléatoires
    static int loadprogress; //barre de progression
    static map<QString,QImage> listeimage; //Les immages sont préchargées dans cette map
    static vector<QString> drapeauxquizz; //l'ensemble des drapeaux du quizz

};


#endif //MINI_PROJET_MODELE_H
