#include "Labms_v1.h"
#include "LoginDlg.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//Labms_v1 *pMainFrame;

	LoginDlg login;
	login.show();
	if (login.exec() == QDialog::Accepted){

		Labms_v1 mainFrame;
		mainFrame.show();
		//pMainFrame = new Labms_v1;
		//pMainFrame->show();
		return a.exec();
	}else{
		return 0;
	}

}
