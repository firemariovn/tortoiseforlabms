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


    m_tabWidget->addTab(m_buytable_tableView, QString::fromLocal8Bit("��������"));
    m_tabWidget->addTab(m_gettable_tableView, QString::fromLocal8Bit("��ȡ�����"));


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
                heads << "��Ʒ����" << "������" << "����ʱ��" << "��ƷƷ��" << "��Ʒ����" << "��ƷŨ��" << "��������"
                    << "ԭʼ����" << "�ۿ۵���" << "����ע";
                for (int i = 0; i < heads.count(); i++){
                    model->setHeaderData(i, Qt::Horizontal, QString::fromLocal8Bit(heads[i]));
                }
                m_buytable_tableView->setModel(model);
                break;
            }
        case 1:
            {
                QList <const char*> heads;
                heads << "��Ʒ����" << "������" << "��ȡʱ��" << "��ȡ��" << "��ȡ����" << "��ȡ��ע" << "����ʱ��";
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