#include "empadddialog.h"
#include "ui_empadddialog.h"
#include <QMessageBox>
#include <QSqlRecord>
#include <QSqlField>

empAddDialog::empAddDialog(QSqlTableModel *tableModel,QLabel * lab,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::empAddDialog)
{
    ui->setupUi(this);
    model = tableModel;
    label = lab;
}

empAddDialog::~empAddDialog()
{
    delete ui;
}

void empAddDialog::on_okBtn_clicked()
{
    if(ui->IDEdit->text().isEmpty() ||
            ui->nameEdit->text().isEmpty() ||
            ui->sexEdit->text().isEmpty() ||
            ui->ageEdit->text().isEmpty() ||
            ui->aptEdit->text().isEmpty() ||
            ui->proEdit->text().isEmpty() ||
            ui->roleEdit->text().isEmpty()){
        QMessageBox::warning(this,tr("提示"),tr("请填写完整信息"),QMessageBox::Ok);
    }else{
        Employee * emp = new Employee(ui->IDEdit->text(),ui->nameEdit->text(),ui->sexEdit->text(),ui->ageEdit->text(),ui->aptEdit->text(),ui->proEdit->text(),ui->roleEdit->text());
        QSqlRecord record;
         QSqlField f1("emp_id",QVariant::String);
         QSqlField f2("emp_name",QVariant::String);
         QSqlField f3("emp_sex",QVariant::String);
         QSqlField f4("emp_age",QVariant::String);
         QSqlField f5("emp_apt",QVariant::String);
         QSqlField f6("emp_pro",QVariant::String);
         QSqlField f7("emp_role",QVariant::String);
          f1.setValue(QVariant(emp->getID()));
          f2.setValue(QVariant(emp->getName()));
          f3.setValue(QVariant(emp->getSex()));
          f4.setValue(QVariant(emp->getAge()));
          f5.setValue(QVariant(emp->getTo_apt()));
          f6.setValue(QVariant(emp->getTo_pro()));
          f7.setValue(QVariant(emp->getRole()));

          record.append(f1);
          record.append(f2);
          record.append(f3);
          record.append(f4);
          record.append(f5);
          record.append(f6);
          record.append(f7);
          model->insertRecord(-1,record);
          model->submitAll();
          label->setText(QString::number(model->rowCount()));
          this->close();
    }
}

void empAddDialog::on_cancleBtn_clicked()
{
    this->close();
}
