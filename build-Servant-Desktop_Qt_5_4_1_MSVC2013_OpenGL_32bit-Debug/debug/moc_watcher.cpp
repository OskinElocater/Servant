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
    QByteArrayData data[15];
    char stringdata[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Watcher_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Watcher_t qt_meta_stringdata_Watcher = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Watcher"
QT_MOC_LITERAL(1, 8, 11), // "dir_changed"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 8), // "QString&"
QT_MOC_LITERAL(4, 30, 4), // "path"
QT_MOC_LITERAL(5, 35, 11), // "ext_changed"
QT_MOC_LITERAL(6, 47, 3), // "ext"
QT_MOC_LITERAL(7, 51, 11), // "cmd_changed"
QT_MOC_LITERAL(8, 63, 3), // "cmd"
QT_MOC_LITERAL(9, 67, 19), // "setDefaultExtension"
QT_MOC_LITERAL(10, 87, 13), // "setDefaultDir"
QT_MOC_LITERAL(11, 101, 17), // "setDefaultCommand"
QT_MOC_LITERAL(12, 119, 19), // "getDefaultExtension"
QT_MOC_LITERAL(13, 139, 13), // "getDefaultDir"
QT_MOC_LITERAL(14, 153, 17) // "getDefaultCommand"

    },
    "Watcher\0dir_changed\0\0QString&\0path\0"
    "ext_changed\0ext\0cmd_changed\0cmd\0"
    "setDefaultExtension\0setDefaultDir\0"
    "setDefaultCommand\0getDefaultExtension\0"
    "getDefaultDir\0getDefaultCommand"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Watcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x0a /* Public */,
       5,    1,   62,    2, 0x0a /* Public */,
       7,    1,   65,    2, 0x0a /* Public */,
       9,    1,   68,    2, 0x0a /* Public */,
      10,    1,   71,    2, 0x0a /* Public */,
      11,    1,   74,    2, 0x0a /* Public */,
      12,    0,   77,    2, 0x0a /* Public */,
      13,    0,   78,    2, 0x0a /* Public */,
      14,    0,   79,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, 0x80000000 | 3,    8,
    QMetaType::Void, 0x80000000 | 3,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Watcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Watcher *_t = static_cast<Watcher *>(_o);
        switch (_id) {
        case 0: _t->dir_changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->ext_changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->cmd_changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->setDefaultExtension((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->setDefaultDir((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->setDefaultCommand((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->getDefaultExtension(); break;
        case 7: _t->getDefaultDir(); break;
        case 8: _t->getDefaultCommand(); break;
        default: ;
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
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
