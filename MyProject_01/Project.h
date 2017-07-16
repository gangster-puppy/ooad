
#if !defined(_PROJECT_H)
#define _PROJECT_H
#include <QString>

class Project {
public:
    Project();
    Project(QString id,QString _name,QString _manager);
    QString getID();
    QString getName();
    QString getManager();
private:
	QString ID;
	QString name;
	QString manager;
};

#endif  //_PROJECT_H
