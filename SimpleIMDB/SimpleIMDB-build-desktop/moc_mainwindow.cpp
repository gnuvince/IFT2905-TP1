/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created: Wed Feb 9 19:58:21 2011
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SimpleIMDB/mainwindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_MainWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: signature, parameters, type, tag, flags
      17,   12,   11,   11, 0x05,
      51,   45,   11,   11, 0x05,
      82,   75,   11,   11, 0x05,
     112,  107,   11,   11, 0x05,
     143,  135,   11,   11, 0x05,
     177,  169,   11,   11, 0x05,
     212,  203,   11,   11, 0x05,
     244,  239,   11,   11, 0x05,
     274,  267,   11,   11, 0x05,
     313,  306,   11,   11, 0x05,

 // slots: signature, parameters, type, tag, flags
     348,  337,   11,   11, 0x0a,
     400,   11,   11,   11, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_MainWindow[] = {
    "MainWindow\0\0film\0changeFilmInternet(QString)\0"
    "title\0set_film_title(QString)\0rating\0"
    "set_film_rating(QString)\0rank\0"
    "set_film_rank(QString)\0country\0"
    "set_film_country(QString)\0runtime\0"
    "set_film_runtime(QString)\0director\0"
    "set_film_director(QString)\0plot\0"
    "set_film_plot(QString)\0actors\0"
    "set_film_actors(QList<QString>)\0pixmap\0"
    "set_film_cover(QPixmap)\0film,image\0"
    "field_dispatcher(QMap<QString,QStringList>,QPixmap)\0"
    "search_movie()\0"
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
        case 0: changeFilmInternet((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: set_film_title((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: set_film_rating((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: set_film_rank((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: set_film_country((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: set_film_runtime((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: set_film_director((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: set_film_plot((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: set_film_actors((*reinterpret_cast< const QList<QString>(*)>(_a[1]))); break;
        case 9: set_film_cover((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 10: field_dispatcher((*reinterpret_cast< const QMap<QString,QStringList>(*)>(_a[1])),(*reinterpret_cast< const QPixmap(*)>(_a[2]))); break;
        case 11: search_movie(); break;
        default: ;
        }
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::changeFilmInternet(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::set_film_title(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::set_film_rating(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::set_film_rank(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void MainWindow::set_film_country(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void MainWindow::set_film_runtime(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void MainWindow::set_film_director(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::set_film_plot(const QString & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void MainWindow::set_film_actors(const QList<QString> & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainWindow::set_film_cover(const QPixmap & _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_END_MOC_NAMESPACE
