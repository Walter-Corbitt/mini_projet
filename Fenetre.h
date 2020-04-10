//
// Created by eric on 10/04/2020.
//

#ifndef SIMPLEMVP_FENETRE_H
#define SIMPLEMVP_FENETRE_H


#include <QtWidgets/QFrame>
#include <QtGui/QAccessibleEditableTextInterface>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QLabel>
#include "Utilisateur.h"

class Fenetre : public QFrame{

private:

    QLineEdit *login;
    QLineEdit *password;
    QPushButton *ok;
    QLabel *label;


public:
    Fenetre();

    QPushButton *getOk() const;

    QLabel *getLabel() const;

};


#endif //SIMPLEMVP_FENETRE_H
