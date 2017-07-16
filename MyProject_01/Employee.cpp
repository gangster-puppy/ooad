#include "Employee.h"

Employee::Employee(QString _ID, QString _name, QString _sex, QString _age, QString _to_apt, QString _to_pro, QString _roleInfo) {
    ID = _ID;
    name = _name;
    sex = _sex;
    age = _age;
    to_apt = _to_apt;
    to_pro = _to_pro;
    roleInfo = _roleInfo;
}
QString Employee::getID(){
    return ID;
}

QString Employee::getName(){
    return name;
}

QString Employee::getSex(){
    return sex;
}

QString Employee::getAge(){
    return age;
}

QString Employee::getTo_apt(){
    return to_apt;
}

QString Employee::getTo_pro(){
    return to_pro;
}

QString Employee::getRole(){
    return roleInfo;
}


