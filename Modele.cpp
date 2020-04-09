//
// Created by venne on 07/04/2020.
//

#include "Modele.h"


void Stockage_Pays()
{
//stockage de toures les données JSON dans la map
}

void Recuperation_Data()
{
//recupération de toutes les données JSON
}
#include "Modele.h"

const QVector<unsigned int> CLandTypes::getLandTypes()
{
    QVector<unsigned int> returnValue;

    for(QMap<unsigned int, CLandType>::iterator mapLandTypeIterator = (QMap<unsigned int, CLandType>::iterator)d->LandTypes.begin(); mapLandTypeIterator != (QMap<unsigned int, CLandType>::iterator)d->LandTypes.end();++mapLandTypeIterator)
    {
        returnValue.push_back(mapLandTypeIterator.key());
    }
    return returnValue;
}