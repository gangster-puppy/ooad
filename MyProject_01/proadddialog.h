#ifndef PROADDDIALOG_H
#define PROADDDIALOG_H

#include <QDialog>
#include "Project.h"
#include <QList>
#include <QSqlTableModel>
#include <QLabel>

namespace Ui {
class proAddDialog;
}

class proAddDialog : public QDialog
{
    Q_OBJECT

public:
    proAddDialog(QSqlTableModel * ,QLabel *,QWidget *parent = 0);
    ~proAddDialog();

private slots:

    void on_OKbtn_clicked();

    void on_CancelBtn_clicked();

private:
    Ui::proAddDialog *ui;

    QSqlTableModel * model;
    QLabel *label;
};

#endif // PROADDDIALOG_H
