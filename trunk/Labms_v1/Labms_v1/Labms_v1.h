#ifndef LABMS_V1_H
#define LABMS_V1_H

#include <QtGui/QMainWindow>

#include "ui_Labms_v1.h"

class QListWidget;
class QListWidgetItem;
class QStackedWidget;

class Labms_v1 : public QMainWindow
{
	Q_OBJECT

public:
	Labms_v1(QWidget *parent = 0, Qt::WFlags flags = 0);
	~Labms_v1();

public slots:
	void changePage(QListWidgetItem *current, QListWidgetItem *previous);
	void showMySQLInfoDlg ();

private:
	void createIcons();
	void createToolbar();


	Ui::Labms_v1Class ui;
	QListWidget *contentsWidget;
	QStackedWidget *pagesWidget;
};

#endif // LABMS_V1_H
