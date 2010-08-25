#include "BrowserPage.h"
#include <QListWidget>
#include <QVBoxLayout>
#include <QString>
#include <QList>
#include "MySQLModule.h"

BrowserPage::BrowserPage(void)
{
    m_tabWidget = new QTabWidget;

	m_buytable_tableView = new QTableView;
    m_buytable_tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);
    m_gettable_tableView = new QTableView;
    m_gettable_tableView->setEditTriggers(QAbstractItemView::NoEditTriggers);


    m_tabWidget->addTab(m_buytable_tableView, QString::fromLocal8Bit("购买表浏览"));
    m_tabWidget->addTab(m_gettable_tableView, QString::fromLocal8Bit("领取表浏览"));


	QVBoxLayout *mainLayout = new QVBoxLayout;
	mainLayout->addWidget(m_tabWidget);
	setLayout(mainLayout);

    connect (m_tabWidget, SIGNAL(currentChanged(int)), this, SLOT(changeTabWidget(int)));
    
    {   // for generating currentChanged signal
        m_tabWidget->setCurrentIndex (1);
        m_tabWidget->setCurrentIndex (0);
    }
}

BrowserPage::~BrowserPage(void)
{
}


void BrowserPage::changeTabWidget(int index){
    MySQLModule& sql = SMySQLModule::getInstance();

    QSqlRelationalTableModel* model = new QSqlRelationalTableModel (NULL, *(sql.GetDataBase()));
    QString tableName;

    switch (index){
        case 0:
            tableName = "buytable";
            break;
        case 1:
            tableName = "gettable";
            break;
    }
    model->setTable(tableName);
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
  
    if ( ! model->select() ) {
        QMessageBox::information(this,"Error",model->lastError().text());
        return;
    }


    switch (index){
        case 0:
            {
                QList <const char*> heads;
                heads << "物品名称" << "代理商" << "购买时间" << "物品品牌" << "物品容量" << "物品浓度" << "购买数量"
                    << "原始单价" << "折扣单价" << "购买备注";
                for (int i = 0; i < heads.count(); i++){
                    model->setHeaderData(i, Qt::Horizontal, QString::fromLocal8Bit(heads[i]));
                }
                m_buytable_tableView->setModel(model);
                break;
            }
        case 1:
            {
                QList <const char*> heads;
                heads << "物品名称" << "代理商" << "领取时间" << "领取人" << "领取数量" << "领取备注" << "购买时间";
                for (int i = 0; i < heads.count(); i++){
                    model->setHeaderData(i, Qt::Horizontal, QString::fromLocal8Bit(heads[i]));
                }
                m_gettable_tableView->setModel(model);
                break;
            }
    }
}

void BrowserPage::updatePage(){
    {   // for generating currentChanged signal
        m_tabWidget->setCurrentIndex (1);
        m_tabWidget->setCurrentIndex (0);
    }
}