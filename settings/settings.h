//
// Created by eric on 21/03/2020.
//

#ifndef NATIONALFLAGQUIZZ_SETTINGS_H
#define NATIONALFLAGQUIZZ_SETTINGS_H

#include <string>
#include <QtCore/QString>

using namespace std;
class settings {
public:
    static int nbquestions;
    static int delai;
    static int nbminimumquestions;
    static int nbmaxquestions;
    static int nbmindelai;
    static int nbmaxdelai;
    static QUrl webserviceadress;
    static QUrl imageurl;
    static int nbcolonnes;
    static int nbdrapeauquestions;

};


#endif //NATIONALFLAGQUIZZ_SETTINGS_H
