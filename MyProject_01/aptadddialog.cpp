#include "aptadddialog.h"
#include "ui_aptadddialog.h"
#include <QSqlRecord>
#include <QGridLayout>
#include <QAbstractItemView>
#include <QHeaderView>
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QMessageBox>
#include <QSqlRecord>
#include <QSqlField>
#include <QDialogButtonBox>
#include <QPushButton>
#include <QSqlQuery>

aptAddDialog::aptAddDialog(QSqlTableModel * tableModel,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::aptAddDialog)
{
    ui->setupUi(this);
    model = tableModel;
}

aptAddDialog::~aptAddDialog()
{
    delete ui;
}


void aptAddDialog::on_okBtn_clicked()
{
    QString id(ui->edit_id->text());
    QString name(ui->edit_name->text());
    QString man(ui->edit_man->text());
    QString rank(ui->edit_rank->text());
        if(id.isEmpty()||name.isEmpty()||man.isEmpty()||rank.isEmpty()){
                QMessageBox::information(this,tr("Tip"),tr("请输入完整信息！"),QMessageBox::Ok);
            }
        else {
            apartment = new Apartment(id,name,man,rank);
            QSqlRecord record;
            QSqlField f1("apt_id",QVariant::String);
            QSqlField f2("apt_name",QVariant::String);
            QSqlField f3("apt_man",QVariant::String);
            QSqlField f4("apt_rank",QVariant::String);
            f1.setValue(QVariant(apartment->getID()));
            f2.setValue(QVariant(apartment->getName()));
            f3.setValue(QVariant(apartment->getManager()));
            f4.setValue(QVariant(apartment->getRank()));
            record.append(f1);
            record.append(f2);
            record.append(f3);
            record.append(f4);
            model->insertRecord(-1,record);
            model->submitAll();
            /*QSqlQuery query;
            query.exec("INSERT INTO apartTable VALUES(id,name,man,rank)");*/
            this->close();
        }

}

void aptAddDialog::on_cancelBtn_clicked()
{
    this->close();
}
