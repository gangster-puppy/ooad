/********************************************************************************
** Form generated from reading UI file 'proadddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROADDDIALOG_H
#define UI_PROADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_proAddDialog
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_3;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *OKbtn;
    QPushButton *CancelBtn;

    void setupUi(QDialog *proAddDialog)
    {
        if (proAddDialog->objectName().isEmpty())
            proAddDialog->setObjectName(QStringLiteral("proAddDialog"));
        proAddDialog->resize(409, 229);
        layoutWidget = new QWidget(proAddDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(21, 24, 281, 151));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_3 = new QLineEdit(layoutWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_2 = new QLineEdit(layoutWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit = new QLineEdit(layoutWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        widget = new QWidget(proAddDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(320, 130, 71, 65));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        OKbtn = new QPushButton(widget);
        OKbtn->setObjectName(QStringLiteral("OKbtn"));

        verticalLayout->addWidget(OKbtn);

        CancelBtn = new QPushButton(widget);
        CancelBtn->setObjectName(QStringLiteral("CancelBtn"));

        verticalLayout->addWidget(CancelBtn);


        retranslateUi(proAddDialog);

        QMetaObject::connectSlotsByName(proAddDialog);
    } // setupUi

    void retranslateUi(QDialog *proAddDialog)
    {
        proAddDialog->setWindowTitle(QApplication::translate("proAddDialog", "Dialog", 0));
        label_3->setText(QApplication::translate("proAddDialog", "\344\270\273    \347\256\241\357\274\232", 0));
        label_2->setText(QApplication::translate("proAddDialog", "\345\220\215    \347\247\260\357\274\232", 0));
        label->setText(QApplication::translate("proAddDialog", "\347\274\226    \345\217\267\357\274\232", 0));
        OKbtn->setText(QApplication::translate("proAddDialog", "\347\241\256\350\256\244", 0));
        CancelBtn->setText(QApplication::translate("proAddDialog", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class proAddDialog: public Ui_proAddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROADDDIALOG_H
