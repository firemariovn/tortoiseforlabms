#ifndef LOGINDLG_H
#define LOGINDLG_H

#include <QDialog>


#include "ui_LoginDlg.h"

#define USERINFO_CONFIG_FILE "userinfo.xml"

class LoginDlg : public QDialog
{
	Q_OBJECT

public:
	LoginDlg(QWidget *parent = 0);
	~LoginDlg();

    bool eventFilter(QObject *target, QEvent *event);

public slots:
	void OnConfirmBtnClicked ();

private:
    void xmlParseDBSource ();
private:
	Ui::LoginDlgClass ui;
};

#endif // LOGINDLG_H
