#include "MySQLInfoDlg.h"
#include "MySQLModule.h"
#include <QSysInfo>
#include <QMessageBox>
#include <QSqlError>
#include <QHostInfo>
#include <QHostAddress>
#include <windows.h>
#include <intrin.h>

MySQLInfoDlg::MySQLInfoDlg(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

    MySQLModule& sql = SMySQLModule::getInstance();
    ui.m_userName->setText (sql.GetDataBase()->userName());
    ui.m_host->setText (sql.GetDataBase()->hostName());
    ui.m_port->setText (QString::number(sql.GetDataBase()->port(), 10));


    ui.m_serverVersion->setText (GetServerVersionStr());

    QHostInfo::lookupHost(sql.GetDataBase()->hostName(), this, SLOT(lookedUp(QHostInfo)));

//     QHostAddress serverAddress (sql.GetDataBase()->hostName());
//     QHostInfo info = QHostInfo::fromName();
//     ui.m_serverNetworkName->setText (info.hostName());
//     if (!info.addresses().isEmpty()) {
//         QHostAddress address = info.addresses().first();
//         // use the first IP address
//         ui.m_serverIP->setText (address.toString());
//     }
//     else
//     {
//         ui.m_serverIP->setText ("UnKnown");
//     }

    ui.m_clientVersion->setText ("MySQLModule 1.0");
    ui.m_clientNetworkName->setText (QHostInfo::localHostName());
    ui.m_clientIP->setText (QHostInfo::fromName(QHostInfo::localHostName()).addresses().first().toString());
    ui.m_clientOS->setText (GetOSVersion());
    ui.m_clientHardware->setText (GetCPUBrandStr());
}

MySQLInfoDlg::~MySQLInfoDlg()
{

}


QString MySQLInfoDlg::GetOSVersion(){
    QString retStr;

    QSysInfo::WinVersion wv = QSysInfo::windowsVersion();
    switch (wv){
        case QSysInfo::WV_Me:
            retStr = "Windows Me";
            break;
        case QSysInfo::WV_NT:
            retStr = "Windows NT";
            break;
        case QSysInfo::WV_2000:
            retStr = "Windows 2000";
            break;
        case QSysInfo::WV_5_1:
            retStr = "Windows XP";
            break;
        case QSysInfo::WV_2003:
            retStr = "Windows 2003";
            break;
        case QSysInfo::WV_VISTA:
            retStr = "Windows VISTA";
            break;
        case QSysInfo::WV_WINDOWS7:
            retStr = "Windows 7";
            break;
    }
    

    return retStr;
}

QString MySQLInfoDlg::GetHardwareInfo(){
    QString retStr;

    SYSTEM_INFO siSysInfo;
    // Copy the hardware information to the SYSTEM_INFO structure. 

    GetSystemInfo(&siSysInfo); 
    //siSysInfo.dwOemId;
    

    return retStr;
}

QString MySQLInfoDlg::GetCPUBrandStr(){

    char CPUString[0x20];
    char CPUBrandString[0x40];
    int CPUInfo[4] = {-1};

    unsigned    nIds, nExIds, i;

    __cpuid(CPUInfo, 0);
    nIds = CPUInfo[0];
    memset(CPUString, 0, sizeof(CPUString));
    *((int*)CPUString) = CPUInfo[1];
    *((int*)(CPUString+4)) = CPUInfo[3];
    *((int*)(CPUString+8)) = CPUInfo[2];

    // Calling __cpuid with 0x80000000 as the InfoType argument
    // gets the number of valid extended IDs.
    __cpuid(CPUInfo, 0x80000000);
    nExIds = CPUInfo[0];
    memset(CPUBrandString, 0, sizeof(CPUBrandString));

    // Get the information associated with each extended ID.
    for (i=0x80000000; i<=nExIds; ++i)
    {
        __cpuid(CPUInfo, i);

        // Interpret CPU brand string and cache information.
        if  (i == 0x80000002)
            memcpy(CPUBrandString, CPUInfo, sizeof(CPUInfo));
        else if  (i == 0x80000003)
            memcpy(CPUBrandString + 16, CPUInfo, sizeof(CPUInfo));
        else if  (i == 0x80000004)
            memcpy(CPUBrandString + 32, CPUInfo, sizeof(CPUInfo));
    }

     // Display all the information in user-friendly format.

    if  (nExIds >= 0x80000004)
        return QString (CPUBrandString);
    else
        return QString (CPUString);
}

QString MySQLInfoDlg::GetServerVersionStr (){
    QString retStr;

    MySQLModule& sql = SMySQLModule::getInstance();
    QSqlQuery sqlquery (*sql.GetDataBase());
    if (sqlquery.exec ("SELECT VERSION()") == false){
        QMessageBox::warning(this,tr("Warning"), sqlquery.lastError().text(),QMessageBox::Yes);
    }

    if (sqlquery.next())
    {
        retStr = sqlquery.value(0).toString();
    }
    return retStr;

}

void MySQLInfoDlg::lookedUp(const QHostInfo &host){
    if (host.error() != QHostInfo::NoError) {
        qDebug() << "Lookup failed:" << host.errorString();
        return;
    }

    ui.m_serverNetworkName->setText(host.hostName());
    ui.m_serverIP->setText(host.addresses().first().toString());
}
