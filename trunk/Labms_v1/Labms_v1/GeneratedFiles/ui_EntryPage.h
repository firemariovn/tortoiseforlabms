/********************************************************************************
** Form generated from reading UI file 'EntryPage.ui'
**
** Created: Wed Aug 25 17:55:48 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENTRYPAGE_H
#define UI_ENTRYPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDateTimeEdit>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EntryPageClass
{
public:
    QGridLayout *gridLayout_2;
    QTabWidget *tableWidget;
    QWidget *tab;
    QLabel *m_tipBuyLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *gridLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QDateTimeEdit *m_buyDate;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_4;
    QLineEdit *m_ProName;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_6;
    QComboBox *m_BuyNum;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLineEdit *m_ProBrand;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QComboBox *m_OrigUprice;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *m_Agent;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_11;
    QComboBox *m_RebUprice;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QComboBox *m_Volume;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_12;
    QLineEdit *m_Concen;
    QGridLayout *gridLayout;
    QLabel *label_10;
    QSpacerItem *verticalSpacer_2;
    QSpacerItem *verticalSpacer;
    QTextEdit *m_BuyPS;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer_3;
    QPushButton *m_buy_reset;
    QPushButton *m_buy_confirm;
    QWidget *tab_2;
    QLabel *m_tipGetLabel;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_11;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox;
    QLabel *label_15;
    QLabel *label_16;
    QLineEdit *m_get_proName;
    QLabel *label_19;
    QLineEdit *m_get_agent;
    QComboBox *m_get_buytime;
    QGroupBox *groupBox_2;
    QLabel *label_13;
    QDateTimeEdit *m_get_time;
    QLabel *label_14;
    QLineEdit *m_get_people;
    QLabel *label_17;
    QLineEdit *m_get_num;
    QLabel *label_18;
    QTextEdit *m_get_ps;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_2;
    QSpacerItem *verticalSpacer_4;
    QPushButton *m_get_reset;
    QPushButton *m_get_confirm;

    void setupUi(QWidget *EntryPageClass)
    {
        if (EntryPageClass->objectName().isEmpty())
            EntryPageClass->setObjectName(QString::fromUtf8("EntryPageClass"));
        EntryPageClass->resize(499, 436);
        gridLayout_2 = new QGridLayout(EntryPageClass);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        tableWidget = new QTabWidget(EntryPageClass);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setTabPosition(QTabWidget::North);
        tableWidget->setTabShape(QTabWidget::Rounded);
        tableWidget->setElideMode(Qt::ElideRight);
        tableWidget->setUsesScrollButtons(true);
        tableWidget->setDocumentMode(false);
        tableWidget->setTabsClosable(false);
        tableWidget->setMovable(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tab->sizePolicy().hasHeightForWidth());
        tab->setSizePolicy(sizePolicy);
        m_tipBuyLabel = new QLabel(tab);
        m_tipBuyLabel->setObjectName(QString::fromUtf8("m_tipBuyLabel"));
        m_tipBuyLabel->setGeometry(QRect(2, 0, 450, 24));
        sizePolicy.setHeightForWidth(m_tipBuyLabel->sizePolicy().hasHeightForWidth());
        m_tipBuyLabel->setSizePolicy(sizePolicy);
        m_tipBuyLabel->setMinimumSize(QSize(450, 24));
        m_tipBuyLabel->setMaximumSize(QSize(450, 24));
        m_tipBuyLabel->setSizeIncrement(QSize(0, 0));
        QFont font;
        font.setPointSize(12);
        m_tipBuyLabel->setFont(font);
        m_tipBuyLabel->setStyleSheet(QString::fromUtf8("color: rgb(255, 0, 0);\n"
"background-color: rgb(0, 0, 0);"));
        m_tipBuyLabel->setTextFormat(Qt::AutoText);
        layoutWidget = new QWidget(tab);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 30, 451, 341));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(65, 20));
        label_3->setMaximumSize(QSize(65, 20));
        label_3->setTextFormat(Qt::RichText);

        horizontalLayout->addWidget(label_3);

        m_buyDate = new QDateTimeEdit(layoutWidget);
        m_buyDate->setObjectName(QString::fromUtf8("m_buyDate"));
        sizePolicy1.setHeightForWidth(m_buyDate->sizePolicy().hasHeightForWidth());
        m_buyDate->setSizePolicy(sizePolicy1);
        m_buyDate->setMinimumSize(QSize(130, 22));
        m_buyDate->setMaximumSize(QSize(130, 22));

        horizontalLayout->addWidget(m_buyDate);


        gridLayout_3->addLayout(horizontalLayout, 0, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_4 = new QLabel(layoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(65, 20));
        label_4->setMaximumSize(QSize(65, 20));
        label_4->setTextFormat(Qt::RichText);

        horizontalLayout_3->addWidget(label_4);

        m_ProName = new QLineEdit(layoutWidget);
        m_ProName->setObjectName(QString::fromUtf8("m_ProName"));
        m_ProName->setMinimumSize(QSize(81, 20));
        m_ProName->setMaximumSize(QSize(81, 20));
        m_ProName->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_3->addWidget(m_ProName);


        gridLayout_3->addLayout(horizontalLayout_3, 1, 0, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_6 = new QLabel(layoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setMinimumSize(QSize(65, 16));
        label_6->setMaximumSize(QSize(65, 16));
        label_6->setTextFormat(Qt::RichText);

        horizontalLayout_7->addWidget(label_6);

        m_BuyNum = new QComboBox(layoutWidget);
        m_BuyNum->setObjectName(QString::fromUtf8("m_BuyNum"));
        m_BuyNum->setMinimumSize(QSize(80, 20));
        m_BuyNum->setMaximumSize(QSize(80, 20));
        m_BuyNum->setEditable(true);

        horizontalLayout_7->addWidget(m_BuyNum);


        gridLayout_3->addLayout(horizontalLayout_7, 1, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_8 = new QLabel(layoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(65, 20));
        label_8->setMaximumSize(QSize(65, 20));
        label_8->setTextFormat(Qt::RichText);

        horizontalLayout_4->addWidget(label_8);

        m_ProBrand = new QLineEdit(layoutWidget);
        m_ProBrand->setObjectName(QString::fromUtf8("m_ProBrand"));
        m_ProBrand->setMinimumSize(QSize(81, 20));
        m_ProBrand->setMaximumSize(QSize(81, 20));

        horizontalLayout_4->addWidget(m_ProBrand);


        gridLayout_3->addLayout(horizontalLayout_4, 2, 0, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_7 = new QLabel(layoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMinimumSize(QSize(65, 16));
        label_7->setMaximumSize(QSize(65, 16));
        label_7->setTextFormat(Qt::RichText);

        horizontalLayout_8->addWidget(label_7);

        m_OrigUprice = new QComboBox(layoutWidget);
        m_OrigUprice->setObjectName(QString::fromUtf8("m_OrigUprice"));
        m_OrigUprice->setMinimumSize(QSize(80, 20));
        m_OrigUprice->setMaximumSize(QSize(80, 20));
        m_OrigUprice->setEditable(true);

        horizontalLayout_8->addWidget(m_OrigUprice);


        gridLayout_3->addLayout(horizontalLayout_8, 2, 1, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(layoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(65, 20));
        label_5->setMaximumSize(QSize(65, 20));
        label_5->setTextFormat(Qt::RichText);

        horizontalLayout_5->addWidget(label_5);

        m_Agent = new QLineEdit(layoutWidget);
        m_Agent->setObjectName(QString::fromUtf8("m_Agent"));
        m_Agent->setMinimumSize(QSize(80, 20));
        m_Agent->setMaximumSize(QSize(80, 20));

        horizontalLayout_5->addWidget(m_Agent);


        gridLayout_3->addLayout(horizontalLayout_5, 3, 0, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_11 = new QLabel(layoutWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setMinimumSize(QSize(65, 16));
        label_11->setMaximumSize(QSize(65, 16));
        label_11->setTextFormat(Qt::RichText);

        horizontalLayout_9->addWidget(label_11);

        m_RebUprice = new QComboBox(layoutWidget);
        m_RebUprice->setObjectName(QString::fromUtf8("m_RebUprice"));
        m_RebUprice->setMinimumSize(QSize(80, 20));
        m_RebUprice->setMaximumSize(QSize(80, 20));
        m_RebUprice->setEditable(true);

        horizontalLayout_9->addWidget(m_RebUprice);


        gridLayout_3->addLayout(horizontalLayout_9, 3, 1, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_9 = new QLabel(layoutWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(65, 20));
        label_9->setMaximumSize(QSize(65, 20));
        label_9->setTextFormat(Qt::RichText);

        horizontalLayout_6->addWidget(label_9);

        m_Volume = new QComboBox(layoutWidget);
        m_Volume->setObjectName(QString::fromUtf8("m_Volume"));
        m_Volume->setMinimumSize(QSize(80, 22));
        m_Volume->setMaximumSize(QSize(80, 22));
        m_Volume->setEditable(true);

        horizontalLayout_6->addWidget(m_Volume);


        gridLayout_3->addLayout(horizontalLayout_6, 4, 0, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_12 = new QLabel(layoutWidget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setMinimumSize(QSize(65, 16));
        label_12->setMaximumSize(QSize(65, 16));
        label_12->setTextFormat(Qt::RichText);

        horizontalLayout_10->addWidget(label_12);

        m_Concen = new QLineEdit(layoutWidget);
        m_Concen->setObjectName(QString::fromUtf8("m_Concen"));
        m_Concen->setMinimumSize(QSize(80, 20));
        m_Concen->setMaximumSize(QSize(80, 20));

        horizontalLayout_10->addWidget(m_Concen);


        gridLayout_3->addLayout(horizontalLayout_10, 4, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout_3);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_10 = new QLabel(layoutWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setMinimumSize(QSize(65, 20));
        label_10->setMaximumSize(QSize(65, 20));
        label_10->setTextFormat(Qt::RichText);

        gridLayout->addWidget(label_10, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 18, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer_2, 0, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 78, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(verticalSpacer, 1, 0, 1, 1);

        m_BuyPS = new QTextEdit(layoutWidget);
        m_BuyPS->setObjectName(QString::fromUtf8("m_BuyPS"));
        sizePolicy.setHeightForWidth(m_BuyPS->sizePolicy().hasHeightForWidth());
        m_BuyPS->setSizePolicy(sizePolicy);
        m_BuyPS->setMinimumSize(QSize(230, 81));
        m_BuyPS->setMaximumSize(QSize(230, 81));

        gridLayout->addWidget(m_BuyPS, 1, 1, 1, 1);


        verticalLayout_2->addLayout(gridLayout);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setMinimumSize(QSize(100, 100));
        label->setMaximumSize(QSize(100, 100));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/Resources/\350\264\255\344\271\2602.png")));
        label->setScaledContents(true);

        verticalLayout->addWidget(label);

        verticalSpacer_3 = new QSpacerItem(20, 90, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout->addItem(verticalSpacer_3);

        m_buy_reset = new QPushButton(layoutWidget);
        m_buy_reset->setObjectName(QString::fromUtf8("m_buy_reset"));
        sizePolicy.setHeightForWidth(m_buy_reset->sizePolicy().hasHeightForWidth());
        m_buy_reset->setSizePolicy(sizePolicy);
        m_buy_reset->setMinimumSize(QSize(100, 30));
        m_buy_reset->setMaximumSize(QSize(100, 30));

        verticalLayout->addWidget(m_buy_reset);

        m_buy_confirm = new QPushButton(layoutWidget);
        m_buy_confirm->setObjectName(QString::fromUtf8("m_buy_confirm"));
        sizePolicy.setHeightForWidth(m_buy_confirm->sizePolicy().hasHeightForWidth());
        m_buy_confirm->setSizePolicy(sizePolicy);
        m_buy_confirm->setMinimumSize(QSize(100, 30));
        m_buy_confirm->setMaximumSize(QSize(100, 30));

        verticalLayout->addWidget(m_buy_confirm);


        horizontalLayout_2->addLayout(verticalLayout);

        tableWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        m_tipGetLabel = new QLabel(tab_2);
        m_tipGetLabel->setObjectName(QString::fromUtf8("m_tipGetLabel"));
        m_tipGetLabel->setGeometry(QRect(4, 0, 420, 24));
        m_tipGetLabel->setMinimumSize(QSize(420, 24));
        m_tipGetLabel->setMaximumSize(QSize(420, 24));
        m_tipGetLabel->setFont(font);
        m_tipGetLabel->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 0, 0);"));
        layoutWidget1 = new QWidget(tab_2);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(2, 31, 421, 351));
        horizontalLayout_11 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        horizontalLayout_11->setContentsMargins(0, 0, 0, 0);
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        groupBox = new QGroupBox(layoutWidget1);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setMinimumSize(QSize(301, 111));
        groupBox->setMaximumSize(QSize(301, 111));
        label_15 = new QLabel(groupBox);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(30, 20, 65, 20));
        label_15->setMinimumSize(QSize(65, 20));
        label_15->setMaximumSize(QSize(65, 20));
        label_15->setTextFormat(Qt::RichText);
        label_16 = new QLabel(groupBox);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(30, 49, 65, 20));
        label_16->setMinimumSize(QSize(65, 20));
        label_16->setMaximumSize(QSize(65, 20));
        label_16->setTextFormat(Qt::RichText);
        m_get_proName = new QLineEdit(groupBox);
        m_get_proName->setObjectName(QString::fromUtf8("m_get_proName"));
        m_get_proName->setGeometry(QRect(120, 20, 130, 20));
        label_19 = new QLabel(groupBox);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(10, 78, 85, 20));
        label_19->setMinimumSize(QSize(85, 20));
        label_19->setMaximumSize(QSize(85, 20));
        label_19->setTextFormat(Qt::RichText);
        m_get_agent = new QLineEdit(groupBox);
        m_get_agent->setObjectName(QString::fromUtf8("m_get_agent"));
        m_get_agent->setGeometry(QRect(120, 49, 130, 20));
        m_get_buytime = new QComboBox(groupBox);
        m_get_buytime->setObjectName(QString::fromUtf8("m_get_buytime"));
        m_get_buytime->setGeometry(QRect(120, 77, 151, 22));

        verticalLayout_5->addWidget(groupBox);

        groupBox_2 = new QGroupBox(layoutWidget1);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(301, 211));
        groupBox_2->setMaximumSize(QSize(301, 211));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(0, 20, 65, 20));
        label_13->setMinimumSize(QSize(65, 20));
        label_13->setMaximumSize(QSize(65, 20));
        label_13->setTextFormat(Qt::RichText);
        m_get_time = new QDateTimeEdit(groupBox_2);
        m_get_time->setObjectName(QString::fromUtf8("m_get_time"));
        m_get_time->setGeometry(QRect(120, 20, 151, 22));
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(0, 49, 65, 20));
        label_14->setMinimumSize(QSize(65, 20));
        label_14->setMaximumSize(QSize(65, 20));
        label_14->setTextFormat(Qt::RichText);
        m_get_people = new QLineEdit(groupBox_2);
        m_get_people->setObjectName(QString::fromUtf8("m_get_people"));
        m_get_people->setGeometry(QRect(120, 50, 130, 20));
        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(0, 78, 65, 20));
        label_17->setMinimumSize(QSize(65, 20));
        label_17->setMaximumSize(QSize(65, 20));
        label_17->setTextFormat(Qt::RichText);
        m_get_num = new QLineEdit(groupBox_2);
        m_get_num->setObjectName(QString::fromUtf8("m_get_num"));
        m_get_num->setGeometry(QRect(120, 80, 130, 20));
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(0, 110, 65, 20));
        label_18->setMinimumSize(QSize(65, 20));
        label_18->setMaximumSize(QSize(65, 20));
        label_18->setTextFormat(Qt::RichText);
        m_get_ps = new QTextEdit(groupBox_2);
        m_get_ps->setObjectName(QString::fromUtf8("m_get_ps"));
        m_get_ps->setGeometry(QRect(80, 110, 191, 91));

        verticalLayout_5->addWidget(groupBox_2);


        horizontalLayout_11->addLayout(verticalLayout_5);

        verticalLayout_6 = new QVBoxLayout();
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setMinimumSize(QSize(100, 100));
        label_2->setMaximumSize(QSize(100, 100));
        label_2->setPixmap(QPixmap(QString::fromUtf8(":/images/Resources/\351\242\206\345\217\2261.png")));
        label_2->setScaledContents(true);

        verticalLayout_6->addWidget(label_2);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_6->addItem(verticalSpacer_4);

        m_get_reset = new QPushButton(layoutWidget1);
        m_get_reset->setObjectName(QString::fromUtf8("m_get_reset"));
        m_get_reset->setMinimumSize(QSize(100, 30));
        m_get_reset->setMaximumSize(QSize(100, 30));

        verticalLayout_6->addWidget(m_get_reset);

        m_get_confirm = new QPushButton(layoutWidget1);
        m_get_confirm->setObjectName(QString::fromUtf8("m_get_confirm"));
        m_get_confirm->setMinimumSize(QSize(100, 30));
        m_get_confirm->setMaximumSize(QSize(100, 30));

        verticalLayout_6->addWidget(m_get_confirm);


        horizontalLayout_11->addLayout(verticalLayout_6);

        tableWidget->addTab(tab_2, QString());

        gridLayout_2->addWidget(tableWidget, 0, 0, 1, 1);


        retranslateUi(EntryPageClass);

        tableWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(EntryPageClass);
    } // setupUi

    void retranslateUi(QWidget *EntryPageClass)
    {
        EntryPageClass->setWindowTitle(QApplication::translate("EntryPageClass", "EntryPage", 0, QApplication::UnicodeUTF8));
        m_tipBuyLabel->setText(QApplication::translate("EntryPageClass", "Tip:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("EntryPageClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; color:#ff0000;\">* </span><span style=\" font-size:9pt;\">\350\264\255\344\271\260\346\227\266\351\227\264:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("EntryPageClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; color:#ff0000;\">* </span><span style=\" font-size:9pt;\">\347\211\251\345\223\201\345\220\215\347\247\260:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("EntryPageClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; color:#ff0000;\">*</span><span style=\" font-size:9pt;\"> \350\264\255\344\271\260\346\225\260\351\207\217:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("EntryPageClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">\347\211\251\345\223\201\345\223\201\347\211\214:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("EntryPageClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; color:#ff0000;\">*</span><span style=\" font-size:9pt;\"> \345\216\237\345\247\213\345\215\225\344\273\267:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("EntryPageClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt; color:#ff0000;\">* </span><span style=\" font-size:9pt; color:#000000;\">\344\273\243\347\220\206\345\225\206</span><span style=\" font-size:9pt;\">:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("EntryPageClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">\346\212\230\346\211\243\345\215\225\344\273\267:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        m_RebUprice->clear();
        m_RebUprice->insertItems(0, QStringList()
         << QApplication::translate("EntryPageClass", "\345\256\271\351\207\217", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("EntryPageClass", "\345\223\210\345\223\210", 0, QApplication::UnicodeUTF8)
        );
        label_9->setText(QApplication::translate("EntryPageClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">\347\211\251\345\223\201\345\256\271\351\207\217:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("EntryPageClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:9pt;\">\347\211\251\345\223\201\346\265\223\345\272\246:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("EntryPageClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2';\">\350\264\255\344\271\260\345\244\207\346\263\250:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        m_buy_reset->setText(QApplication::translate("EntryPageClass", "\351\207\215\347\275\256", 0, QApplication::UnicodeUTF8));
        m_buy_confirm->setText(QApplication::translate("EntryPageClass", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        tableWidget->setTabText(tableWidget->indexOf(tab), QApplication::translate("EntryPageClass", "\350\264\255\344\271\260\344\277\241\346\201\257\345\275\225\345\205\245", 0, QApplication::UnicodeUTF8));
        m_tipGetLabel->setText(QApplication::translate("EntryPageClass", "Tip:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("EntryPageClass", "\347\241\256\345\256\232\351\242\206\345\217\226\347\211\251\345\223\201\344\277\241\346\201\257:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("EntryPageClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#ff0000;\">* </span><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\">\347\211\251\345\223\201\345\220\215\347\247\260</span><span style=\" font-family:'MS Shell Dlg 2';\">:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("EntryPageClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#ff0000;\">* </span><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\">\344\273\243\347\220\206\345\225\206</span><span style=\" font-family:'MS Shell Dlg 2';\">:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("EntryPageClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#ff0000;\">* </span><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\">\347\211\251\345\223\201\350\264\255\344\271\260\346\227\266\351\227\264</span><span style=\" font-family:'MS Shell Dlg 2';\">:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("EntryPageClass", "\351\242\206\345\217\226\344\277\241\346\201\257:", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("EntryPageClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#ff0000;\">* </span><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\">\351\242\206\345\217\226</span><span style=\" font-family:'MS Shell Dlg 2';\">\346\227\266\351\227\264:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("EntryPageClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#ff0000;\">* </span><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\">\351\242\206\347\211\251\344\272\272</span><span style=\" font-family:'MS Shell Dlg 2';\">:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("EntryPageClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#ff0000;\">* </span><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\">\351\242\206\345\217\226\346\225\260\351\207\217</span><span style=\" font-family:'MS Shell Dlg 2';\">:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("EntryPageClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'MS Shell Dlg 2'; color:#000000;\">\351\242\206\345\217\226\345\244\207\346\263\250</span><span style=\" font-family:'MS Shell Dlg 2';\">:</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        label_2->setText(QString());
        m_get_reset->setText(QApplication::translate("EntryPageClass", "\351\207\215\347\275\256", 0, QApplication::UnicodeUTF8));
        m_get_confirm->setText(QApplication::translate("EntryPageClass", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        tableWidget->setTabText(tableWidget->indexOf(tab_2), QApplication::translate("EntryPageClass", "\351\242\206\345\217\226\344\277\241\346\201\257\345\275\225\345\205\245", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class EntryPageClass: public Ui_EntryPageClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENTRYPAGE_H
