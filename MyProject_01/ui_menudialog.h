/********************************************************************************
** Form generated from reading UI file 'menudialog.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENUDIALOG_H
#define UI_MENUDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCommandLinkButton>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MenuDialog
{
public:
    QCommandLinkButton *commandLinkButton;
    QPushButton *epyManageBtn;
    QPushButton *proManageBtn;
    QPushButton *aptManageBtn;
    QPushButton *qiye_info;

    void setupUi(QDialog *MenuDialog)
    {
        if (MenuDialog->objectName().isEmpty())
            MenuDialog->setObjectName(QStringLiteral("MenuDialog"));
        MenuDialog->resize(562, 372);
        commandLinkButton = new QCommandLinkButton(MenuDialog);
        commandLinkButton->setObjectName(QStringLiteral("commandLinkButton"));
        commandLinkButton->setGeometry(QRect(10, 10, 171, 41));
        epyManageBtn = new QPushButton(MenuDialog);
        epyManageBtn->setObjectName(QStringLiteral("epyManageBtn"));
        epyManageBtn->setGeometry(QRect(330, 210, 141, 71));
        proManageBtn = new QPushButton(MenuDialog);
        proManageBtn->setObjectName(QStringLiteral("proManageBtn"));
        proManageBtn->setGeometry(QRect(100, 210, 141, 71));
        aptManageBtn = new QPushButton(MenuDialog);
        aptManageBtn->setObjectName(QStringLiteral("aptManageBtn"));
        aptManageBtn->setGeometry(QRect(330, 100, 141, 71));
        qiye_info = new QPushButton(MenuDialog);
        qiye_info->setObjectName(QStringLiteral("qiye_info"));
        qiye_info->setGeometry(QRect(100, 100, 141, 71));

        retranslateUi(MenuDialog);

        QMetaObject::connectSlotsByName(MenuDialog);
    } // setupUi

    void retranslateUi(QDialog *MenuDialog)
    {
        MenuDialog->setWindowTitle(QApplication::translate("MenuDialog", "Dialog", 0));
        commandLinkButton->setText(QApplication::translate("MenuDialog", "\350\277\224\345\233\236\347\231\273\345\275\225", 0));
        epyManageBtn->setText(QApplication::translate("MenuDialog", "\344\272\272\345\221\230\347\256\241\347\220\206", 0));
        proManageBtn->setText(QApplication::translate("MenuDialog", "\351\241\271\347\233\256\347\256\241\347\220\206", 0));
        aptManageBtn->setText(QApplication::translate("MenuDialog", "\351\203\250\351\227\250\347\256\241\347\220\206", 0));
        qiye_info->setText(QApplication::translate("MenuDialog", "\344\274\201\344\270\232\344\277\241\346\201\257", 0));
    } // retranslateUi

};

namespace Ui {
    class MenuDialog: public Ui_MenuDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENUDIALOG_H
