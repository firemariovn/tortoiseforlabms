#ifndef ENTRYPAGE_H
#define ENTRYPAGE_H

#include <QWidget>
#include <QCompleter>
#include <QStringListModel>

#include "ui_EntryPage.h"
class EntryPage : public QWidget
{
	Q_OBJECT

public:
	EntryPage(QWidget *parent = 0);
	~EntryPage();

public slots:
    void entryGetAgentSlot (const QString& str);
    void entryGetProNameSlot(const QString& str);
    void entryGetBuyTimeSlot ();

    void entryBuyConfirm ();
    void entryGetConfirm ();

    void entryBuyReset();
    void entryGetReset();    

private:
    QStringListModel* m_data_strListModel;
    QCompleter*       m_data_completer;

	void init ();
	QString addQuotes (QString& src);
	Ui::EntryPageClass ui;
};

#endif // ENTRYPAGE_H
