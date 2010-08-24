#include "BrowserPage.h"
#include <QListWidget>
#include <QVBoxLayout>

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
	mainLayout->addStretch(1);
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
            m_buytable_tableView->setModel(model);
            break;
        case 1:
            m_gettable_tableView->setModel(model);
            break;
    }
}

void BrowserPage::updatePage(){
    {   // for generating currentChanged signal
        m_tabWidget->setCurrentIndex (1);
        m_tabWidget->setCurrentIndex (0);
    }
}