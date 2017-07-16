#ifndef APARTWINDOW_H
#define APARTWINDOW_H

#include <QMainWindow>
#include "conndlg.h"
#include <QGroupBox>
#include <QTableView>
#include <QListWidget>
#include <QLabel>
#include <QFile>
#include <QSqlRelationalTableModel>
#include <QSqlTableModel>
#include <QModelIndex>
#include <QDomNode>
#include <QDomDocument>
#include <QDialog>
#include "aptAddDialog.h"
#include <QPushButton>
#include <QLabel>
#include <QLineEdit>

class apartWindow : public QMainWindow
{
    Q_OBJECT

public:
     apartWindow(const QString factoryTable,QWidget *parent = 0);
    ~apartWindow();
     QSqlTableModel *factoryModel;

private:

    QGroupBox *createFactoryGroupBox();
    void createMenuBar();
    QTableView *factoryView;

    QModelIndex indexOfFactory(const QString &factory);
    ConnDlg conndlg;
    aptAddDialog  * aptAddDlg;
    QPushButton * searchBtn;
    QLineEdit * searchEdit;
    QLabel * searchLab;
private slots:
    void addApart();
    void delApart();
    void srhApart();
    void saveApart();
signals:

};

#endif // APARTWINDOW_H
