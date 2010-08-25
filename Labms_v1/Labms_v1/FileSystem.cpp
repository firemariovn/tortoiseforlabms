#include "FileSystem.h"
#include <QMessageBox>
#include <QApplication>
#include <QDir>
#include <QString>


FileSystem::FileSystem(QObject *parent)
    : QObject(parent)
{
    // 创建一个默认的用于导出的文件的临时文件夹
    QDir temp (getAppDirPath());
    if (!temp.exists ("temp")){
        //QDir temp1 (getAppDirPath());
        if (temp.mkdir (tr("temp")) == false){
            //QMessageBox::warning (this, "warning", QString::fromLocal8Bit("起始时间不得晚于终止时间!"), QMessageBox::Yes);
        }
    }
}

FileSystem::~FileSystem()
{

}

QString FileSystem::getAppDirPath()const{
    return QCoreApplication::applicationDirPath();
}

QString FileSystem::getAppFilePath()const{
    return QCoreApplication::applicationFilePath();
}

QString FileSystem::getTempDirPath()const{
    return QString (getAppDirPath() + tr("temp"));
}