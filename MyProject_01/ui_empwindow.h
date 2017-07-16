/********************************************************************************
** Form generated from reading UI file 'empwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EMPWINDOW_H
#define UI_EMPWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_empWindow
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addBtn;
    QPushButton *DelBtn;
    QPushButton *srhBtn;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *countLab;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *empWindow)
    {
        if (empWindow->objectName().isEmpty())
            empWindow->setObjectName(QStringLiteral("empWindow"));
        empWindow->resize(621, 413);
        centralwidget = new QWidget(empWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 601, 271));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 300, 72, 15));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 330, 621, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        addBtn = new QPushButton(layoutWidget);
        addBtn->setObjectName(QStringLiteral("addBtn"));

        horizontalLayout->addWidget(addBtn);

        DelBtn = new QPushButton(layoutWidget);
        DelBtn->setObjectName(QStringLiteral("DelBtn"));

        horizontalLayout->addWidget(DelBtn);

        srhBtn = new QPushButton(layoutWidget);
        srhBtn->setObjectName(QStringLiteral("srhBtn"));

        horizontalLayout->addWidget(srhBtn);

        DelBtn->raise();
        addBtn->raise();
        srhBtn->raise();
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(280, 290, 151, 20));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(442, 290, 171, 21));
        countLab = new QLabel(centralwidget);
        countLab->setObjectName(QStringLiteral("countLab"));
        countLab->setGeometry(QRect(80, 300, 72, 15));
        empWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(empWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 621, 26));
        empWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(empWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        empWindow->setStatusBar(statusbar);

        retranslateUi(empWindow);

        QMetaObject::connectSlotsByName(empWindow);
    } // setupUi

    void retranslateUi(QMainWindow *empWindow)
    {
        empWindow->setWindowTitle(QApplication::translate("empWindow", "MainWindow", 0));
        label->setText(QApplication::translate("empWindow", "\345\221\230\345\267\245\346\200\273\346\225\260\357\274\232", 0));
        addBtn->setText(QApplication::translate("empWindow", "\345\242\236\345\212\240", 0));
        DelBtn->setText(QApplication::translate("empWindow", "\345\210\240\351\231\244", 0));
        srhBtn->setText(QApplication::translate("empWindow", "\346\237\245\350\257\242", 0));
        label_2->setText(QApplication::translate("empWindow", "\350\257\267\350\276\223\345\205\245\350\246\201\346\237\245\350\257\242\347\232\204\345\220\215\345\255\227\357\274\232", 0));
        countLab->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class empWindow: public Ui_empWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EMPWINDOW_H
