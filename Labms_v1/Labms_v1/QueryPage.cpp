#include "QueryPage.h"
#include <QMessageBox>
#include "MySQLModule.h"
#include <QSqlQuery>
#include <QSqlError>


QueryPage::QueryPage(QWidget *parent)
	: QWidget(parent)
{
 	ui.setupUi(this);

    connect (ui.m_tabWidget, SIGNAL(currentChanged(int)), this, SLOT(changeTabSlot(int)));
    connect (ui.m_getPeople_detail, SIGNAL(activated(int)), this, SLOT(changeDetailGetPeople(int)));
    connect (ui.m_getProName_detail, SIGNAL(activated(int)), this, SLOT(changeDetailGetProName(int)));

    connect (ui.m_buytimeStart, SIGNAL(dateTimeChanged (const QDateTime&)), this, SLOT(changeBuytimeStart(const QDateTime&)));
    connect (ui.m_buytimeEnd, SIGNAL(dateTimeChanged (const QDateTime&)), this, SLOT(changeBuytimeEnd(const QDateTime&)));
    connect (ui.m_gettimeStart, SIGNAL(dateTimeChanged (const QDateTime&)), this, SLOT(changeGettimeStart(const QDateTime&)));
    connect (ui.m_gettimeEnd, SIGNAL(dateTimeChanged (const QDateTime&)), this, SLOT(changeGettimeEnd (const QDateTime&)));

    ui.m_buytimeEnd->setDateTime(QDateTime::currentDateTime());
    ui.m_gettimeEnd->setDateTime(QDateTime::currentDateTime());

    // for generate currentChange signal
    {
        ui.m_tabWidget->setCurrentIndex (1);
        ui.m_tabWidget->setCurrentIndex (0);
    }

}

QueryPage::~QueryPage()
{

}


void QueryPage::changeTabSlot(int index){

    MySQLModule& sql = SMySQLModule::getInstance();
    QSqlQuery sqlQuery(*sql.GetDataBase());
    switch (index){
        case 0:
            {
                QStringList getPeopleList;
                sqlQuery.exec ("select DISTINCT GetPeople from gettable;");
                while (sqlQuery.next()){
                    getPeopleList.append(sqlQuery.record().value(0).toString());
                }
                ui.m_getPeople_detail->clear();
                ui.m_getPeople_detail->addItems (getPeopleList);
                if (ui.m_getPeople_detail->count() > 0){
                    ui.m_getPeople_detail->setCurrentIndex (0);
                    changeDetailGetPeople (0);
                }
                break;
            }
        case 1:
            {                
                QStringList getProNameList;
                sqlQuery.exec ("SELECT DISTINCT ProName from buytable;");
                while (sqlQuery.next()){
                    getProNameList.append(sqlQuery.record().value(0).toString());
                }
                ui.m_getProName_detail->clear();
                ui.m_getProName_detail->addItems (getProNameList);
                if (ui.m_getProName_detail->count() > 0){
                    ui.m_getProName_detail->setCurrentIndex (0);
                    changeDetailGetProName (0);
                }
                break;                
            }
            break;
    }

    sqlQuery.clear();
}


void QueryPage::changeDetailGetPeople(int index){    
    MySQLModule& sql = SMySQLModule::getInstance();

    QSqlTableModel* model = new QSqlTableModel (NULL, *(sql.GetDataBase()));

    QString peopleName = ui.m_getPeople_detail->currentText();
    model->setTable("gettable");
    model->setFilter(QObject::tr("GetPeople = '%1'").arg(peopleName)); //根据姓名进行筛选
    if ( ! model->select() ) {
        QMessageBox::information(this,"Error",model->lastError().text());
        return;
    }
    ui.m_getPeople_tableView->setModel(model);

}

void QueryPage::changeDetailGetProName(int index){
    MySQLModule& sql = SMySQLModule::getInstance();

    QSqlTableModel* model = new QSqlTableModel (NULL, *(sql.GetDataBase()));

    QString proName = ui.m_getProName_detail->currentText();
    model->setTable("buytable");
    model->setFilter(QObject::tr("ProName = '%1'").arg(proName)); //根据物品名字
    if ( ! model->select() ) {
        QMessageBox::information(this,"Error",model->lastError().text());
        return;
    }
    ui.m_getProName_tableView->setModel(model);

}

