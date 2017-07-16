#ifndef CONNDLG_H
#define CONNDLG_H

#include <QWidget>
#include <QtSql>
#include <QSqlDatabase>
#include <QMessageBox>

class ConnDlg : public QWidget
{
    Q_OBJECT
public:
    explicit ConnDlg(QWidget *parent = 0);
    void addSqliteConnection();
    void creatDB();
private:
};

#endif // CONNDLG_H
