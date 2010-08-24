/********************************************************************************
** Form generated from reading UI file 'QueryPage.ui'
**
** Created: Tue Aug 24 14:32:35 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QUERYPAGE_H
#define UI_QUERYPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableView>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QueryPageClass
{
public:
    QHBoxLayout *horizontalLayout;
    QTabWidget *m_tabWidget;
    QWidget *tab_1;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *m_getPeople_detail;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_exportPeople;
    QTableView *m_getPeople_tableView;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_2;
    QComboBox *m_getProName_detail;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *m_exportProName;
    QTableView *m_getProName_tableView;
    QWidget *tab;
    QVBoxLayout *verticalLayout_5;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_3;
    QDateTimeEdit *m_buytimeStart;
    QLabel *label_4;
    QDateTimeEdit *m_buytimeEnd;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *m_exportBuyTime;
    QTableView *m_buytime_tableView;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_7;
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_5;
    QDateTimeEdit *m_gettimeStart;
    QLabel *label_6;
    QDateTimeEdit *m_gettimeEnd;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *m_exportGetTime;
    QTableView *m_gettime_tableView;

    void setupUi(QWidget *QueryPageClass)
    {
        if (QueryPageClass->objectName().isEmpty())
            QueryPageClass->setObjectName(QString::fromUtf8("QueryPageClass"));
        QueryPageClass->resize(541, 372);
        horizontalLayout = new QHBoxLayout(QueryPageClass);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        m_tabWidget = new QTabWidget(QueryPageClass);
        m_tabWidget->setObjectName(QString::fromUtf8("m_tabWidget"));
        m_tabWidget->setTabPosition(QTabWidget::North);
        m_tabWidget->setTabShape(QTabWidget::Rounded);
        m_tabWidget->setIconSize(QSize(16, 16));
        m_tabWidget->setElideMode(Qt::ElideNone);
        m_tabWidget->setDocumentMode(false);
        tab_1 = new QWidget();
        tab_1->setObjectName(QString::fromUtf8("tab_1"));
        horizontalLayout_3 = new QHBoxLayout(tab_1);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(tab_1);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(54, 12));
        label->setMaximumSize(QSize(54, 12));

        horizontalLayout_2->addWidget(label);

        m_getPeople_detail = new QComboBox(tab_1);
        m_getPeople_detail->setObjectName(QString::fromUtf8("m_getPeople_detail"));
        m_getPeople_detail->setMinimumSize(QSize(121, 22));
        m_getPeople_detail->setMaximumSize(QSize(121, 22));

        horizontalLayout_2->addWidget(m_getPeople_detail);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        m_exportPeople = new QPushButton(tab_1);
        m_exportPeople->setObjectName(QString::fromUtf8("m_exportPeople"));

        horizontalLayout_2->addWidget(m_exportPeople);


        verticalLayout->addLayout(horizontalLayout_2);

        m_getPeople_tableView = new QTableView(tab_1);
        m_getPeople_tableView->setObjectName(QString::fromUtf8("m_getPeople_tableView"));

        verticalLayout->addWidget(m_getPeople_tableView);


        horizontalLayout_3->addLayout(verticalLayout);

        m_tabWidget->addTab(tab_1, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_2 = new QLabel(tab_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(54, 12));
        label_2->setMaximumSize(QSize(54, 12));

        horizontalLayout_4->addWidget(label_2);

        m_getProName_detail = new QComboBox(tab_2);
        m_getProName_detail->setObjectName(QString::fromUtf8("m_getProName_detail"));
        m_getProName_detail->setMinimumSize(QSize(151, 22));
        m_getProName_detail->setMaximumSize(QSize(151, 22));

        horizontalLayout_4->addWidget(m_getProName_detail);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_2);

        m_exportProName = new QPushButton(tab_2);
        m_exportProName->setObjectName(QString::fromUtf8("m_exportProName"));

        horizontalLayout_4->addWidget(m_exportProName);


        verticalLayout_2->addLayout(horizontalLayout_4);

        m_getProName_tableView = new QTableView(tab_2);
        m_getProName_tableView->setObjectName(QString::fromUtf8("m_getProName_tableView"));

        verticalLayout_2->addWidget(m_getProName_tableView);


        verticalLayout_3->addLayout(verticalLayout_2);

        m_tabWidget->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_5 = new QVBoxLayout(tab);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_3 = new QLabel(tab);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setMinimumSize(QSize(54, 12));
        label_3->setMaximumSize(QSize(54, 12));

        horizontalLayout_5->addWidget(label_3);

        m_buytimeStart = new QDateTimeEdit(tab);
        m_buytimeStart->setObjectName(QString::fromUtf8("m_buytimeStart"));
        m_buytimeStart->setMinimumSize(QSize(141, 22));
        m_buytimeStart->setMaximumSize(QSize(141, 22));

        horizontalLayout_5->addWidget(m_buytimeStart);

        label_4 = new QLabel(tab);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(54, 12));
        label_4->setMaximumSize(QSize(54, 12));

        horizontalLayout_5->addWidget(label_4);

        m_buytimeEnd = new QDateTimeEdit(tab);
        m_buytimeEnd->setObjectName(QString::fromUtf8("m_buytimeEnd"));
        m_buytimeEnd->setMinimumSize(QSize(141, 22));
        m_buytimeEnd->setMaximumSize(QSize(141, 22));

        horizontalLayout_5->addWidget(m_buytimeEnd);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_3);

        m_exportBuyTime = new QPushButton(tab);
        m_exportBuyTime->setObjectName(QString::fromUtf8("m_exportBuyTime"));

        horizontalLayout_5->addWidget(m_exportBuyTime);


        verticalLayout_4->addLayout(horizontalLayout_5);

        m_buytime_tableView = new QTableView(tab);
        m_buytime_tableView->setObjectName(QString::fromUtf8("m_buytime_tableView"));

        verticalLayout_4->addWidget(m_buytime_tableView);


        verticalLayout_5->addLayout(verticalLayout_4);

        m_tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_7 = new QVBoxLayout(tab_3);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_5 = new QLabel(tab_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(54, 12));
        label_5->setMaximumSize(QSize(54, 12));

        horizontalLayout_6->addWidget(label_5);

        m_gettimeStart = new QDateTimeEdit(tab_3);
        m_gettimeStart->setObjectName(QString::fromUtf8("m_gettimeStart"));
        m_gettimeStart->setMinimumSize(QSize(141, 22));
        m_gettimeStart->setMaximumSize(QSize(141, 22));

        horizontalLayout_6->addWidget(m_gettimeStart);

        label_6 = new QLabel(tab_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(54, 12));
        label_6->setMaximumSize(QSize(54, 12));

        horizontalLayout_6->addWidget(label_6);

        m_gettimeEnd = new QDateTimeEdit(tab_3);
        m_gettimeEnd->setObjectName(QString::fromUtf8("m_gettimeEnd"));
        m_gettimeEnd->setMinimumSize(QSize(141, 22));
        m_gettimeEnd->setMaximumSize(QSize(141, 22));

        horizontalLayout_6->addWidget(m_gettimeEnd);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        m_exportGetTime = new QPushButton(tab_3);
        m_exportGetTime->setObjectName(QString::fromUtf8("m_exportGetTime"));

        horizontalLayout_6->addWidget(m_exportGetTime);


        verticalLayout_6->addLayout(horizontalLayout_6);

        m_gettime_tableView = new QTableView(tab_3);
        m_gettime_tableView->setObjectName(QString::fromUtf8("m_gettime_tableView"));

        verticalLayout_6->addWidget(m_gettime_tableView);


        verticalLayout_7->addLayout(verticalLayout_6);

        m_tabWidget->addTab(tab_3, QString());

        horizontalLayout->addWidget(m_tabWidget);


        retranslateUi(QueryPageClass);

        m_tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(QueryPageClass);
    } // setupUi

    void retranslateUi(QWidget *QueryPageClass)
    {
        QueryPageClass->setWindowTitle(QApplication::translate("QueryPageClass", "QueryPage", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("QueryPageClass", "\351\242\206\345\217\226\344\272\272:", 0, QApplication::UnicodeUTF8));
        m_exportPeople->setText(QApplication::translate("QueryPageClass", "\345\257\274\345\207\272\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        m_tabWidget->setTabText(m_tabWidget->indexOf(tab_1), QApplication::translate("QueryPageClass", "\346\214\211\351\242\206\345\217\226\344\272\272", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("QueryPageClass", "\347\211\251\345\223\201\345\220\215\347\247\260:", 0, QApplication::UnicodeUTF8));
        m_exportProName->setText(QApplication::translate("QueryPageClass", "\345\257\274\345\207\272\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        m_tabWidget->setTabText(m_tabWidget->indexOf(tab_2), QApplication::translate("QueryPageClass", "\346\214\211\347\211\251\345\223\201\345\220\215\347\247\260", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("QueryPageClass", "\350\265\267\345\247\213\346\227\245\346\234\237:", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("QueryPageClass", "\347\273\210\346\255\242\346\227\245\346\234\237:", 0, QApplication::UnicodeUTF8));
        m_exportBuyTime->setText(QApplication::translate("QueryPageClass", "\345\257\274\345\207\272\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        m_tabWidget->setTabText(m_tabWidget->indexOf(tab), QApplication::translate("QueryPageClass", "\346\214\211\350\264\255\344\271\260\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("QueryPageClass", "\350\265\267\345\247\213\346\227\245\346\234\237:", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("QueryPageClass", "\347\273\210\346\255\242\346\227\245\346\234\237:", 0, QApplication::UnicodeUTF8));
        m_exportGetTime->setText(QApplication::translate("QueryPageClass", "\345\257\274\345\207\272\346\225\260\346\215\256", 0, QApplication::UnicodeUTF8));
        m_tabWidget->setTabText(m_tabWidget->indexOf(tab_3), QApplication::translate("QueryPageClass", "\346\214\211\351\242\206\345\217\226\346\227\266\351\227\264", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class QueryPageClass: public Ui_QueryPageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QUERYPAGE_H
