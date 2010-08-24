/********************************************************************************
** Form generated from reading UI file 'Labms_v1.ui'
**
** Created: Mon Aug 23 16:13:59 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LABMS_V1_H
#define UI_LABMS_V1_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Labms_v1Class
{
public:
    QWidget *centralWidget;
    QStatusBar *m_statusBar;
    QToolBar *m_toolBar;

    void setupUi(QMainWindow *Labms_v1Class)
    {
        if (Labms_v1Class->objectName().isEmpty())
            Labms_v1Class->setObjectName(QString::fromUtf8("Labms_v1Class"));
        Labms_v1Class->resize(800, 600);
        Labms_v1Class->setMinimumSize(QSize(0, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/images/Resources/tortoise_mainIcon.png"), QSize(), QIcon::Normal, QIcon::Off);
        Labms_v1Class->setWindowIcon(icon);
        centralWidget = new QWidget(Labms_v1Class);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Labms_v1Class->setCentralWidget(centralWidget);
        m_statusBar = new QStatusBar(Labms_v1Class);
        m_statusBar->setObjectName(QString::fromUtf8("m_statusBar"));
        Labms_v1Class->setStatusBar(m_statusBar);
        m_toolBar = new QToolBar(Labms_v1Class);
        m_toolBar->setObjectName(QString::fromUtf8("m_toolBar"));
        Labms_v1Class->addToolBar(Qt::TopToolBarArea, m_toolBar);

        retranslateUi(Labms_v1Class);

        QMetaObject::connectSlotsByName(Labms_v1Class);
    } // setupUi

    void retranslateUi(QMainWindow *Labms_v1Class)
    {
        Labms_v1Class->setWindowTitle(QApplication::translate("Labms_v1Class", "\345\215\227\351\200\232\345\244\247\345\255\246\347\227\205\345\216\237\347\224\237\347\211\251\345\255\246\346\225\231\347\240\224\345\256\244", 0, QApplication::UnicodeUTF8));
        m_toolBar->setWindowTitle(QApplication::translate("Labms_v1Class", "toolBar", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Labms_v1Class: public Ui_Labms_v1Class {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LABMS_V1_H
