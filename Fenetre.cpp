//
// Created by eric on 10/04/2020.
//

#include <QtWidgets/QFormLayout>
#include "Fenetre.h"

Fenetre::Fenetre() : QFrame() {
    QFormLayout *layout=new QFormLayout();
    login=new QLineEdit();
    password=new QLineEdit();
    password->setEchoMode(QLineEdit::Password);
    label=new QLabel();
    ok=new QPushButton("OK");
    layout->addRow(tr("&login:"), login);
    layout->addRow(tr("&password:"), password);
    layout->addRow(ok);
    layout->addRow(label);
    this->setLayout(layout);

}

QLabel *Fenetre::getLabel() const {
    return label;
}

QPushButton *Fenetre::getOk() const {
    return ok;
}







