/********************************************************************************
** Form generated from reading UI file 'prowindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROWINDOW_H
#define UI_PROWINDOW_H

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

class Ui_proWindow
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *addBtn;
    QPushButton *delBtn;
    QPushButton *srhBtn;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLabel *countLab;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *proWindow)
    {
        if (proWindow->objectName().isEmpty())
            proWindow->setObjectName(QStringLiteral("proWindow"));
        proWindow->resize(631, 412);
        centralwidget = new QWidget(proWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(5, 0, 621, 281));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(0, 290, 72, 15));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 320, 631, 41));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        addBtn = new QPushButton(layoutWidget);
        addBtn->setObjectName(QStringLiteral("addBtn"));

        horizontalLayout->addWidget(addBtn);

        delBtn = new QPushButton(layoutWidget);
        delBtn->setObjectName(QStringLiteral("delBtn"));

        horizontalLayout->addWidget(delBtn);

        srhBtn = new QPushButton(layoutWidget);
        srhBtn->setObjectName(QStringLiteral("srhBtn"));

        horizontalLayout->addWidget(srhBtn);

        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(430, 290, 191, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(271, 290, 131, 20));
        countLab = new QLabel(centralwidget);
        countLab->setObjectName(QStringLiteral("countLab"));
        countLab->setGeometry(QRect(80, 290, 72, 15));
        proWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(proWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 631, 26));
        proWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(proWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        proWindow->setStatusBar(statusbar);

        retranslateUi(proWindow);

        QMetaObject::connectSlotsByName(proWindow);
    } // setupUi

    void retranslateUi(QMainWindow *proWindow)
    {
        proWindow->setWindowTitle(QApplication::translate("proWindow", "\351\241\271\347\233\256\344\277\241\346\201\257", 0));
        label->setText(QApplication::translate("proWindow", "\351\241\271\347\233\256\346\200\273\346\225\260\357\274\232", 0));
        addBtn->setText(QApplication::translate("proWindow", "\345\242\236\345\212\240", 0));
        delBtn->setText(QApplication::translate("proWindow", "\345\210\240\351\231\244", 0));
        srhBtn->setText(QApplication::translate("proWindow", "\346\237\245\350\257\242", 0));
        label_2->setText(QApplication::translate("proWindow", "\350\257\267\350\276\223\345\205\245\346\237\245\350\257\242\347\232\204\345\220\215\345\255\227\357\274\232", 0));
        countLab->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class proWindow: public Ui_proWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROWINDOW_H
