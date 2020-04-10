//
// Created by eric on 10/04/2020.
//

#ifndef SIMPLEMVP_UTILISATEUR_H
#define SIMPLEMVP_UTILISATEUR_H

#include <string>

#include <QObject>

using namespace std;
class Utilisateur: public QObject {

Q_OBJECT;

private:

    QString login;
    QString mdp;

public:

    Utilisateur();
    void setData(QString login,QString mdp);

    const QString &getLogin() const;

    void setLogin(const QString &login);

    const QString &getMdp() const;

    void setMdp(const QString &mdp);

public: signals:
    void  settingsDataFinished();



};


#endif //SIMPLEMVP_UTILISATEUR_H
