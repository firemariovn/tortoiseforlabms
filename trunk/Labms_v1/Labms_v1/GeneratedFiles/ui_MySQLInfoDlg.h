/********************************************************************************
** Form generated from reading UI file 'MySQLInfoDlg.ui'
**
** Created: Mon Aug 23 16:13:59 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYSQLINFODLG_H
#define UI_MYSQLINFODLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFormLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MySQLInfoDlgClass
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QWidget *widget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *m_userName;
    QLabel *label_2;
    QLabel *m_host;
    QLabel *label_3;
    QLabel *m_port;
    QGroupBox *groupBox_2;
    QWidget *widget1;
    QFormLayout *formLayout_2;
    QLabel *label_7;
    QLabel *m_serverVersion;
    QLabel *label_8;
    QLabel *m_serverNetworkName;
    QLabel *label_9;
    QLabel *m_serverIP;
    QGroupBox *groupBox_3;
    QWidget *widget2;
    QFormLayout *formLayout_3;
    QLabel *label_13;
    QLabel *m_clientVersion;
    QLabel *label_14;
    QLabel *m_clientNetworkName;
    QLabel *label_15;
    QLabel *m_clientIP;
    QLabel *label_16;
    QLabel *m_clientOS;
    QLabel *label_17;
    QLabel *m_clientHardware;

    void setupUi(QDialog *MySQLInfoDlgClass)
    {
        if (MySQLInfoDlgClass->objectName().isEmpty())
            MySQLInfoDlgClass->setObjectName(QString::fromUtf8("MySQLInfoDlgClass"));
        MySQLInfoDlgClass->resize(484, 365);
        horizontalLayout = new QHBoxLayout(MySQLInfoDlgClass);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(MySQLInfoDlgClass);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        widget = new QWidget(groupBox);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(12, 20, 408, 58));
        formLayout = new QFormLayout(widget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(100, 12));
        label->setMaximumSize(QSize(100, 12));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        m_userName = new QLabel(widget);
        m_userName->setObjectName(QString::fromUtf8("m_userName"));
        m_userName->setMinimumSize(QSize(300, 12));
        m_userName->setMaximumSize(QSize(300, 12));

        formLayout->setWidget(0, QFormLayout::FieldRole, m_userName);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(100, 12));
        label_2->setMaximumSize(QSize(100, 12));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        m_host = new QLabel(widget);
        m_host->setObjectName(QString::fromUtf8("m_host"));
        m_host->setMinimumSize(QSize(300, 16));
        m_host->setMaximumSize(QSize(300, 16));

        formLayout->setWidget(1, QFormLayout::FieldRole, m_host);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(100, 12));
        label_3->setMaximumSize(QSize(100, 12));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        m_port = new QLabel(widget);
        m_port->setObjectName(QString::fromUtf8("m_port"));
        m_port->setMinimumSize(QSize(300, 16));
        m_port->setMaximumSize(QSize(300, 16));

        formLayout->setWidget(2, QFormLayout::FieldRole, m_port);


        verticalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(MySQLInfoDlgClass);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        widget1 = new QWidget(groupBox_2);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(11, 21, 408, 50));
        formLayout_2 = new QFormLayout(widget1);
        formLayout_2->setSpacing(6);
        formLayout_2->setContentsMargins(11, 11, 11, 11);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(widget1);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(100, 12));
        label_7->setMaximumSize(QSize(100, 12));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_7);

        m_serverVersion = new QLabel(widget1);
        m_serverVersion->setObjectName(QString::fromUtf8("m_serverVersion"));
        m_serverVersion->setMinimumSize(QSize(300, 12));
        m_serverVersion->setMaximumSize(QSize(300, 12));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, m_serverVersion);

        label_8 = new QLabel(widget1);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(100, 12));
        label_8->setMaximumSize(QSize(100, 12));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        m_serverNetworkName = new QLabel(widget1);
        m_serverNetworkName->setObjectName(QString::fromUtf8("m_serverNetworkName"));
        m_serverNetworkName->setMinimumSize(QSize(300, 12));
        m_serverNetworkName->setMaximumSize(QSize(300, 12));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, m_serverNetworkName);

        label_9 = new QLabel(widget1);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(100, 12));
        label_9->setMaximumSize(QSize(100, 12));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_9);

        m_serverIP = new QLabel(widget1);
        m_serverIP->setObjectName(QString::fromUtf8("m_serverIP"));
        m_serverIP->setMinimumSize(QSize(300, 12));
        m_serverIP->setMaximumSize(QSize(300, 12));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, m_serverIP);


        verticalLayout->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(MySQLInfoDlgClass);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        widget2 = new QWidget(groupBox_3);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(10, 20, 408, 86));
        formLayout_3 = new QFormLayout(widget2);
        formLayout_3->setSpacing(6);
        formLayout_3->setContentsMargins(11, 11, 11, 11);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(widget2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setMinimumSize(QSize(100, 12));
        label_13->setMaximumSize(QSize(100, 12));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_13);

        m_clientVersion = new QLabel(widget2);
        m_clientVersion->setObjectName(QString::fromUtf8("m_clientVersion"));
        m_clientVersion->setMinimumSize(QSize(300, 12));
        m_clientVersion->setMaximumSize(QSize(150, 12));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, m_clientVersion);

        label_14 = new QLabel(widget2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setMinimumSize(QSize(100, 12));
        label_14->setMaximumSize(QSize(100, 12));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_14);

        m_clientNetworkName = new QLabel(widget2);
        m_clientNetworkName->setObjectName(QString::fromUtf8("m_clientNetworkName"));
        m_clientNetworkName->setMinimumSize(QSize(150, 12));
        m_clientNetworkName->setMaximumSize(QSize(300, 12));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, m_clientNetworkName);

        label_15 = new QLabel(widget2);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setMinimumSize(QSize(100, 12));
        label_15->setMaximumSize(QSize(100, 12));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_15);

        m_clientIP = new QLabel(widget2);
        m_clientIP->setObjectName(QString::fromUtf8("m_clientIP"));
        m_clientIP->setMinimumSize(QSize(300, 12));
        m_clientIP->setMaximumSize(QSize(300, 12));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, m_clientIP);

        label_16 = new QLabel(widget2);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setMinimumSize(QSize(100, 12));
        label_16->setMaximumSize(QSize(100, 12));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_16);

        m_clientOS = new QLabel(widget2);
        m_clientOS->setObjectName(QString::fromUtf8("m_clientOS"));
        m_clientOS->setMinimumSize(QSize(300, 12));
        m_clientOS->setMaximumSize(QSize(300, 12));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, m_clientOS);

        label_17 = new QLabel(widget2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setMinimumSize(QSize(100, 12));
        label_17->setMaximumSize(QSize(100, 12));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_17);

        m_clientHardware = new QLabel(widget2);
        m_clientHardware->setObjectName(QString::fromUtf8("m_clientHardware"));
        m_clientHardware->setMinimumSize(QSize(300, 12));
        m_clientHardware->setMaximumSize(QSize(300, 12));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, m_clientHardware);


        verticalLayout->addWidget(groupBox_3);


        horizontalLayout->addLayout(verticalLayout);


        retranslateUi(MySQLInfoDlgClass);

        QMetaObject::connectSlotsByName(MySQLInfoDlgClass);
    } // setupUi

    void retranslateUi(QDialog *MySQLInfoDlgClass)
    {
        MySQLInfoDlgClass->setWindowTitle(QApplication::translate("MySQLInfoDlgClass", "MySQLInfoDlg", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MySQLInfoDlgClass", "Connected to MySQL Server Instance", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MySQLInfoDlgClass", "UserName:", 0, QApplication::UnicodeUTF8));
        m_userName->setText(QApplication::translate("MySQLInfoDlgClass", "UserName:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MySQLInfoDlgClass", "Host:", 0, QApplication::UnicodeUTF8));
        m_host->setText(QApplication::translate("MySQLInfoDlgClass", "Host:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MySQLInfoDlgClass", "Port:", 0, QApplication::UnicodeUTF8));
        m_port->setText(QApplication::translate("MySQLInfoDlgClass", "Port:", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MySQLInfoDlgClass", "Server Information", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MySQLInfoDlgClass", "MySQL Version:", 0, QApplication::UnicodeUTF8));
        m_serverVersion->setText(QApplication::translate("MySQLInfoDlgClass", "MySQL Version:", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MySQLInfoDlgClass", "Network Name:", 0, QApplication::UnicodeUTF8));
        m_serverNetworkName->setText(QApplication::translate("MySQLInfoDlgClass", "Network Name:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MySQLInfoDlgClass", "IP:", 0, QApplication::UnicodeUTF8));
        m_serverIP->setText(QApplication::translate("MySQLInfoDlgClass", "IP:", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MySQLInfoDlgClass", "Client Information", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MySQLInfoDlgClass", "Version:", 0, QApplication::UnicodeUTF8));
        m_clientVersion->setText(QApplication::translate("MySQLInfoDlgClass", "Version:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MySQLInfoDlgClass", "Network Name:", 0, QApplication::UnicodeUTF8));
        m_clientNetworkName->setText(QApplication::translate("MySQLInfoDlgClass", "Network Name:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MySQLInfoDlgClass", "IP:", 0, QApplication::UnicodeUTF8));
        m_clientIP->setText(QApplication::translate("MySQLInfoDlgClass", "IP:", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MySQLInfoDlgClass", "Operating System:", 0, QApplication::UnicodeUTF8));
        m_clientOS->setText(QApplication::translate("MySQLInfoDlgClass", "Operating System:", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MySQLInfoDlgClass", "Hardware:", 0, QApplication::UnicodeUTF8));
        m_clientHardware->setText(QApplication::translate("MySQLInfoDlgClass", "Hardware:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MySQLInfoDlgClass: public Ui_MySQLInfoDlgClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYSQLINFODLG_H
