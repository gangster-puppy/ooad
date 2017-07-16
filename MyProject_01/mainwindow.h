#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "MenuDialog.h"
#include "Company.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    bool isLegal();
    bool hasNull();
    ~MainWindow();

private slots:
    void on_logBtn_clicked();

private:
    Ui::MainWindow *ui;
    MenuDialog * menuDlg;
    Company * company;
};

#endif // MAINWINDOW_H
