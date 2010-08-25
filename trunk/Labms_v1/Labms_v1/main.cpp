#include "Labms_v1.h"
#include "LoginDlg.h"
#include <QtGui/QApplication>
#include "FileSystem.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	

    // 初始化文件系统结构
    FileSystem& fs = SFileSystem::getInstance();

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
