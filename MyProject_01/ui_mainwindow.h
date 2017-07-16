/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QFrame *frame;
    QPushButton *logBtn;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *qiye_address;
    QLabel *label_3;
    QLineEdit *qiye_id;
    QLabel *label_4;
    QLineEdit *qiye_psd;
    QLineEdit *qiye_name;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(562, 372);
        MainWindow->setStyleSheet(QLatin1String("#MainWindow{\n"
"border-image:url(:/imagine/1.jpg);\n"
"}\n"
"#MainWindow *{\n"
"border-image:url();\n"
"}"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setMinimumSize(QSize(562, 0));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setGeometry(QRect(80, 30, 381, 261));
        frame->setStyleSheet(QLatin1String("#MainWindow{\n"
"border-image:url(:/imagine/1.jpg);\n"
"}\n"
"#MainWindow *{\n"
"border-image:url();\n"
"}"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        logBtn = new QPushButton(frame);
        logBtn->setObjectName(QStringLiteral("logBtn"));
        logBtn->setGeometry(QRect(150, 210, 93, 28));
        layoutWidget = new QWidget(frame);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 10, 281, 181));
        gridLayout_2 = new QGridLayout(layoutWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_2 = new QLabel(layoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 1, 0, 1, 1);

        qiye_address = new QLineEdit(layoutWidget);
        qiye_address->setObjectName(QStringLiteral("qiye_address"));

        gridLayout_2->addWidget(qiye_address, 1, 1, 1, 1);

        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        gridLayout_2->addWidget(label_3, 2, 0, 1, 1);

        qiye_id = new QLineEdit(layoutWidget);
        qiye_id->setObjectName(QStringLiteral("qiye_id"));

        gridLayout_2->addWidget(qiye_id, 2, 1, 1, 1);

        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 3, 0, 1, 1);

        qiye_psd = new QLineEdit(layoutWidget);
        qiye_psd->setObjectName(QStringLiteral("qiye_psd"));

        gridLayout_2->addWidget(qiye_psd, 3, 1, 1, 1);

        qiye_name = new QLineEdit(layoutWidget);
        qiye_name->setObjectName(QStringLiteral("qiye_name"));
        qiye_name->setStyleSheet(QStringLiteral(""));

        gridLayout_2->addWidget(qiye_name, 0, 1, 1, 1);

        logBtn->raise();
        layoutWidget->raise();
        logBtn->raise();
        layoutWidget->raise();
        MainWindow->setCentralWidget(centralWidget);
        qiye_name->raise();
        frame->raise();
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 562, 26));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\344\274\201\344\270\232\347\231\273\345\275\225", 0));
        logBtn->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", 0));
        label->setText(QApplication::translate("MainWindow", "\344\274\201\344\270\232\345\220\215\357\274\232", 0));
        label_2->setText(QApplication::translate("MainWindow", "\344\274\201\344\270\232\345\234\260\345\235\200\357\274\232", 0));
        label_3->setText(QApplication::translate("MainWindow", "\350\264\246\345\217\267\357\274\232", 0));
        label_4->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201\357\274\232", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
