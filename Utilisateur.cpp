//
// Created by eric on 10/04/2020.
//

#include "Utilisateur.h"



Utilisateur::Utilisateur() : QObject() {}


void Utilisateur::setData(QString login, QString mdp) {

    this->login=login;
    this->mdp=mdp;
    emit settingsDataFinished(); //les données sont settés j'émets un signal

}

const QString &Utilisateur::getLogin() const {
    return login;
}

void Utilisateur::setLogin(const QString &login) {
    Utilisateur::login = login;
}

const QString &Utilisateur::getMdp() const {
    return mdp;
}

void Utilisateur::setMdp(const QString &mdp) {
    Utilisateur::mdp = mdp;
}
