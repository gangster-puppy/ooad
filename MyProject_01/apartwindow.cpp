#include "apartwindow.h"
#include <QAxObject>
#include <QSqlRecord>
#include <QGridLayout>
#include <QAbstractItemView>
#include <QHeaderView>
#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QMessageBox>
#include <QSqlRecord>



apartWindow::apartWindow(const QString apartTable,QWidget *parent) :
    QMainWindow(parent)
{
    conndlg.addSqliteConnection();
    conndlg.creatDB();
    searchBtn = new QPushButton("查询");
    searchEdit = new QLineEdit;
    searchLab = new QLabel("请输入名称：");

    factoryModel = new QSqlTableModel(this);
    factoryModel->setTable(apartTable);
    factoryModel->setEditStrategy(QSqlTableModel::OnManualSubmit);

    factoryModel->setHeaderData(0,Qt::Horizontal,tr("编号"));
    factoryModel->setHeaderData(1,Qt::Horizontal,tr("名称"));
    factoryModel->setHeaderData(2,Qt::Horizontal,tr("主管"));
    factoryModel->setHeaderData(3,Qt::Horizontal,tr("级别"));
    factoryModel->select();

    QGroupBox *factory = createFactoryGroupBox();

    QGridLayout *bootLayout = new QGridLayout;
    bootLayout->addWidget(searchLab,0,0);
    bootLayout->addWidget(searchEdit,0,1);
    bootLayout->addWidget(searchBtn,0,2);

    connect(searchBtn,SIGNAL(clicked()),this,SLOT(srhApart()));
    //布局
    QGridLayout *layout = new QGridLayout;
    layout->addWidget(factory, 0, 0);
    layout->setColumnMinimumWidth(0, 500);
    layout->addLayout(bootLayout,1,0);

    QWidget *widget = new QWidget;
    widget->setLayout(layout);
    setCentralWidget(widget);
    createMenuBar();
}

apartWindow::~apartWindow()
{
}
QGroupBox* apartWindow::createFactoryGroupBox()
{
    factoryView = new QTableView;
    //factoryView->setEditTriggers(QAbstractItemView::EditTriggers);
    factoryView->setSortingEnabled(true);
    factoryView->setSelectionBehavior(QAbstractItemView::SelectRows);
    factoryView->setSelectionMode(QAbstractItemView::SingleSelection);
    factoryView->setShowGrid(false);
    factoryView->setAlternatingRowColors(true);
    factoryView->setModel(factoryModel);
    factoryView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);

    QGroupBox *box = new QGroupBox(tr("部门信息表"));
    QGridLayout *layout = new QGridLayout;
    layout->addWidget(factoryView, 0, 0);
    box->setLayout(layout);

    return box;
}

void apartWindow::addApart(){
    aptAddDlg = new aptAddDialog(factoryModel,this);
    aptAddDlg->setModal(true);
    aptAddDlg->setWindowTitle("新增部门");
    aptAddDlg->show();
}

