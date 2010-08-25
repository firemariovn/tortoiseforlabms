/********************************************************************************
** Form generated from reading UI file 'LoginDlg.ui'
**
** Created: Wed Aug 25 17:55:48 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDLG_H
#define UI_LOGINDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_LoginDlgClass
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLineEdit *m_name;
    QLabel *m_pwdLabel;
    QLabel *m_nameLabel;
    QLineEdit *m_password;
    QLabel *label_2;
    QLineEdit *m_host;
    QLabel *label_3;
    QLineEdit *m_port;
    QPushButton *m_CancelBtn;
    QPushButton *m_ConfirmBtn;

    void setupUi(QDialog *LoginDlgClass)
    {
        if (LoginDlgClass->objectName().isEmpty())
            LoginDlgClass->setObjectName(QString::fromUtf8("LoginDlgClass"));
        LoginDlgClass->resize(431, 275);
        LoginDlgClass->setMinimumSize(QSize(431, 275));
        LoginDlgClass->setMaximumSize(QSize(431, 275));
        label = new QLabel(LoginDlgClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-6, 0, 441, 81));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/Resources/\345\215\227\351\200\232\345\214\273\345\255\246\351\231\242.bmp")));
        label->setScaledContents(true);
        groupBox = new QGroupBox(LoginDlgClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(10, 92, 391, 111));
        m_name = new QLineEdit(groupBox);
        m_name->setObjectName(QString::fromUtf8("m_name"));
        m_name->setGeometry(QRect(89, 47, 133, 20));
        m_pwdLabel = new QLabel(groupBox);
        m_pwdLabel->setObjectName(QString::fromUtf8("m_pwdLabel"));
        m_pwdLabel->setGeometry(QRect(11, 73, 54, 16));
        m_nameLabel = new QLabel(groupBox);
        m_nameLabel->setObjectName(QString::fromUtf8("m_nameLabel"));
        m_nameLabel->setGeometry(QRect(11, 47, 54, 16));
        m_password = new QLineEdit(groupBox);
        m_password->setObjectName(QString::fromUtf8("m_password"));
        m_password->setGeometry(QRect(89, 73, 133, 20));
        m_password->setEchoMode(QLineEdit::Password);
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(11, 21, 72, 16));
        m_host = new QLineEdit(groupBox);
        m_host->setObjectName(QString::fromUtf8("m_host"));
        m_host->setGeometry(QRect(89, 21, 133, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(230, 23, 41, 16));
        m_port = new QLineEdit(groupBox);
        m_port->setObjectName(QString::fromUtf8("m_port"));
        m_port->setGeometry(QRect(280, 19, 101, 20));
        m_CancelBtn = new QPushButton(LoginDlgClass);
        m_CancelBtn->setObjectName(QString::fromUtf8("m_CancelBtn"));
        m_CancelBtn->setGeometry(QRect(80, 230, 75, 23));
        m_ConfirmBtn = new QPushButton(LoginDlgClass);
        m_ConfirmBtn->setObjectName(QString::fromUtf8("m_ConfirmBtn"));
        m_ConfirmBtn->setGeometry(QRect(270, 230, 75, 23));

        retranslateUi(LoginDlgClass);

        QMetaObject::connectSlotsByName(LoginDlgClass);
    } // setupUi

    void retranslateUi(QDialog *LoginDlgClass)
    {
        LoginDlgClass->setWindowTitle(QApplication::translate("LoginDlgClass", "\345\215\227\351\200\232\345\244\247\345\255\246\345\214\273\345\255\246\351\231\242\345\256\236\351\252\214\345\256\244\347\211\251\345\223\201\347\256\241\347\220\206\347\263\273\347\273\237", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        groupBox->setTitle(QApplication::translate("LoginDlgClass", "\350\277\236\346\216\245\346\225\260\346\215\256\345\272\223(Connect to MySQL)", 0, QApplication::UnicodeUTF8));
        m_pwdLabel->setText(QApplication::translate("LoginDlgClass", "Password:", 0, QApplication::UnicodeUTF8));
        m_nameLabel->setText(QApplication::translate("LoginDlgClass", "UserName:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("LoginDlgClass", "Server Host:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("LoginDlgClass", "Port:", 0, QApplication::UnicodeUTF8));
        m_port->setInputMask(QString());
#ifndef QT_NO_TOOLTIP
        m_CancelBtn->setToolTip(QApplication::translate("LoginDlgClass", "\345\217\226\346\266\210\347\231\273\345\275\225\345\271\266\345\205\263\351\227\255\347\252\227\345\217\243", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_CancelBtn->setText(QApplication::translate("LoginDlgClass", "Cancel", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        m_ConfirmBtn->setToolTip(QApplication::translate("LoginDlgClass", "\347\241\256\345\256\232\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        m_ConfirmBtn->setText(QApplication::translate("LoginDlgClass", "Confirm", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class LoginDlgClass: public Ui_LoginDlgClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDLG_H
