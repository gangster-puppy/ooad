#ifndef MENUDIALOG_H
#define MENUDIALOG_H

#include <QDialog>
#include "apartwindow.h"
#include "Company.h"
#include "prowindow.h"
#include "empwindow.h"
#include "conndlg.h"
#include "Company.h"

namespace Ui {
class MenuDialog;
}

class MenuDialog : public QDialog
{
    Q_OBJECT

public:
    MenuDialog(Company *,QWidget *parent = 0);
    ~MenuDialog();

private slots:
    void on_qiye_info_clicked();
    void on_aptManageBtn_clicked();
    void on_proManageBtn_clicked();
    void on_epyManageBtn_clicked();
    void on_commandLinkButton_clicked();

private:
    Ui::MenuDialog *ui;
    apartWindow * aptWin;
    Company * company;
    proWindow * proWin;
    empWindow * empWin;
    ConnDlg * conndlg;
};

#endif // MENUDIALOG_H
