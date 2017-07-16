#include "prowindow.h"
#include "ui_prowindow.h"

proWindow::proWindow(const QString proTable,QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::proWindow)
{
    ui->setupUi(this);
    conndlg.addSqliteConnection();
    conndlg.creatDB();

    proTableModel = new QSqlTableModel(this);
    proTableModel->setTable(proTable);

    proTableModel->setHeaderData(0,Qt::Horizontal,tr("编号"));
    proTableModel->setHeaderData(1,Qt::Horizontal,tr("名称"));
    proTableModel->setHeaderData(2,Qt::Horizontal,tr("主管"));
    proTableModel->setEditStrategy(QSqlTableModel::OnManualSubmit);
    proTableModel->select();

    ui->tableView->setSortingEnabled(true);
    ui->tableView->setSelectionBehavior(QAbstractItemView::SelectRows);
    ui->tableView->setSelectionMode(QAbstractItemView::SingleSelection);
    ui->tableView->setShowGrid(false);
    ui->tableView->setAlternatingRowColors(true);
    ui->tableView->setModel(proTableModel);
    ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
    //ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::ResizeToContents);
    ui->tableView->setColumnWidth(0,205);
    ui->tableView->setColumnWidth(1,205);
    ui->tableView->setColumnWidth(2,205);

    ui->countLab->setText(QString::number(proTableModel->rowCount()));

}

proWindow::~proWindow()
{
    delete ui;
}

void proWindow::on_addBtn_clicked()
{
    proAddDlg = new proAddDialog(proTableModel,ui->countLab,this);
    proAddDlg->setModal(true);
    proAddDlg->setWindowTitle(tr("新增项目"));
    proAddDlg->show();
}

void deleteOneline(int nNum, QString &strall)
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
void DeleteOnelineInFile(int nNumLine, QString filename)//删除文件中的记录
{
    QString strall;
    QFile readfile(filename);
    if(readfile.open(QIODevice::ReadOnly))
    {
        QTextStream stream(&readfile);
        strall=stream.readAll();
    }
    readfile.close();
    deleteOneline(nNumLine, strall);

    QFile writefile(filename);
    if(writefile.open(QIODevice::WriteOnly))
    {
        QTextStream wrtstream(&writefile);
        wrtstream<<strall;
    }
    writefile.close();


}
void proWindow::on_delBtn_clicked()
{
            int curRow = ui->tableView->currentIndex().row();
            QModelIndex index = ui->tableView->currentIndex();

            QSqlQuery query;
            curRow = ui->tableView->currentIndex().row();
            index = ui->tableView->currentIndex();
             QString id=index.sibling(curRow,0).data().toString();
             query.prepare("delete from information where pro_id = :id");
             query.bindValue(":id",id);
             query.exec();
             ui->countLab->setText(QString::number(proTableModel->rowCount()-1));
             proTableModel->removeRow(curRow);
             proTableModel->submitAll();

}

void proWindow::on_srhBtn_clicked()
{
    for (int i = 0; i < proTableModel->rowCount(); i++){
          QSqlRecord record =  proTableModel->record(i);
          if (record.value("pro_name").toString() == ui->lineEdit->text()){
              QMessageBox::information(this,"查询结果","编 号：     "+record.value("pro_id").toString()+"\n"+
                                      "名 称：     "+record.value("pro_name").toString()+"\n"+
                                      "主 管：     "+record.value("pro_man").toString()+"\n",
                                       QMessageBox::Ok);
              break;
          }

    }
}
