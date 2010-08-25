#include "Labms_v1.h"
#include <QListWidget>
#include <QStackedWidget>
#include <QListWidgetItem>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QAction>
#include <QIcon>
#include "Pages.h"
#include "MySQLInfoDlg.h"
#include "AboutDlg.h"

Labms_v1::Labms_v1(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);

 	contentsWidget = new QListWidget;
 	contentsWidget->setViewMode(QListView::IconMode);
 	contentsWidget->setIconSize(QSize(96, 84));
 	contentsWidget->setMovement(QListView::Static);
	contentsWidget->setMaximumWidth(128);
  	contentsWidget->setSpacing(12);

	pagesWidget = new QStackedWidget;
	pagesWidget->addWidget(new BrowserPage);
	pagesWidget->addWidget(new EntryPage);
	pagesWidget->addWidget(new QueryPage);

	createIcons();
	createToolbar();

 	contentsWidget->setCurrentRow(0);

    connect(contentsWidget, SIGNAL(itemSelectionChanged()), pagesWidget->currentWidget(), SLOT(updatePage()) );

	QHBoxLayout *horizontalLayout = new QHBoxLayout;
	horizontalLayout->addWidget(contentsWidget);
	horizontalLayout->addWidget(pagesWidget, 1);
	ui.centralWidget->setLayout(horizontalLayout);
}

Labms_v1::~Labms_v1()
{

}
void Labms_v1::createToolbar(){
	QAction* mysqlInfo = new QAction (QIcon(":/images/Resources/serviceInfo.ico"), tr("MySQL Info"), this);
	mysqlInfo->setStatusTip (QString::fromLocal8Bit("MySQL��������Ϣ���"));
	mysqlInfo->setToolTip (tr("MySQL Server Information"));
	connect(mysqlInfo, SIGNAL(triggered()), this, SLOT(showMySQLInfoDlg()));
	ui.m_toolBar->addAction (mysqlInfo);

    QAction* aboutInfo = new QAction (QIcon(":/images/Resources/about.ico"), tr("About"), this);
    aboutInfo->setStatusTip (QString::fromLocal8Bit("����������"));
    aboutInfo->setToolTip (tr("About..."));
    connect(aboutInfo, SIGNAL(triggered()), this, SLOT(showAboutDlg()));
    ui.m_toolBar->addAction (aboutInfo);

}
void Labms_v1::showMySQLInfoDlg (){
	MySQLInfoDlg* infoDlg = new MySQLInfoDlg;
	infoDlg->show ();
}

void Labms_v1::showAboutDlg (){
    AboutDlg* aboutDlg = new AboutDlg;
    aboutDlg->show ();
}

void Labms_v1::createIcons(){
	QListWidgetItem *updateButton = new QListWidgetItem(contentsWidget);
	updateButton->setIcon(QIcon(":/images/Resources/browser.png"));
	updateButton->setText(QString::fromLocal8Bit("���"));
	updateButton->setTextAlignment(Qt::AlignHCenter);
	updateButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

	QListWidgetItem *configButton = new QListWidgetItem(contentsWidget);
	configButton->setIcon(QIcon(":/images/Resources/config.png"));
	configButton->setText(QString::fromLocal8Bit("¼��"));
	configButton->setTextAlignment(Qt::AlignHCenter);
	configButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

	QListWidgetItem *queryButton = new QListWidgetItem(contentsWidget);
	queryButton->setIcon(QIcon(":/images/Resources/query.png"));
	queryButton->setText(QString::fromLocal8Bit("��ѯ"));
	queryButton->setTextAlignment(Qt::AlignHCenter);
	queryButton->setFlags(Qt::ItemIsSelectable | Qt::ItemIsEnabled);

 	connect(contentsWidget,
 		SIGNAL(currentItemChanged(QListWidgetItem*,QListWidgetItem*)),
 		this, SLOT(changePage(QListWidgetItem*,QListWidgetItem*)));
}

void Labms_v1::changePage(QListWidgetItem *current, QListWidgetItem *previous){
	if (!current)
		current = previous;

	if (current){
		pagesWidget->setCurrentIndex(contentsWidget->row(current));
	}

}
