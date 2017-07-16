#include "Apartment.h"

Apartment::Apartment(QString _ID, QString _name, QString _manager, QString _rank) {
    ID = _ID;
    name = _name;
    manager = _manager;
    rank = _rank;
}

void Apartment::setID(QString _ID) {
    ID = _ID;
}

void Apartment::setName(QString _name) {
    name = _name;
}

void Apartment::setManager(QString _manager) {
    manager = _manager;
}

void Apartment::setRank(int _rank) {
    rank = _rank;
}

QString Apartment::getID(){
    return ID;
}

QString Apartment::getName(){
    return name;
}
QString Apartment::getManager(){
    return manager;
}
QString Apartment::getRank(){
    return rank;
}

/*bool Apartment::search(QString _name) {
    return true;
}*/


