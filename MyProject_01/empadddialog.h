#ifndef EMPADDDIALOG_H
#define EMPADDDIALOG_H

#include <QDialog>
#include <QSqlTableModel>
#include "Employee.h"
#include <QLabel>

namespace Ui {
class empAddDialog;
}

class empAddDialog : public QDialog
{
    Q_OBJECT

public:
    empAddDialog(QSqlTableModel *,QLabel *,QWidget *parent = 0);
    ~empAddDialog();

private slots:
    void on_okBtn_clicked();

    void on_cancleBtn_clicked();

private:
    Ui::empAddDialog *ui;

    QSqlTableModel * model;
    QLabel * label;
};

#endif // EMPADDDIALOG_H
