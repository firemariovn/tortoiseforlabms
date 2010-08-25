/****************************************************************************
** Meta object code from reading C++ file 'EntryPage.h'
**
** Created: Wed Aug 25 17:57:55 2010
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../EntryPage.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EntryPage.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_EntryPage[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      15,   11,   10,   10, 0x0a,
      42,   11,   10,   10, 0x0a,
      71,   10,   10,   10, 0x0a,
      93,   10,   10,   10, 0x0a,
     111,   10,   10,   10, 0x0a,
     129,   10,   10,   10, 0x0a,
     145,   10,   10,   10, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_EntryPage[] = {
    "EntryPage\0\0str\0entryGetAgentSlot(QString)\0"
    "entryGetProNameSlot(QString)\0"
    "entryGetBuyTimeSlot()\0entryBuyConfirm()\0"
    "entryGetConfirm()\0entryBuyReset()\0"
    "entryGetReset()\0"
};

const QMetaObject EntryPage::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_EntryPage,
      qt_meta_data_EntryPage, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &EntryPage::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *EntryPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *EntryPage::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_EntryPage))
        return static_cast<void*>(const_cast< EntryPage*>(this));
    return QWidget::qt_metacast(_clname);
}

int EntryPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: entryGetAgentSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: entryGetProNameSlot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: entryGetBuyTimeSlot(); break;
        case 3: entryBuyConfirm(); break;
        case 4: entryGetConfirm(); break;
        case 5: entryBuyReset(); break;
        case 6: entryGetReset(); break;
        default: ;
        }
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
