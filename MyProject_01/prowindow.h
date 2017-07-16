#ifndef PROWINDOW_H
#define PROWINDOW_H

#include <QMainWindow>
#include "proadddialog.h"
#include <QSqlTableModel>
#include "conndlg.h"

namespace Ui {
class proWindow;
}

class proWindow : public QMainWindow
{
    Q_OBJECT

public:
    proWindow(const QString proTable,QWidget *parent = 0);
    ~proWindow();
    QSqlTableModel *proTableModel;

private slots:
    void on_addBtn_clicked();

    void on_delBtn_clicked();

    void on_srhBtn_clicked();

private:
    Ui::proWindow *ui;
    proAddDialog * proAddDlg;
    ConnDlg conndlg;

};

#endif // PROWINDOW_H
