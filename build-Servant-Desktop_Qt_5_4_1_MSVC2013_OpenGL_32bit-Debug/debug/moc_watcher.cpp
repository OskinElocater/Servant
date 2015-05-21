/****************************************************************************
** Meta object code from reading C++ file 'watcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Servant/watcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'watcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Watcher_t {
    QByteArrayData data[16];
    char stringdata[174];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Watcher_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Watcher_t qt_meta_stringdata_Watcher = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Watcher"
QT_MOC_LITERAL(1, 8, 11), // "pathUpdated"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "QString&"
QT_MOC_LITERAL(4, 30, 4), // "path"
QT_MOC_LITERAL(5, 35, 11), // "dir_changed"
QT_MOC_LITERAL(6, 47, 19), // "dir_filters_changed"
QT_MOC_LITERAL(7, 67, 12), // "QStringList&"
QT_MOC_LITERAL(8, 80, 7), // "filters"
QT_MOC_LITERAL(9, 88, 20), // "file_filters_changed"
QT_MOC_LITERAL(10, 109, 11), // "cmd_changed"
QT_MOC_LITERAL(11, 121, 3), // "cmd"
QT_MOC_LITERAL(12, 125, 12), // "args_changed"
QT_MOC_LITERAL(13, 138, 4), // "args"
QT_MOC_LITERAL(14, 143, 15), // "on_file_changed"
QT_MOC_LITERAL(15, 159, 14) // "on_dir_changed"

    },
    "Watcher\0pathUpdated\0\0QString&\0path\0"
    "dir_changed\0dir_filters_changed\0"
    "QStringList&\0filters\0file_filters_changed\0"
    "cmd_changed\0cmd\0args_changed\0args\0"
    "on_file_changed\0on_dir_changed"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Watcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   57,    2, 0x0a /* Public */,
       6,    1,   60,    2, 0x0a /* Public */,
       9,    1,   63,    2, 0x0a /* Public */,
      10,    1,   66,    2, 0x0a /* Public */,
      12,    1,   69,    2, 0x0a /* Public */,
      14,    1,   72,    2, 0x0a /* Public */,
      15,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 3,   11,
    QMetaType::Void, 0x80000000 | 7,   13,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void Watcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Watcher *_t = static_cast<Watcher *>(_o);
        switch (_id) {
        case 0: _t->pathUpdated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->dir_changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->dir_filters_changed((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->file_filters_changed((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 4: _t->cmd_changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->args_changed((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 6: _t->on_file_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->on_dir_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Watcher::*_t)(QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Watcher::pathUpdated)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Watcher::staticMetaObject = {
    { &QFileSystemWatcher::staticMetaObject, qt_meta_stringdata_Watcher.data,
      qt_meta_data_Watcher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Watcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Watcher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Watcher.stringdata))
        return static_cast<void*>(const_cast< Watcher*>(this));
    return QFileSystemWatcher::qt_metacast(_clname);
}

int Watcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFileSystemWatcher::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Watcher::pathUpdated(QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
