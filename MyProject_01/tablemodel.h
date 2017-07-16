#ifndef TABLEMODEL_H
#define TABLEMODEL_H
#include <QSqlTableModel>
#include <QVariant>

class TableModel: public  QSqlTableModel
{
public:
    explicit TableModel(QWidget *parent = 0);
    QVariant data(const QModelIndex &index, int role) const;
};

#endif // TABLEMODEL_H
