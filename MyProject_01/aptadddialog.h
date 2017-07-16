#ifndef APTADDDIALOG_H
#define APTADDDIALOG_H

#include <QDialog>
#include <QAbstractButton>
#include "Apartment.h"
#include <QGroupBox>
#include <QTableView>
#include <QListWidget>
#include <QLabel>
#include <QFile>
#include <QSqlRelationalTableModel>
#include <QSqlTableModel>
#include <QModelIndex>

namespace Ui {
class aptAddDialog;
}

class aptAddDialog : public QDialog
{
    Q_OBJECT

public:
    aptAddDialog(QSqlTableModel * ,QWidget *parent = 0);
    ~aptAddDialog();
    Ui::aptAddDialog *ui;
    //void getModel(QSqlTableModel * model);
private slots:
    void on_okBtn_clicked();

    void on_cancelBtn_clicked();

private:
    Apartment * apartment;
    QSqlTableModel * model;
};

#endif // APTADDDIALOG_H
