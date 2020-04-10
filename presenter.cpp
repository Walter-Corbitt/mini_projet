//
// Created by eric on 10/04/2020.
//

#include "presenter.h"

void presenter::updateData() {

    user->setData("Eric","Thomas");

}

presenter::presenter() : QObject() {
    fenetre=new Fenetre();
    fenetre->getOk()->setDisabled(true);
    user=new Utilisateur();
    /*************************conncection des signaux et des slots syntaxe QT5**********************************************/

    QObject::connect(user,&Utilisateur::settingsDataFinished,this,[this] {updateModelCharge(new QString("Model chargé"));});
    QObject::connect(fenetre->getOk(),&QPushButton::clicked, this, &presenter::checkloginmdp);
    /***********************chargement du modèle****************************************************************************/
    updateData();
    fenetre->show();  //affichage de la frame
}


/***********************mis à jour du modèle********************/

void presenter::updateModelCharge(QString *message) {
fenetre->getLabel()->setText(*message);
fenetre->getOk()->setEnabled(true);
}
/********************vérification du mot de passe*****************************/

void presenter::checkloginmdp() {
    if(user->getLogin()=="Eric"&&user->getMdp()=="Thomas")
    {
        fenetre->getLabel()->setText("Identification correcte");
    } else{
        fenetre->getLabel()->setText("Mauvais login ou mot de passe");
    }

}
