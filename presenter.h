//
// Created by eric on 10/04/2020.
//

#ifndef SIMPLEMVP_PRESENTER_H
#define SIMPLEMVP_PRESENTER_H


#include <QtCore/QObject>
#include "Utilisateur.h"
#include "Fenetre.h"

class presenter: public QObject {
Q_OBJECT;
private:
    Utilisateur *user;
    Fenetre *fenetre;
public:
    presenter();

    void updateData();

   public slots:
    void updateModelCharge(QString *message);
    void checkloginmdp();

};


#endif //SIMPLEMVP_PRESENTER_H
