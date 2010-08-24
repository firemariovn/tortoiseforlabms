#ifndef MYSQLINFODLG_H
#define MYSQLINFODLG_H

#include <QDialog>
#include <QHostInfo>
#include "ui_MySQLInfoDlg.h"

class MySQLInfoDlg : public QDialog
{
	Q_OBJECT

public:
	MySQLInfoDlg(QWidget *parent = 0);
	~MySQLInfoDlg();

public slots:
    void  lookedUp(const QHostInfo &host);
private:
    QString GetOSVersion ();
    QString GetHardwareInfo ();
    QString GetCPUBrandStr ();
    QString GetServerVersionStr ();
private:
	Ui::MySQLInfoDlgClass ui;
};

#endif // MYSQLINFODLG_H
