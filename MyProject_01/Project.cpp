
#include "Project.h"
Project::Project(QString id,QString _name,QString _manager){
       ID = id;
       name = _name;
       manager = _manager;
}

QString Project::getID(){
    return ID;
}

QString Project::getName(){
    return name;
}

QString Project::getManager(){
    return manager;
}