void DeleteOneline(int nNum, QString &strall)
{
    int nLine=0;
    int Index=0;
    //算出行数nLine
    while(Index!=-1)
    {
        Index=strall.indexOf('\n',Index+1);
        nLine++;
    }

    //如果是直接从位置0开始删除\n算一个字符"abc\nme\ndo" \n的index是3要删除3+1个字符，即index+1个
    if(nNum==0)
    {
        int nIndex=strall.indexOf('\n');
        strall.remove(0,nIndex+1);
    }
    else
    {
        int nTemp=nNum;
        int nIndex=0,nIndex2=0;
        while(nTemp--)
        {
            //
            nIndex=strall.indexOf('\n',nIndex+1);//这里会更新nIndex
            if(nIndex!=-1)//说明是有效的
            {
                nIndex2=strall.indexOf('\n',nIndex+1);
            }
        }
        //删除的行不是最后一行（从nIndex+1这个位置起nIndex2-nIndex个字符全部抹去）
        if(nNum<nLine-1)
        {
            strall.remove(nIndex+1, nIndex2-nIndex);//不用减一
        }
        //删除的是最后一行（从nIndex起始len-nIndex个字符全抹去）
        //不能从nIndex+1处开始，
        else if(nNum==nLine-1)
        {
            int len=strall.length();
            strall.remove(nIndex,len-nIndex);
        }
        else
        {

        }

    }
}
void deleteOnelineInFile(int nNumLine, QString filename)//删除文件中的记录
{
    QString strall;
    QFile readfile(filename);
    if(readfile.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&readfile);
        strall=stream.readAll();
    }
    readfile.close();
    DeleteOneline(nNumLine, strall);

    QFile writefile(filename);
    if(writefile.open(QIODevice::WriteOnly))
    {
        QTextStream wrtstream(&writefile);
        wrtstream<<strall;
    }
    writefile.close();


}
void apartWindow::delApart(){
    /*QModelIndexList selection = factoryView->selectionModel()->selectedRows(0);
    if(!selection.empty()){
       // QModelIndex idIndex = selection.at(0);
        QMessageBox::StandardButton button;
        button = QMessageBox::question(this,tr("删除部门记录"),tr("确认删除该记录？"),QMessageBox::Yes|QMessageBox::No);
        if(button == QMessageBox::Yes){
            factoryModel->removeRow(factoryView->currentIndex().row());
            //factoryModel->rowCount()--;
            factoryModel->submitAll();
            deleteOnelineInFile(factoryView->currentIndex().row(),QString("001.csv"));

        }else{
             QMessageBox::information(this, tr("删除部门记录"),tr("请选择要删除的记录。"));
        }
    }*/
    int curRow = factoryView->currentIndex().row();
    QModelIndex index = factoryView->currentIndex();

    QSqlQuery query;
    curRow = factoryView->currentIndex().row();
    index = factoryView->currentIndex();
     QString id=index.sibling(curRow,0).data().toString();
     query.prepare("delete from information where apt_id = :id");
     query.bindValue(":id",id);
     query.exec();
     factoryModel->removeRow(curRow);
     factoryModel->submitAll();
}

void apartWindow::srhApart(){
    for (int i = 0; i < factoryModel->rowCount(); i++){
          QSqlRecord record =  factoryModel->record(i);
          if (record.value("apt_name").toString() == searchEdit->text()){
              QMessageBox::information(this,"查询结果","编 号：     "+record.value("apt_id").toString()+"\n"+
                                      "名 称：     "+record.value("apt_name").toString()+"\n"+
                                      "主 管：     "+record.value("apt_man").toString()+"\n"+
                                      "级 别：     "+record.value("apt_rank").toString()+"\n",
                                       QMessageBox::Ok);
              break;
          }

    }
}

void apartWindow::saveApart(){
     factoryModel->database().transaction(); //开始事务操作
     if ( factoryModel->submitAll()) {
            factoryModel->database().commit(); //提交
     } else {
       factoryModel->database().rollback(); //回滚
      QMessageBox::warning(this, tr("tableModel"), tr("数据库错误: %1" ).arg( factoryModel->lastError().text()));
  }
}

void apartWindow::createMenuBar()
{
    QAction *addAction = new QAction(tr("添加"), this);
    QAction *deleteAction = new QAction(tr("删除"), this);
    QAction *quitAction = new QAction(tr("退出"), this);
    QAction *saveAction = new QAction(tr("保存"), this);


    addAction->setShortcut(tr("Ctrl+A"));
    deleteAction->setShortcut(tr("Ctrl+D"));
    quitAction->setShortcut(tr("Ctrl+Q"));
    saveAction->setShortcut(tr("Ctrl+S"));

    QMenu *fileMenu = menuBar()->addMenu(tr("操作菜单"));
    fileMenu->addAction(addAction);
    fileMenu->addAction(deleteAction);
    fileMenu->addAction(saveAction);
    fileMenu->addSeparator();
    fileMenu->addAction(quitAction);

    connect(deleteAction, SIGNAL(triggered(bool)), this, SLOT(delApart()));
    connect(quitAction, SIGNAL(triggered(bool)), this, SLOT(close()));
    connect(addAction, SIGNAL(triggered(bool)), this, SLOT(addApart()));
    connect(saveAction, SIGNAL(triggered(bool)), this, SLOT(saveApart()));
}

