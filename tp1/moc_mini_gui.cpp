/****************************************************************************
** Meta object code from reading C++ file 'mini_gui.h'
**
** Created: Wed Feb 9 10:39:01 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mini_gui.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mini_gui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MiniGUI[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      20,    9,    8,    8, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MiniGUI[] = {
    "MiniGUI\0\0film,image\0"
    "afficheFilm(QMap<QString,QStringList>,QPixmap)\0"
};

const QMetaObject MiniGUI::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MiniGUI,
      qt_meta_data_MiniGUI, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MiniGUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MiniGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MiniGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MiniGUI))
        return static_cast<void*>(const_cast< MiniGUI*>(this));
    return QWidget::qt_metacast(_clname);
}

int MiniGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: afficheFilm((*reinterpret_cast< const QMap<QString,QStringList>(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2]))); break;
        default: ;
        }
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
