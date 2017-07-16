#include "menudialog.h"
#include "ui_menudialog.h"
#include <QMessageBox>
#include <QPixmap>
#include <QSize>

MenuDialog::MenuDialog(Company * com , QWidget *parent) :
    QDialog(parent),
    ui(new Ui::MenuDialog)
{
    ui->setupUi(this);
    company = com;

    QPixmap adultpix(":/imagine/com.png");
    ui->qiye_info->setIcon(adultpix);
    ui->qiye_info->setIconSize(QSize(71,120));

    QPixmap aptpix(":/imagine/apt.png");
    ui->aptManageBtn->setIcon(aptpix);
    ui->aptManageBtn->setIconSize(QSize(71,120));

    QPixmap propix(":/imagine/pro.png");
    ui->proManageBtn->setIcon(propix);
    ui->proManageBtn->setIconSize(QSize(71,120));

    QPixmap emppix(":/imagine/peo.png");
    ui->epyManageBtn->setIcon(emppix);
    ui->epyManageBtn->setIconSize(QSize(71,120));

}

MenuDialog::~MenuDialog()
{
    delete ui;
}

void MenuDialog::on_qiye_info_clicked()
{
    QMessageBox::about(this,tr("企业信息"),company->getComMessage());
}

void MenuDialog::on_aptManageBtn_clicked()
{
    //QFile * carDetails = new QFile("attribs.xml");
    aptWin = new apartWindow("apartTable");
    aptWin->setWindowTitle(tr("部门信息"));
    //this->hide();
    conndlg = new ConnDlg;
    aptWin->show();
}

void MenuDialog::on_proManageBtn_clicked()
{
    proWin = new proWindow("proTable");
    proWin->setWindowTitle(tr("项目信息"));
    //this->hide();
    conndlg = new ConnDlg;
    proWin->show();
}

void MenuDialog::on_epyManageBtn_clicked()
{

    empWin = new empWindow("empTable");
    empWin->setWindowTitle(tr("人员信息"));
    //this->hide();
    conndlg = new ConnDlg;
    empWin->show();
}

void MenuDialog::on_commandLinkButton_clicked()
{
    this->close();
}
