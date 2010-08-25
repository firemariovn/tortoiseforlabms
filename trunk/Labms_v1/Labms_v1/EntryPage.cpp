#include "EntryPage.h"
#include "MySQLModule.h"
#include <QMessageBox>
//#include <QSqlError>
#include <qsqlerror.h>
#include <QCompleter>
#include <QDateTime>
#include <QStringListModel>
#include <QDebug>
//#include <QSqlQuery>

EntryPage::EntryPage(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

    init();

	connect (ui.m_buy_confirm, SIGNAL(clicked()), this, SLOT(entryBuyConfirm()));
    connect (ui.m_buy_reset, SIGNAL(clicked()), this, SLOT(entryBuyReset()));

    //textEdited
      //  editTextChanged
    connect (ui.m_get_agent, SIGNAL(textEdited(const QString&)), this, SLOT(entryGetAgentSlot(const QString&)));
    connect (ui.m_get_proName, SIGNAL(textEdited(const QString&)), this, SLOT(entryGetProNameSlot(const QString&)));

    connect (ui.m_get_agent, SIGNAL(editingFinished()), this, SLOT(entryGetBuyTimeSlot()));
    connect (ui.m_get_proName, SIGNAL(editingFinished()), this, SLOT(entryGetBuyTimeSlot()));

    connect (ui.m_get_confirm, SIGNAL (clicked()), this, SLOT(entryGetConfirm()));
    connect (ui.m_get_reset, SIGNAL(clicked()), this, SLOT(entryGetReset()));
}

EntryPage::~EntryPage()
{
		
}

void EntryPage::init(){

    // 领取窗口
    m_data_completer = new QCompleter (this);
    m_data_strListModel = new QStringListModel (this);
    ui.m_get_agent->setCompleter(m_data_completer);
    ui.m_get_proName->setCompleter (m_data_completer);
    
    entryBuyReset();
    entryGetReset();
}


void EntryPage::entryBuyReset(){
    ui.m_buyDate->setDateTime (QDateTime::currentDateTime());
    ui.m_ProName->setText("");
    ui.m_ProBrand->setText("");
    ui.m_Agent->setText("");
    ui.m_Volume->lineEdit ()->setText("");
    ui.m_BuyNum->lineEdit ()->setText("");
    ui.m_OrigUprice->lineEdit ()->setText("");
    ui.m_RebUprice->lineEdit ()->setText("");
    ui.m_Concen->setText("");
    ui.m_BuyPS->setText("");
}

void EntryPage::entryGetReset(){
    ui.m_get_time->setDateTime(QDateTime::currentDateTime());
    ui.m_get_people->setText ("");
    ui.m_get_ps->setText ("");
    ui.m_get_num->setText ("");
}
void EntryPage::entryBuyConfirm(){

    if (ui.m_ProName->text().isEmpty() == true
        || ui.m_Agent->text().isEmpty() == true
        || ui.m_BuyNum->currentText().isEmpty() == true
        || ui.m_OrigUprice->currentText().isEmpty() == true){
            QMessageBox::warning (this, tr("Warning"), QString::fromLocal8Bit("请填完打 * 的所有项目"), QMessageBox::Yes);
            return;            
    }

	QString buyDate = addQuotes(ui.m_buyDate->dateTime().toString (Qt::ISODate));
	QString proName = addQuotes(ui.m_ProName->text());
	QString proBrand = addQuotes(ui.m_ProBrand->text());
	QString agent = addQuotes(ui.m_Agent->text());
	QString volume = addQuotes(ui.m_Volume->currentText());
	QString buynum = addQuotes(ui.m_BuyNum->currentText());
	QString oriUprice = addQuotes(ui.m_OrigUprice->currentText());
	QString rebUprice = addQuotes(ui.m_RebUprice->currentText());
	QString concen = addQuotes(ui.m_Concen->text());
	QString buyPs = addQuotes(ui.m_BuyPS->toPlainText());

	QString queryStr;
	queryStr += "INSERT INTO buytable VALUES (";
	queryStr += proName, queryStr += ", ";
	queryStr += agent, queryStr += ", ";
 	queryStr += buyDate, queryStr += ", ";
 	queryStr += proBrand, queryStr += ", ";
 	queryStr += volume, queryStr += ", ";
 	queryStr += concen, queryStr += ", ";
 	queryStr += buynum, queryStr += ", ";
 	queryStr += oriUprice, queryStr += ", ";
	queryStr += rebUprice, queryStr += ", ";
	queryStr += buyPs, queryStr += ")";

	QSqlQuery sql(*(SMySQLModule::getInstance().GetDataBase()));
	if (sql.exec(queryStr) != true)
	{
		QMessageBox::warning(this,tr("Warning"), sql.lastError().text(),QMessageBox::Yes);
        ui.m_tipBuyLabel->setText (QString::fromLocal8Bit("Tip: 添加购买记录失败"));
	}
    else{
        ui.m_tipBuyLabel->setText (QString::fromLocal8Bit("Tip: 添加购买记录成功"));
        entryBuyReset();
    }
	sql.clear();
}

