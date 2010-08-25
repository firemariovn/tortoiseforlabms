#ifndef QUERYPAGE_H
#define QUERYPAGE_H

#include <QWidget>
#include <QListWidgetItem>
#include <QSqlTableModel>
#include "ui_QueryPage.h"

class QueryPage : public QWidget
{
	Q_OBJECT

public:
	QueryPage(QWidget *parent = 0);
	~QueryPage();


public slots:
    void changeDetailGetPeople (int index);
    void changeDetailGetProName (int index);
    void changeTabSlot (int index);
    void changeBuytimeStart (const QDateTime&);
    void changeBuytimeEnd (const QDateTime&);
    void changeGettimeStart (const QDateTime&);
    void changeGettimeEnd (const QDateTime&);

    void exportPeopleToExcel ();
    void exportProNameToExcel ();
    void exportBuyTimeToExcel ();
    void exportGetTimeToExcel ();

private:

private:
    QSqlTableModel* m_sqlTableModel;
	Ui::QueryPageClass ui;
};

#endif // QUERYPAGE_H
