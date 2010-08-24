#include "MySQLModule.h"
#include <QString>

MySQLModule::MySQLModule(){
	m_db = NULL;
	m_db = new QSqlDatabase;
	*m_db = QSqlDatabase::addDatabase("QMYSQL");
	m_db->setHostName("127.0.0.1");
	m_db->setPort(3306);
	m_db->setDatabaseName("sislabms");
}
MySQLModule::MySQLModule(QObject *parent)
	: QObject(parent)
{
	m_db = NULL;
	m_db = new QSqlDatabase;
	m_db->addDatabase("QMYSQL", "ssssa");
	m_db->setHostName("127.0.0.1");
	m_db->setPort(3306);
	m_db->setDatabaseName("sislabms");
}

MySQLModule::~MySQLModule()
{
	//	m_db->removeDatabase();
	m_db->close();
	delete m_db;
}

bool MySQLModule::ConnectDB(QString username, QString password){
	m_db->setUserName(username);
	m_db->setPassword(password);
	return (m_db->open());
}

void MySQLModule::setHost(QString host){
    m_db->setHostName (host);
}

void MySQLModule::setPort(unsigned int port){
    m_db->setPort(port);
}

