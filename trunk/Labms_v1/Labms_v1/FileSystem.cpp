#include "FileSystem.h"
#include <QMessageBox>
#include <QApplication>
#include <QDir>
#include <QString>


FileSystem::FileSystem(QObject *parent)
    : QObject(parent)
{
    // ����һ��Ĭ�ϵ����ڵ������ļ�����ʱ�ļ���
    QDir temp (getAppDirPath());
    if (!temp.exists ("temp")){
        //QDir temp1 (getAppDirPath());
        if (temp.mkdir (tr("temp")) == false){
            //QMessageBox::warning (this, "warning", QString::fromLocal8Bit("��ʼʱ�䲻��������ֹʱ��!"), QMessageBox::Yes);
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