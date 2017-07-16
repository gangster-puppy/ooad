#ifndef EMPWINDOW_H
#define EMPWINDOW_H

#include <QMainWindow>
#include "empadddialog.h"
#include "conndlg.h"
#include <QSqlTableModel>

namespace Ui {
class empWindow;
}

class empWindow : public QMainWindow
{
    Q_OBJECT

public:
    empWindow(const QString empTable,QWidget *parent = 0);
    ~empWindow();
    QSqlTableModel * empTableModel;

private slots:
    void on_addBtn_clicked();
    void on_DelBtn_clicked();
    void on_srhBtn_clicked();
private:
    Ui::empWindow *ui;
    empAddDialog * empAddDlg;
    ConnDlg conndlg;
};

#endif // EMPWINDOW_H
