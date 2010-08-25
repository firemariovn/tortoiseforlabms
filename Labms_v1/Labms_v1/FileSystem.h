#ifndef FILESYSTEM_H
#define FILESYSTEM_H

#include <QObject>
#include <QMessageBox>
#include "Singleton.h"

class FileSystem : public QObject
{
    Q_OBJECT

    friend class Singleton<FileSystem>; 

public:
    QString getAppDirPath ()const;
    QString getAppFilePath ()const;
    QString getTempDirPath () const;

private:
    FileSystem(QObject *parent = NULL);
    ~FileSystem();

    FileSystem (const FileSystem& fs);
    FileSystem& operator= (const FileSystem& fs);
};

typedef Singleton<FileSystem> SFileSystem;

#endif // FILESYSTEM_H
