#include "proadddialog.h"
#include "ui_proadddialog.h"
#include <QMessageBox>
#include <QSqlRecord>
#include <QSqlField>

proAddDialog::proAddDialog(QSqlTableModel * tableModel ,QLabel * lab,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::proAddDialog)
{
    ui->setupUi(this);
    model = tableModel;
    label = lab;
}

proAddDialog::~proAddDialog()
{
    delete ui;
}


void proAddDialog::on_OKbtn_clicked()
{
    if(ui->lineEdit->text().isEmpty()||ui->lineEdit_2->text().isEmpty()||ui->lineEdit_3->text().isEmpty()){
        QMessageBox::warning(this,tr("提示"),tr("请填写完整信息"),QMessageBox::Ok);
    }else{
        Project * pro = new Project(ui->lineEdit->text(),ui->lineEdit_2->text(),ui->lineEdit_3->text());
        QSqlRecord record;
         QSqlField f1("pro_id",QVariant::String);
         QSqlField f2("pro_name",QVariant::String);
         QSqlField f3("pro_man",QVariant::String);
          f1.setValue(QVariant(pro->getID()));
          f2.setValue(QVariant(pro->getName()));
          f3.setValue(QVariant(pro->getManager()));
          record.append(f1);
          record.append(f2);
          record.append(f3);
          model->insertRecord(-1,record);
          model->submitAll();
          this->close();
          label->setText(QString::number(model->rowCount()));
    }
}

void proAddDialog::on_CancelBtn_clicked()
{
    model->revertAll();
    this->close();
}
