#ifndef BROWSERPAGE_H
#define BROWSERPAGE_H

#include <QWidget>
#include <qsqltablemodel.h>
#include <qsqlrelationaltablemodel.h>
#include <qsqlerror.h>
#include <QTableView>
#include <QTabWidget>
#include <QMessageBox>

class BrowserPage :
	public QWidget
{
	Q_OBJECT
public:
	BrowserPage(void);
	~BrowserPage(void);


public slots:
    void updatePage();
    void changeTabWidget (int index);

private:
	QSqlTableModel* sqlTableModel;
	QTableView* m_buytable_tableView;
    QTableView* m_gettable_tableView;
    QTabWidget* m_tabWidget;
};

#endif