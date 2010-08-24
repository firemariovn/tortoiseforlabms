/****************************************************************************
** Meta object code from reading C++ file 'Labms_v1.h'
**
** Created: Mon Aug 23 23:46:02 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Labms_v1.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Labms_v1.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_Labms_v1[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      27,   10,    9,    9, 0x0a,
      73,    9,    9,    9, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_Labms_v1[] = {
    "Labms_v1\0\0current,previous\0"
    "changePage(QListWidgetItem*,QListWidgetItem*)\0"
    "showMySQLInfoDlg()\0"
};

const QMetaObject Labms_v1::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Labms_v1,
      qt_meta_data_Labms_v1, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &Labms_v1::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *Labms_v1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *Labms_v1::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_Labms_v1))
        return static_cast<void*>(const_cast< Labms_v1*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Labms_v1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changePage((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 1: showMySQLInfoDlg(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
