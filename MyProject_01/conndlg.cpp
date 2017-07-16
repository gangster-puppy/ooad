#include "conndlg.h"
#include <QFileDialog>
#include <QAxObject>

ConnDlg::ConnDlg(QWidget *parent) :
    QWidget(parent)
{
}
void ConnDlg::addSqliteConnection(){
    QSqlDatabase db;
    if(QSqlDatabase::contains("qt_sql_default_connection"))
    db = QSqlDatabase::database("qt_sql_default_connection");
    else
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("databasefile");
    if(!db.open()){
        QMessageBox::warning(this,tr("错误"),tr("数据库连接失败！"),QMessageBox::Ok);
    }
}
void ConnDlg::creatDB(){

    //QFile file1("C:/Qt/Qt5.3.1/Tools/QtCreator/bin/MyProject_01/001.csv");
    QFile file1(":/file/001.csv");

    if(!file1.open(QIODevice::ReadOnly|QIODevice::Text)){
        QMessageBox::warning(this,tr("错误"),tr("数据文件打开失败！"),QMessageBox::Ok);
    }
    QSqlQuery query1;
    query1.exec("create table apartTable (apt_id varchar(10) primary key,apt_name varchar(20),apt_man varchar(10),apt_rank varchar(4))");
    QStringList list1;
    list1.clear();
    QTextStream in1(&file1);
    while(!in1.atEnd()){
        QString fileLine = in1.readLine();
        list1 = fileLine.split(",",QString::SkipEmptyParts);
        query1.prepare("INSERT INTO apartTable(apt_id,apt_name,apt_man,apt_rank) VALUES (:id,:name,:man,:rank)");
        query1.bindValue(":id",list1.at(0));
        query1.bindValue(":name",list1.at(1));
        query1.bindValue(":man",list1.at(2));
        query1.bindValue(":rank",list1.at(3));
        query1.exec();
    }
    file1.close();

    //QFile file2("C:/Qt/Qt5.3.1/Tools/QtCreator/bin/MyProject_01/2.csv");
    QFile file2(":/file/2.csv");
    if(!file2.open(QIODevice::ReadOnly|QIODevice::Text)){
        QMessageBox::warning(this,tr("错误"),tr("数据文件打开失败！"),QMessageBox::Ok);
    }
    QSqlQuery query2;
    query2.exec("create table proTable (pro_id varchar(10) primary key,pro_name varchar(20),pro_man varchar(10))");
    QStringList list2;
    list2.clear();
    QTextStream in2(&file2);
    while(!in2.atEnd()){
        QString fileLine = in2.readLine();
        list2 = fileLine.split(",",QString::SkipEmptyParts);
        query2.prepare("INSERT INTO proTable(pro_id,pro_name,pro_man) VALUES (:id,:name,:man)");
        query2.bindValue(":id",list2.at(0));
        query2.bindValue(":name",list2.at(1));
        query2.bindValue(":man",list2.at(2));
        query2.exec();
    }
    file2.close();

    //QFile file3("C:/Qt/Qt5.3.1/Tools/QtCreator/bin/MyProject_01/3.csv");
        QFile file3(":/file/3.csv");
        if(!file3.open(QIODevice::ReadOnly|QIODevice::Text)){
            QMessageBox::warning(this,tr("错误"),tr("数据文件打开失败！"),QMessageBox::Ok);
        }
        QSqlQuery query3;
        query3.exec("create table empTable(emp_id varchar(20) primary key,emp_name varchar(20) unique,emp_sex varchar(20),emp_age varchar(20),emp_apt varchar(20),emp_pro varchar(20),emp_role varchar(20))");
        QStringList list3;
        list3.clear();
        QTextStream in3(&file3);
        while(!in3.atEnd()){
            QString fileLine = in3.readLine();
            list3 = fileLine.split(",",QString::SkipEmptyParts);
            query3.prepare("INSERT INTO empTable VALUES (:id,:name,:sex,:age,:apt,:pro,:role)");
            query3.bindValue(":id",list3.at(0));
            query3.bindValue(":name",list3.at(1));
            query3.bindValue(":sex",list3.at(2));
            query3.bindValue(":age",list3.at(3));
            query3.bindValue(":apt",list3.at(4));
            query3.bindValue(":pro",list3.at(5));
            query3.bindValue(":role",list3.at(6));
            query3.exec();
        }
        file3.close();
}
