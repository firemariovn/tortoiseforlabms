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
	void entryConfirm ();
	void entryClear ();

    void entryGetAgentSlot (const QString& str);
    void entryGetProNameSlot(const QString& str);
    void entryGetBuyTimeSlot ();
    void entryGetConfirm ();
    void entryGetClear();

    

private:
    QStringListModel* m_data_strListModel;
    QCompleter*       m_data_completer;

	void init ();
	QString addQuotes (QString& src);
	Ui::EntryPageClass ui;
};

#endif // ENTRYPAGE_H
