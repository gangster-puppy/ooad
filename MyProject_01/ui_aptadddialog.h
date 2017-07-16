/********************************************************************************
** Form generated from reading UI file 'aptadddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.2.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_APTADDDIALOG_H
#define UI_APTADDDIALOG_H

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

class Ui_aptAddDialog
{
public:
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QLineEdit *edit_rank;
    QLineEdit *edit_id;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *edit_name;
    QLineEdit *edit_man;
    QLabel *label_5;
    QLabel *label_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QPushButton *okBtn;
    QPushButton *cancelBtn;

    void setupUi(QDialog *aptAddDialog)
    {
        if (aptAddDialog->objectName().isEmpty())
            aptAddDialog->setObjectName(QStringLiteral("aptAddDialog"));
        aptAddDialog->resize(409, 229);
        QFont font;
        font.setFamily(QString::fromUtf8("\346\226\260\345\256\213\344\275\223"));
        aptAddDialog->setFont(font);
        layoutWidget = new QWidget(aptAddDialog);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 10, 301, 221));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        edit_rank = new QLineEdit(layoutWidget);
        edit_rank->setObjectName(QStringLiteral("edit_rank"));

        gridLayout->addWidget(edit_rank, 3, 1, 1, 1);

        edit_id = new QLineEdit(layoutWidget);
        edit_id->setObjectName(QStringLiteral("edit_id"));

        gridLayout->addWidget(edit_id, 0, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout->addWidget(label_4, 2, 0, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        edit_name = new QLineEdit(layoutWidget);
        edit_name->setObjectName(QStringLiteral("edit_name"));

        gridLayout->addWidget(edit_name, 1, 1, 1, 1);

        edit_man = new QLineEdit(layoutWidget);
        edit_man->setObjectName(QStringLiteral("edit_man"));

        gridLayout->addWidget(edit_man, 2, 1, 1, 1);

        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout->addWidget(label_5, 3, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        widget = new QWidget(aptAddDialog);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(320, 140, 81, 65));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        okBtn = new QPushButton(widget);
        okBtn->setObjectName(QStringLiteral("okBtn"));

        verticalLayout->addWidget(okBtn);

        cancelBtn = new QPushButton(widget);
        cancelBtn->setObjectName(QStringLiteral("cancelBtn"));

        verticalLayout->addWidget(cancelBtn);


        retranslateUi(aptAddDialog);

        QMetaObject::connectSlotsByName(aptAddDialog);
    } // setupUi

    void retranslateUi(QDialog *aptAddDialog)
    {
        aptAddDialog->setWindowTitle(QApplication::translate("aptAddDialog", "Dialog", 0));
        label_4->setText(QApplication::translate("aptAddDialog", "\344\270\273    \347\256\241\357\274\232", 0));
        label_3->setText(QApplication::translate("aptAddDialog", "\345\220\215    \347\247\260\357\274\232", 0));
        label_5->setText(QApplication::translate("aptAddDialog", "\347\272\247    \345\210\253\357\274\232", 0));
        label_2->setText(QApplication::translate("aptAddDialog", "\347\274\226    \345\217\267\357\274\232", 0));
        okBtn->setText(QApplication::translate("aptAddDialog", "\347\241\256\350\256\244", 0));
        cancelBtn->setText(QApplication::translate("aptAddDialog", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class aptAddDialog: public Ui_aptAddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_APTADDDIALOG_H
