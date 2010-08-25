/****************************************************************************
** Meta object code from reading C++ file 'QueryPage.h'
**
** Created: Wed Aug 25 17:55:46 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../QueryPage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QueryPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QueryPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      17,   11,   10,   10, 0x0a,
      44,   11,   10,   10, 0x0a,
      72,   11,   10,   10, 0x0a,
      91,   10,   10,   10, 0x0a,
     121,   10,   10,   10, 0x0a,
     149,   10,   10,   10, 0x0a,
     179,   10,   10,   10, 0x0a,
     207,   10,   10,   10, 0x0a,
     229,   10,   10,   10, 0x0a,
     252,   10,   10,   10, 0x0a,
     275,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_QueryPage[] = {
    "QueryPage\0\0index\0changeDetailGetPeople(int)\0"
    "changeDetailGetProName(int)\0"
    "changeTabSlot(int)\0changeBuytimeStart(QDateTime)\0"
    "changeBuytimeEnd(QDateTime)\0"
    "changeGettimeStart(QDateTime)\0"
    "changeGettimeEnd(QDateTime)\0"
    "exportPeopleToExcel()\0exportProNameToExcel()\0"
    "exportBuyTimeToExcel()\0exportGetTimeToExcel()\0"
};

const QMetaObject QueryPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_QueryPage,
      qt_meta_data_QueryPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QueryPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QueryPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QueryPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QueryPage))
        return static_cast<void*>(const_cast< QueryPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int QueryPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: changeDetailGetPeople((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: changeDetailGetProName((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: changeTabSlot((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: changeBuytimeStart((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 4: changeBuytimeEnd((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 5: changeGettimeStart((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 6: changeGettimeEnd((*reinterpret_cast< const QDateTime(*)>(_a[1]))); break;
        case 7: exportPeopleToExcel(); break;
        case 8: exportProNameToExcel(); break;
        case 9: exportBuyTimeToExcel(); break;
        case 10: exportGetTimeToExcel(); break;
        default: ;
        }
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
