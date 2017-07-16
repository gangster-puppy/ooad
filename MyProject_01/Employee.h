#if !defined(_EMPLOYEE_H)
#define _EMPLOYEE_H

#include <QString>
class Employee {
public:
    Employee(QString _ID, QString _name, QString _sex, QString _age, QString _to_apt, QString _to_pro, QString _roleInfo);
    QString getID();
    QString getName();
    QString getSex();
    QString getAge();
    QString getTo_apt();
    QString getTo_pro();
    QString getRole();
private:
	QString ID;
	QString name;
	QString sex;
    QString age;
    QString to_apt;
    QString to_pro;
    QString roleInfo;
};

#endif  //_EMPLOYEE_H
