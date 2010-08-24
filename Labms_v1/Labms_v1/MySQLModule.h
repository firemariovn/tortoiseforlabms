#ifndef MYSQLMODULE_H
#define MYSQLMODULE_H

#include <QObject>
#include <qsqlquery.h>
#include <qsqlrecord.h>
#include <qsqldatabase.h>
#include "Singleton.h"

class MySQLModule : public QObject
{
	Q_OBJECT
	friend class Singleton<MySQLModule>;
public:
	MySQLModule();
	MySQLModule(QObject *parent);
	~MySQLModule();

	bool ConnectDB (QString username, QString password);
	QSqlDatabase* GetDataBase (){return m_db;}
    void setHost (QString host);
    void setPort (unsigned int port);

private:
	QSqlDatabase* m_db;
	MySQLModule (const MySQLModule&);
	MySQLModule& operator= (const MySQLModule&);
};

typedef Singleton<MySQLModule> SMySQLModule;

#endif // MYSQLMODULE_H
