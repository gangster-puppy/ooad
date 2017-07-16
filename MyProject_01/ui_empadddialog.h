/********************************************************************************
** Form generated from reading UI file 'empadddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPADDDIALOG_H
#define UI_EMPADDDIALOG_H

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

class Ui_empAddDialog
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *IDEdit;
    QLabel *label_2;
    QLineEdit *nameEdit;
    QLabel *label_3;
    QLineEdit *sexEdit;
    QLabel *label_4;
    QLineEdit *ageEdit;
    QLabel *label_5;
    QLineEdit *aptEdit;
    QLabel *label_6;
    QLineEdit *proEdit;
    QLabel *label_7;
    QLineEdit *roleEdit;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QPushButton *okBtn;
    QPushButton *cancleBtn;

    void setupUi(QDialog *empAddDialog)
    {
        if (empAddDialog->objectName().isEmpty())
            empAddDialog->setObjectName(QStringLiteral("empAddDialog"));
        empAddDialog->resize(409, 299);
        layoutWidget = new QWidget(empAddDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(11, 0, 301, 271));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        IDEdit = new QLineEdit(layoutWidget);
        IDEdit->setObjectName(QStringLiteral("IDEdit"));

        gridLayout->addWidget(IDEdit, 0, 1, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        nameEdit = new QLineEdit(layoutWidget);
        nameEdit->setObjectName(QStringLiteral("nameEdit"));

        gridLayout->addWidget(nameEdit, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        sexEdit = new QLineEdit(layoutWidget);
        sexEdit->setObjectName(QStringLiteral("sexEdit"));

        gridLayout->addWidget(sexEdit, 2, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        ageEdit = new QLineEdit(layoutWidget);
        ageEdit->setObjectName(QStringLiteral("ageEdit"));

        gridLayout->addWidget(ageEdit, 3, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 4, 0, 1, 1);

        aptEdit = new QLineEdit(layoutWidget);
        aptEdit->setObjectName(QStringLiteral("aptEdit"));

        gridLayout->addWidget(aptEdit, 4, 1, 1, 1);

        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout->addWidget(label_6, 5, 0, 1, 1);

        proEdit = new QLineEdit(layoutWidget);
        proEdit->setObjectName(QStringLiteral("proEdit"));

        gridLayout->addWidget(proEdit, 5, 1, 1, 1);

        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout->addWidget(label_7, 6, 0, 1, 1);

        roleEdit = new QLineEdit(layoutWidget);
        roleEdit->setObjectName(QStringLiteral("roleEdit"));

        gridLayout->addWidget(roleEdit, 6, 1, 1, 1);

        layoutWidget1 = new QWidget(empAddDialog);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(330, 200, 95, 65));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        okBtn = new QPushButton(layoutWidget1);
        okBtn->setObjectName(QStringLiteral("okBtn"));

        verticalLayout->addWidget(okBtn);

        cancleBtn = new QPushButton(layoutWidget1);
        cancleBtn->setObjectName(QStringLiteral("cancleBtn"));

        verticalLayout->addWidget(cancleBtn);


        retranslateUi(empAddDialog);

        QMetaObject::connectSlotsByName(empAddDialog);
    } // setupUi

    void retranslateUi(QDialog *empAddDialog)
    {
        empAddDialog->setWindowTitle(QApplication::translate("empAddDialog", "Dialog", 0));
        label->setText(QApplication::translate("empAddDialog", "\345\267\245     \345\217\267 \357\274\232", 0));
        label_2->setText(QApplication::translate("empAddDialog", "\345\247\223     \345\220\215 \357\274\232", 0));
        label_3->setText(QApplication::translate("empAddDialog", "\346\200\247     \345\210\253 \357\274\232", 0));
        label_4->setText(QApplication::translate("empAddDialog", "\345\271\264     \351\276\204 \357\274\232", 0));
        label_5->setText(QApplication::translate("empAddDialog", "\346\211\200\345\261\236\351\203\250\351\227\250  \357\274\232 ", 0));
        label_6->setText(QApplication::translate("empAddDialog", "\346\211\200\345\261\236\351\241\271\347\233\256\347\273\204\357\274\232", 0));
        label_7->setText(QApplication::translate("empAddDialog", "\350\247\222\350\211\262\345\220\215\347\247\260  :", 0));
        okBtn->setText(QApplication::translate("empAddDialog", "\347\241\256\350\256\244", 0));
        cancleBtn->setText(QApplication::translate("empAddDialog", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class empAddDialog: public Ui_empAddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPADDDIALOG_H