void QueryPage::changeGettimeStart(const QDateTime& dateTime){
    if (dateTime > ui.m_gettimeEnd->dateTime()){
        QMessageBox::warning (this, "warning", QString::fromLocal8Bit("起始时间不得晚于终止时间!"), QMessageBox::Yes);
        ui.m_gettimeStart->setFocus();
        return;
    }

    MySQLModule& sql = SMySQLModule::getInstance();

    QSqlTableModel* model = new QSqlTableModel (NULL, *(sql.GetDataBase()));

    QString startTime = ui.m_gettimeStart->dateTime().toString(Qt::ISODate);
    QString endTime = ui.m_gettimeEnd->dateTime().toString(Qt::ISODate);
    startTime.replace(QString("T"), QString(" "));
    endTime.replace(QString("T"), QString(" "));
    model->setTable("buytable");
    model->setFilter(QObject::tr("GetTime > '%1' and GetTime < '%2'").arg(startTime, endTime)); //根据物品名字
    if ( ! model->select() ) {
        QMessageBox::information(this,"Error",model->lastError().text());
        return;
    }
    ui.m_gettime_tableView->setModel(model);
}

void QueryPage::changeGettimeEnd(const QDateTime& dateTime){
    if (dateTime < ui.m_gettimeEnd->dateTime()){
        QMessageBox::warning (this, "warning", QString::fromLocal8Bit("终止时间不得早于起始时间!"), QMessageBox::Yes);
        ui.m_gettimeEnd->setFocus();
    }
    MySQLModule& sql = SMySQLModule::getInstance();

    QSqlTableModel* model = new QSqlTableModel (NULL, *(sql.GetDataBase()));

    QString startTime = ui.m_gettimeStart->dateTime().toString(Qt::ISODate);
    QString endTime = ui.m_gettimeEnd->dateTime().toString(Qt::ISODate);
    startTime.replace(QString("T"), QString(" "));
    endTime.replace(QString("T"), QString(" "));
    model->setTable("gettable");

    model->setFilter(QObject::tr("GetTime > '%1' and GetTime < '%2'").arg(startTime, endTime)); //根据物品名字
    if ( ! model->select() ) {
        QMessageBox::information(this,"Error",model->lastError().text());
        return;
    }
    ui.m_gettime_tableView->setModel(model);

}

void QueryPage::changeBuytimeStart(const QDateTime& dateTime){
    if (dateTime > ui.m_buytimeEnd->dateTime()){
        QMessageBox::warning (this, "warning", QString::fromLocal8Bit("起始时间不得晚于终止时间!"), QMessageBox::Yes);
        ui.m_buytimeStart->setFocus();
        return;
    }
    MySQLModule& sql = SMySQLModule::getInstance();

    QSqlTableModel* model = new QSqlTableModel (NULL, *(sql.GetDataBase()));

    QString startTime = ui.m_buytimeStart->dateTime().toString(Qt::ISODate);
    QString endTime = ui.m_buytimeEnd->dateTime().toString(Qt::ISODate);
    startTime.replace(QString("T"), QString(" "));
    endTime.replace(QString("T"), QString(" "));

    model->setTable("buytable");
    model->setFilter(QObject::tr("BuyTime > '%1' and BuyTime < '%2'").arg(startTime, endTime)); //根据物品名字
    if ( ! model->select() ) {
        QMessageBox::information(this,"Error",model->lastError().text());
        return;
    }
    ui.m_buytime_tableView->setModel(model);
}

void QueryPage::changeBuytimeEnd(const QDateTime& dateTime){
    if (dateTime < ui.m_buytimeStart->dateTime()){
        QMessageBox::warning (this, "warning", QString::fromLocal8Bit("终止时间不得早于起始时间!"), QMessageBox::Yes);
        ui.m_buytimeEnd->setFocus();
        return;
    }
    MySQLModule& sql = SMySQLModule::getInstance();

    QSqlTableModel* model = new QSqlTableModel (NULL, *(sql.GetDataBase()));

    QString startTime = ui.m_buytimeStart->dateTime().toString(Qt::ISODate);
    QString endTime = ui.m_buytimeEnd->dateTime().toString(Qt::ISODate);
    startTime.replace(QString("T"), QString(" "));
    endTime.replace(QString("T"), QString(" "));

    model->setTable("buytable");
    model->setFilter(QObject::tr("BuyTime > '%1' and BuyTime < '%2'").arg(startTime, endTime)); //根据物品名字
    if ( ! model->select() ) {
        QMessageBox::information(this,"Error",model->lastError().text());
        return;
    }
    ui.m_buytime_tableView->setModel(model);
}