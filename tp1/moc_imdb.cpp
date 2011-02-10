/****************************************************************************
** Meta object code from reading C++ file 'imdb.h'
**
** Created: Wed Feb 9 10:39:01 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "imdb.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imdb.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_IMDb[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,    6,    5,    5, 0x05,

 // slots: signature, parameters, type, tag, flags
      70,   62,    5,    5, 0x0a,
     100,   95,    5,    5, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_IMDb[] = {
    "IMDb\0\0film,image\0"
    "filmDispo(QMap<QString,QStringList>,QPixmap)\0"
    "fichier\0changeFilmLocal(QString)\0film\0"
    "changeFilmInternet(QString)\0"
};

const QMetaObject IMDb::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_IMDb,
      qt_meta_data_IMDb, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &IMDb::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *IMDb::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *IMDb::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_IMDb))
        return static_cast<void*>(const_cast< IMDb*>(this));
    return QObject::qt_metacast(_clname);
}

int IMDb::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: filmDispo((*reinterpret_cast< const QMap<QString,QStringList>(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2]))); break;
        case 1: changeFilmLocal((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: changeFilmInternet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void IMDb::filmDispo(const QMap<QString,QStringList> & _t1, const QPixmap & _t2)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
