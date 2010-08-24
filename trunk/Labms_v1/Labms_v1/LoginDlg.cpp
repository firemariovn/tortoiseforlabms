#include "LoginDlg.h"
#include "MySQLModule.h"
#include <QSqlError>
#include <QMessageBox>
#include <QToolTip>
#include <QIntValidator>
#include <QXmlStreamWriter>
#include <QXmlStreamReader>
#include <QFile>
#include <windows.h>

LoginDlg::LoginDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);
	
    QIntValidator* validator = new QIntValidator (0, 65535, ui.m_port);
    ui.m_host->setText ("localhost");
    ui.m_port->setValidator(validator);
    ui.m_port->setText ("3306");
	ui.m_password->setEchoMode (QLineEdit::Password);
	connect(ui.m_ConfirmBtn, SIGNAL(clicked()), this, SLOT(OnConfirmBtnClicked()));

    ui.m_password->installEventFilter(this);

    // 读取配置文件
    QFile* m_file = new QFile(USERINFO_CONFIG_FILE);
    if (!m_file->open(QIODevice::ReadOnly | QIODevice::Text))
        QMessageBox::warning (this, tr("Warning"), QString::fromLocal8Bit("打开配置文件失败"), QMessageBox::Yes);

    // 分析配置文件
    QXmlStreamReader* m_xmlreader = new QXmlStreamReader (m_file);
    while (!m_xmlreader->atEnd()){
        m_xmlreader->readNext ();
        if (m_xmlreader->isStartElement()){
            if (m_xmlreader->name() == "dbsource"){
                while (!m_xmlreader->atEnd()){
                    m_xmlreader->readNext();
                    if  (m_xmlreader->name() == "dbhost"){
                        ui.m_host->setText(m_xmlreader->readElementText());
                    }
                    else if (m_xmlreader->name() == "dbport"){
                        ui.m_port->setText(m_xmlreader->readElementText());
                    }
                    else if (m_xmlreader->name() == "dbuser"){
                        ui.m_name->setText(m_xmlreader->readElementText());
                    
                    }
                }
            }
        }
    }
    delete m_xmlreader;  
    m_file->close();
}

LoginDlg::~LoginDlg()
{
}

void LoginDlg::OnConfirmBtnClicked (){
	MySQLModule& sql = SMySQLModule::getInstance();
    QString host = ui.m_host->text();
    unsigned int port = ui.m_port->text().toUInt();
	QString name = ui.m_name->text();
	QString pwd = ui.m_password->text();

    sql.setHost(host);
    sql.setPort(port);

	if (sql.ConnectDB(name, pwd) == true){
		accept();
	}
	else{
        QMessageBox::warning (this, tr("Warning"), sql.GetDataBase()->lastError().text(), QMessageBox::Yes);
		ui.m_password->clear();
		ui.m_password->setFocus();
        return;
	}

    // 读取配置文件
    QFile* m_file = new QFile(USERINFO_CONFIG_FILE);
    if (!m_file->open(QIODevice::WriteOnly | QIODevice::Text))
        QMessageBox::warning (this, tr("Warning"), QString::fromLocal8Bit("打开配置文件失败"), QMessageBox::Yes);

    QXmlStreamWriter* m_xmlwriter = new QXmlStreamWriter (m_file);
    m_xmlwriter->setAutoFormatting (true);
    m_xmlwriter->writeStartDocument();

    m_xmlwriter->writeStartElement ("dbsource");
    m_xmlwriter->writeTextElement("dbhost", host);
    m_xmlwriter->writeTextElement("dbport", QString::number(port, 10));
    m_xmlwriter->writeTextElement("dbuser", name);
    m_xmlwriter->writeEndElement();

    m_xmlwriter->writeEndDocument();

    delete m_xmlwriter;

    m_file->close();
}


bool LoginDlg::eventFilter(QObject *target, QEvent *event) 
{ 
    if (target == ui.m_password) 
    { 
        if (event->type() == QEvent::KeyPress) 
        { 
            bool isCapsOn = (::GetKeyState(VK_CAPITAL) & 0x1);
            if(isCapsOn) 
            { 
                QToolTip::showText(ui.m_password->mapToGlobal(QPoint()), "Warning: CapsLock is ON."); 
            } 
            else 
            { 
                QToolTip::showText(ui.m_password->mapToGlobal(QPoint()), ""); 
            } 
        } 
    } 
    return QDialog::eventFilter(target, event); 
} 