void EntryPage::entryGetAgentSlot (const QString& str){

    if (str.isEmpty() == true){
        return;
    }

    QSqlQuery sql(*(SMySQLModule::getInstance().GetDataBase()));

    QString querystr;
    querystr = "select Agent from buytable where Agent like ";

    QString strQuotes = "'";
    strQuotes += str;
    strQuotes += "%'";
    querystr += strQuotes;

    if (sql.exec(querystr) != true){
        QMessageBox::warning(this,tr("Warning"), sql.lastError().text(),QMessageBox::Yes);
    }
    
    QStringList compStr;
    while (sql.next()){
        compStr.append(sql.record().value(0).toString());
    }

    m_data_strListModel->setStringList(compStr);
    ui.m_get_agent->completer()->setModel(m_data_strListModel);

    sql.clear();
    ui.m_get_agent->setFocus();
}

void EntryPage::entryGetProNameSlot(const QString& str){
    if (str.isEmpty() == true){
        return;
    }

    QSqlQuery sql(*(SMySQLModule::getInstance().GetDataBase()));

    QString querystr;
    querystr = "select ProName from buytable where Agent like ";

    QString strQuotes = "'";
    strQuotes += str;
    strQuotes += "%'";
    querystr += strQuotes;

    if (sql.exec(querystr) != true){
        QMessageBox::warning(this,tr("Warning"), sql.lastError().text(),QMessageBox::Yes);
    }

    QStringList compStr;
    while (sql.next()){
        compStr.append(sql.record().value(0).toString());
    }

    m_data_strListModel->setStringList(compStr);
    ui.m_get_proName->completer()->setModel(m_data_strListModel);

    sql.clear();
    ui.m_get_proName->setFocus();
}

void EntryPage::entryGetConfirm(){
    if (ui.m_get_people->text().isEmpty() == true
        || ui.m_get_proName->text().isEmpty() == true
        || ui.m_get_agent->text().isEmpty() == true
        || ui.m_get_num->text().isEmpty() == true){
           QMessageBox::warning (this, tr("Warning"), QString::fromLocal8Bit("请填完打 * 的所有项目"), QMessageBox::Yes);
           return;
    }

    QString proName = addQuotes(ui.m_get_proName->text());
    QString agent = addQuotes(ui.m_get_agent->text());
    QString getDate = addQuotes(ui.m_get_time->dateTime ().toString (Qt::ISODate));
    QString getPeople = addQuotes(ui.m_get_people->text());   
    QString getNumber = addQuotes(ui.m_get_num->text());
    QString getPs = addQuotes(ui.m_get_ps->toPlainText());
    QString getBuytime = addQuotes(ui.m_get_buytime->currentText());

    QString queryStr;
    queryStr += "INSERT INTO gettable VALUES (";
    queryStr += proName, queryStr += ", ";
    queryStr += agent, queryStr += ", ";
    queryStr += getDate, queryStr += ", ";
    queryStr += getPeople, queryStr += ", ";
    queryStr += getNumber, queryStr += ", ";
    queryStr += getPs, queryStr += ", ";
    queryStr += getBuytime, queryStr += ")";

    QSqlQuery sql(*(SMySQLModule::getInstance().GetDataBase()));
    if (sql.exec(queryStr) != true)
    {
        QMessageBox::warning(this,tr("Warning"), sql.lastError().text(),QMessageBox::Yes);
        ui.m_tipGetLabel->setText(QString::fromLocal8Bit("Tip: 添加领取记录失败"));
        
    }
    else{
        ui.m_tipGetLabel->setText(QString::fromLocal8Bit("Tip: 添加领取记录成功"));
        entryGetReset();
    }
    sql.clear();
}

void EntryPage::entryGetBuyTimeSlot(){

    QString condition_proName = ui.m_get_proName->text();
    QString condition_agent = ui.m_get_agent->text();

    if (condition_agent.isEmpty() == true && condition_proName.isEmpty() == true){
        return ;
    }

    MySQLModule& sql = SMySQLModule::getInstance();

    QSqlQuery sqlQuery (*sql.GetDataBase());
    
    QString queryStr = "select BuyTime from buytable where ";

    QStringList queryStrItem;
    
    if (condition_proName.isEmpty() == false){
        QString temp = "ProName = ";
        temp += addQuotes(condition_proName);
        queryStrItem.append(temp);
    }
    if (condition_agent.isEmpty() == false){
        QString temp = "Agent = ";
        temp += addQuotes(condition_agent);
        queryStrItem.append(temp);
    }
    queryStr += queryStrItem.join (" and ");

    if (sqlQuery.exec(queryStr) != true)
    {
        QMessageBox::warning(this,tr("Warning"), sqlQuery.lastError().text(),QMessageBox::Yes);
    }

    QStringList compStr;
    while (sqlQuery.next()){
        QString temp = sqlQuery.record().value(0).toString();
        temp.replace(QString("T"), QString(" "));
        compStr.append(temp);
    }
    ui.m_get_buytime->clear ();
    ui.m_get_buytime->addItems (compStr);
    sqlQuery.clear();
}

QString EntryPage::addQuotes (QString& src){
	if (src.isEmpty() == true){
		return "NULL";
	}
	QString temp = "'";
	temp += src;
	temp += "'";
	return temp;
}


