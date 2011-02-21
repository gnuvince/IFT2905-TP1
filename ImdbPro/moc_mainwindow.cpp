/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Sun Feb 20 12:07:51 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      25,       // signalCount

 // signals: signature, parameters, type, tag, flags
      18,   12,   11,   11, 0x05,
      49,   42,   11,   11, 0x05,
      73,   42,   11,   11, 0x05,
      96,   42,   11,   11, 0x05,
     121,   42,   11,   11, 0x05,
     144,   42,   11,   11, 0x05,
     168,   42,   11,   11, 0x05,
     194,   42,   11,   11, 0x05,
     221,   42,   11,   11, 0x05,
     246,   42,   11,   11, 0x05,
     279,   42,   11,   11, 0x05,
     307,   42,   11,   11, 0x05,
     332,   42,   11,   11, 0x05,
     363,   42,   11,   11, 0x05,
     389,   42,   11,   11, 0x05,
     424,  419,   11,   11, 0x05,
     459,   42,   11,   11, 0x05,
     482,  419,   11,   11, 0x05,
     509,  419,   11,   11, 0x05,
     548,   42,   11,   11, 0x05,
     583,  419,   11,   11, 0x05,
     610,  419,   11,   11, 0x05,
     647,  419,   11,   11, 0x05,
     679,  419,   11,   11, 0x05,
     716,   42,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     762,  751,   11,   11, 0x0a,
     806,   11,   11,   11, 0x0a,
     820,  419,   11,   11, 0x0a,
     859,  419,   11,   11, 0x0a,
     890,  419,   11,   11, 0x0a,
     933,   42,   11,   11, 0x0a,
     972,  419,   11,   11, 0x0a,
    1003,  419,   11,   11, 0x0a,
    1044,  419,   11,   11, 0x0a,
    1080,  419,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0image\0film_set_cover(QPixmap)\0"
    "string\0film_set_title(QString)\0"
    "film_set_year(QString)\0film_set_rating(QString)\0"
    "film_set_rank(QString)\0film_set_votes(QString)\0"
    "film_set_country(QString)\0"
    "film_set_director(QString)\0"
    "film_set_author(QString)\0"
    "film_set_original_music(QString)\0"
    "film_set_languages(QString)\0"
    "film_set_genres(QString)\0"
    "film_set_aspect_ratio(QString)\0"
    "film_set_runtime(QString)\0"
    "film_set_mpaa_rating(QString)\0list\0"
    "film_set_certificates(QStringList)\0"
    "film_set_plot(QString)\0"
    "film_set_cast(QStringList)\0"
    "film_set_stunt_performers(QStringList)\0"
    "film_set_casting_director(QString)\0"
    "film_set_akas(QStringList)\0"
    "film_set_transportation(QStringList)\0"
    "film_set_misc_crew(QStringList)\0"
    "film_set_misc_companies(QStringList)\0"
    "film_set_full_sized_cover(QString)\0"
    "film,image\0dispatch(QMap<QString,QStringList>,QPixmap)\0"
    "search_film()\0display_film_certificates(QStringList)\0"
    "display_film_cast(QStringList)\0"
    "display_film_stunt_performers(QStringList)\0"
    "display_film_full_sized_cover(QString)\0"
    "display_film_akas(QStringList)\0"
    "display_film_transportation(QStringList)\0"
    "display_film_misc_crew(QStringList)\0"
    "display_film_misc_companies(QStringList)\0"
};

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow,
      qt_meta_data_MainWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &MainWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: film_set_cover((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 1: film_set_title((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: film_set_year((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: film_set_rating((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: film_set_rank((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: film_set_votes((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: film_set_country((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: film_set_director((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: film_set_author((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 9: film_set_original_music((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 10: film_set_languages((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: film_set_genres((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 12: film_set_aspect_ratio((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: film_set_runtime((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 14: film_set_mpaa_rating((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 15: film_set_certificates((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 16: film_set_plot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 17: film_set_cast((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 18: film_set_stunt_performers((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 19: film_set_casting_director((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 20: film_set_akas((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 21: film_set_transportation((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 22: film_set_misc_crew((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 23: film_set_misc_companies((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 24: film_set_full_sized_cover((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 25: dispatch((*reinterpret_cast< const QMap<QString,QStringList>(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2]))); break;
        case 26: search_film(); break;
        case 27: display_film_certificates((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 28: display_film_cast((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 29: display_film_stunt_performers((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 30: display_film_full_sized_cover((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 31: display_film_akas((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 32: display_film_transportation((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 33: display_film_misc_crew((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        case 34: display_film_misc_companies((*reinterpret_cast< const QStringList(*)>(_a[1]))); break;
        default: ;
        }
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::film_set_cover(const QPixmap & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::film_set_title(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::film_set_year(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::film_set_rating(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::film_set_rank(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::film_set_votes(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::film_set_country(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::film_set_director(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainWindow::film_set_author(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainWindow::film_set_original_music(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MainWindow::film_set_languages(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MainWindow::film_set_genres(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MainWindow::film_set_aspect_ratio(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MainWindow::film_set_runtime(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MainWindow::film_set_mpaa_rating(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}

// SIGNAL 15
void MainWindow::film_set_certificates(const QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void MainWindow::film_set_plot(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MainWindow::film_set_cast(const QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MainWindow::film_set_stunt_performers(const QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void MainWindow::film_set_casting_director(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 19, _a);
}

// SIGNAL 20
void MainWindow::film_set_akas(const QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void MainWindow::film_set_transportation(const QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void MainWindow::film_set_misc_crew(const QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}

// SIGNAL 23
void MainWindow::film_set_misc_companies(const QStringList & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 23, _a);
}

// SIGNAL 24
void MainWindow::film_set_full_sized_cover(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 24, _a);
}
QT_END_MOC_NAMESPACE
