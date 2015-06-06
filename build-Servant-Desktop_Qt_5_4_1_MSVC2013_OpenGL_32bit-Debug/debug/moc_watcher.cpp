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
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'watcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Watcher_t {
    QByteArrayData data[12];
    char stringdata[112];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Watcher_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Watcher_t qt_meta_stringdata_Watcher = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Watcher"
QT_MOC_LITERAL(1, 8, 11), // "ruleUpdated"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 5), // "Rule&"
QT_MOC_LITERAL(4, 27, 4), // "rule"
QT_MOC_LITERAL(5, 32, 15), // "on_file_changed"
QT_MOC_LITERAL(6, 48, 4), // "path"
QT_MOC_LITERAL(7, 53, 14), // "on_dir_changed"
QT_MOC_LITERAL(8, 68, 12), // "rulesUpdated"
QT_MOC_LITERAL(9, 81, 11), // "QList<Rule>"
QT_MOC_LITERAL(10, 93, 5), // "rules"
QT_MOC_LITERAL(11, 99, 12) // "stopWatching"

    },
    "Watcher\0ruleUpdated\0\0Rule&\0rule\0"
    "on_file_changed\0path\0on_dir_changed\0"
    "rulesUpdated\0QList<Rule>\0rules\0"
    "stopWatching"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Watcher[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   42,    2, 0x0a /* Public */,
       7,    1,   45,    2, 0x0a /* Public */,
       8,    1,   48,    2, 0x0a /* Public */,
      11,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,

       0        // eod
};

void Watcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Watcher *_t = static_cast<Watcher *>(_o);
        switch (_id) {
        case 0: _t->ruleUpdated((*reinterpret_cast< Rule(*)>(_a[1]))); break;
        case 1: _t->on_file_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_dir_changed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->rulesUpdated((*reinterpret_cast< QList<Rule>(*)>(_a[1]))); break;
        case 4: _t->stopWatching(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Watcher::*_t)(Rule & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Watcher::ruleUpdated)) {
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
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Watcher::ruleUpdated(Rule & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
