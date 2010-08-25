/********************************************************************************
** Form generated from reading UI file 'AboutDlg.ui'
**
** Created: Wed Aug 25 17:55:48 2010
**      by: Qt User Interface Compiler version 4.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDLG_H
#define UI_ABOUTDLG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDlgClass
{
public:
    QVBoxLayout *verticalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QSpacerItem *verticalSpacer;
    QTextEdit *textEdit;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *m_ok;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QDialog *AboutDlgClass)
    {
        if (AboutDlgClass->objectName().isEmpty())
            AboutDlgClass->setObjectName(QString::fromUtf8("AboutDlgClass"));
        AboutDlgClass->resize(407, 344);
        verticalLayout_3 = new QVBoxLayout(AboutDlgClass);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(AboutDlgClass);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMinimumSize(QSize(65, 65));
        label->setMaximumSize(QSize(65, 65));
        label->setPixmap(QPixmap(QString::fromUtf8(":/images/Resources/tortoise_mainIcon.png")));
        label->setScaledContents(true);

        verticalLayout->addWidget(label);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout->addLayout(verticalLayout);

        textEdit = new QTextEdit(AboutDlgClass);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        horizontalLayout->addWidget(textEdit);


        verticalLayout_2->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        m_ok = new QPushButton(AboutDlgClass);
        m_ok->setObjectName(QString::fromUtf8("m_ok"));
        m_ok->setMinimumSize(QSize(75, 25));
        m_ok->setMaximumSize(QSize(75, 25));

        horizontalLayout_2->addWidget(m_ok);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);


        verticalLayout_3->addLayout(verticalLayout_2);


        retranslateUi(AboutDlgClass);

        QMetaObject::connectSlotsByName(AboutDlgClass);
    } // setupUi

    void retranslateUi(QDialog *AboutDlgClass)
    {
        AboutDlgClass->setWindowTitle(QApplication::translate("AboutDlgClass", "About TortoiseForLabms", 0, QApplication::UnicodeUTF8));
        label->setText(QString());
        textEdit->setHtml(QApplication::translate("AboutDlgClass", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\345\256\213\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\345\205\263\344\272\216T<a href=\"/p/tortoiseforlabms/\"><span style=\" text-decoration: underline; color:#000000;\">ortoiseForLabms</span></a>:</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\350\257\245\350\275\257\344\273\266\346\230\257\344\270\272\345\215\227\351\200\232\345\214\273\345\255\246\351\231\242\345\256\236\351\252\214\345\256\244\347\256\241\347\220\206\347\211\251\345\223\201\350\200\214\350\256\276\350\256\241\347\232\204\357\274\214\345\233\240\344"
                        "\270\272\344\270\200\346\213\226\345\206\215\346\213\226\357\274\214\345\211\215\346\234\237\347\274\226\345\206\231\350\277\233\347\250\213\351\235\236\345\270\270\347\274\223\346\205\242\357\274\214\346\211\200\344\273\245\345\234\250\347\254\254\344\270\200\344\270\252\347\211\210\346\234\254\345\207\272\346\235\245\345\220\216\357\274\214\344\276\277\345\260\206\345\205\266\345\220\215\345\255\227\346\224\271\344\270\272Tortoise\357\274\214\346\257\224\345\226\273\345\203\217\344\271\214\351\276\237\344\270\200\346\240\267\346\205\242...\344\270\215\345\271\270\347\232\204\346\230\257\357\274\214\346\201\260\346\201\260\345\222\214\350\221\227\345\220\215\347\232\204TortoiseSVN\350\275\257\344\273\266\347\232\204\345\220\215\345\255\227\346\234\211\344\270\200\345\256\232\347\250\213\345\272\246\344\270\212\347\232\204\345\206\262\347\252\201\357\274\214\346\211\200\344\273\245\345\234\250\346\255\244\346\224\271\345\220\215\344\270\272<span style=\" color:#000000;\">T</span><a href=\"/p/tortoiseforlabms/\""
                        "><span style=\" text-decoration: underline; color:#000000;\">ortoiseForLabms\343\200\202</span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"/p/tortoiseforlabms/\"><span style=\" text-decoration: underline; color:#000000;\">\350\257\245\350\275\257\344\273\266\347\232\204\346\211\247\350\241\214\346\226\207\344\273\266\357\274\214\346\272\220\347\240\201\345\222\214\346\233\264\345\212\240\350\257\246\347\273\206\347\232\204\350\257\264\346\230\216\345\217\257\344\273\245\345\234\250\345\246\202\344\270\213\345\234\260\345\235\200\346\211\276\345\210\260\357\274\232</span></a></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><a href=\"http://code.google.com/p/tortoisef"
                        "orlabms/\"><span style=\" text-decoration: underline; color:#0000ff;\">http://code.google.com/p/tortoiseforlabms/</span></a></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\"></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#000000;\"></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">\350\256\276\350\256\241\357\274\232\344\275\231\344\270\275</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" color:#000000;\">\347\274\226\347\240\201\357\274\232\346\234\261\345\256\207  (PL080516 AT GMAIL DOT COM)</span></p></body></html>", 0, QApplication::UnicodeUTF8));
        m_ok->setText(QApplication::translate("AboutDlgClass", "OK", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutDlgClass: public Ui_AboutDlgClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDLG_H
