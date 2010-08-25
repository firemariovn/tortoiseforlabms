/****************************************************************************
** Meta object code from reading C++ file 'MySQLInfoDlg.h'
**
** Created: Wed Aug 25 17:55:46 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../MySQLInfoDlg.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MySQLInfoDlg.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MySQLInfoDlg[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      19,   14,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MySQLInfoDlg[] = {
    "MySQLInfoDlg\0\0host\0lookedUp(QHostInfo)\0"
};

const QMetaObject MySQLInfoDlg::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_MySQLInfoDlg,
      qt_meta_data_MySQLInfoDlg, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MySQLInfoDlg::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MySQLInfoDlg::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MySQLInfoDlg::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MySQLInfoDlg))
        return static_cast<void*>(const_cast< MySQLInfoDlg*>(this));
    return QDialog::qt_metacast(_clname);
}

int MySQLInfoDlg::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: lookedUp((*reinterpret_cast< const QHostInfo(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
