#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QtCore>
#include <QtDebug>
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //connect(ui->logBtn,SIGNAL(clicked()),this,SLOT(reject()));  //关闭主窗体
    ui->qiye_psd->setEchoMode (QLineEdit::Password);
}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_logBtn_clicked()
{
    if(isLegal()){
        company = new Company(ui->qiye_name->text(),ui->qiye_address->text());
        menuDlg = new MenuDialog(company,this);
        menuDlg->setModal(false);
        menuDlg->setWindowTitle(ui->qiye_name->text()+tr("企业管理"));
        menuDlg->show();
    }else if(hasNull()){
     QMessageBox::warning(this,tr("提示"),tr("请填写完整信息"),QMessageBox::Ok);
    }else{
     QMessageBox::critical(this,tr("Error"),tr("未找到该企业\n登录失败！"),QMessageBox::Ok);
    }
}
bool MainWindow::isLegal(){
    /*if(ui->qiye_name->text()=="4399" &&
       ui->qiye_address->text()=="北京" &&
       ui->qiye_id->text()=="2015012919" &&
       ui->qiye_psd->text()=="123456")
        return true;
    return false;*/
    return true;
}
bool MainWindow::hasNull(){
    if(ui->qiye_name->text().isEmpty()||
       ui->qiye_address->text().isEmpty()||
       ui->qiye_id->text().isEmpty()||
       ui->qiye_psd->text().isEmpty())
        return true;
    return false;
}
