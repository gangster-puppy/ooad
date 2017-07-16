#include "empwindow.h"
#include "ui_empwindow.h"

empWindow::empWindow(const QString empTable,QWidget *parent):
    QMainWindow(parent),
    ui(new Ui::empWindow)
{
    ui->setupUi(this);
    conndlg.addSqliteConnection();
    conndlg.creatDB();

    empTableModel = new QSqlTableModel(this);
    empTableModel->setTable(empTable);

    empTableModel->setHeaderData(0,Qt::Horizontal,tr("工号"));
    empTableModel->setHeaderData(1,Qt::Horizontal,tr("姓名"));
    empTableModel->setHeaderData(2,Qt::Horizontal,tr("性别"));
    empTableModel->setHeaderData(3,Qt::Horizontal,tr("年龄"));
    empTableModel->setHeaderData(4,Qt::Horizontal,tr("所属部门"));
    empTableModel->setHeaderData(5,Qt::Horizontal,tr("所属项目组"));
    empTableModel->setHeaderData(6,Qt::Horizontal,tr("角色名称"));

    empTableModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    empTableModel->select();

    ui->tableView->setSortingEnabled(true);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setShowGrid(false);
    ui->tableView->setAlternatingRowColors(true);
    ui->tableView->setModel(empTableModel);
    ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    //ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableView->setColumnWidth(0,60);
    ui->tableView->setColumnWidth(1,60);
    ui->tableView->show();
    ui->countLab->setText(QString::number(empTableModel->rowCount()));
}

empWindow::~empWindow()
{
    empTableModel->clear();
    delete ui;
}

void empWindow::on_addBtn_clicked()
{
    empAddDlg = new empAddDialog(empTableModel,ui->countLab,this);
    empAddDlg->setModal(true);
    empAddDlg->setWindowTitle(tr("新增员工"));
    empAddDlg->show();
}
void empWindow::on_srhBtn_clicked()
{
    for (int i = 0; i < empTableModel->rowCount(); i++){
          QSqlRecord record =  empTableModel->record(i);
          if (record.value("emp_name").toString() == ui->lineEdit->text()){
              QMessageBox::information(this,"查询结果","编 号：     "+record.value("emp_id").toString()+"\n"+
                                      "名 字：     "+record.value("emp_name").toString()+"\n"+
                                      "性 别：     "+record.value("emp_sex").toString()+"\n"+
                                      "年 龄：     "+record.value("emp_age").toString()+"\n"+
                                      "所属部门：     "+record.value("emp_apt").toString()+"\n"+
                                      "所属项目组：     "+record.value("emp_pro").toString()+"\n"+
                                      "担任角色：     "+record.value("emp_role").toString()+"\n",
                                       QMessageBox::Ok);
              break;
          }

    }
}


void empWindow::on_DelBtn_clicked()
{
    int curRow = ui->tableView->currentIndex().row();
    QModelIndex index = ui->tableView->currentIndex();
    QSqlQuery query;
    curRow = ui->tableView->currentIndex().row();
    index = ui->tableView->currentIndex();
     QString id=index.sibling(curRow,0).data().toString();
     query.prepare("delete from empTable where emp_id = :id");
     query.bindValue(":id",id);
     query.exec();
     empTableModel->removeRow(curRow);
     ui->countLab->setText(QString::number(empTableModel->rowCount()-1));
     empTableModel->submitAll();
}
