#include "Company.h"


Company::Company(QString _name,QString _address){
    name = _name;
    address = _address;
    responsor = "zzg";
    major = "software";
}

bool Company::IsAccess() {
    return false;
}
QString Company::getComMessage(){
    QString info="";
    info.append("企业名字：  "+name+"\n");
    info.append("企业地址：  "+address+"\n");
    info.append("企业法人：  "+responsor+"\n");
    info.append("企业主营：  "+major+"\n");
    return info;
}

