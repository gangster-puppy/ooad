#include "tablemodel.h"

TableModel::TableModel(QWidget *parent):QSqlTableModel(parent)
{
}
QVariant TableModel::data(const QModelIndex &index, int role) const{
    if (role == Qt::BackgroundRole) {
                QColor color = QColor(Qt::green);
                return QBrush(color);
     }
    return QSqlTableModel::data(index, role);
}
