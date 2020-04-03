//
// Created by eric on 23/03/2020.
//

#ifndef NATIONALFLAGQUIZZ_DATAS_H
#define NATIONALFLAGQUIZZ_DATAS_H


#include <map>
#include <QtCore/QString>
#include <QtWidgets/QProgressDialog>
#include "../rest/ClientRest.h"

using namespace std;
class Datas {
public:
    static map<QString,QString> codetopays;  //correspondance codepays -> nompays
    static map<QString,QString> paystocode; //correspondance nompays->codepays
    static map<int ,QString> listcode; //plus pratique pour les tirages aléatoires
    static int loadprogress; //barre de progression
    static map<QString,QImage> listeimage; //Les immages sont préchargées dans cette map
    static vector<QString> drapeauxquizz; //l'ensemble des drapeaux du quizz

};


#endif //NATIONALFLAGQUIZZ_DATAS_H
