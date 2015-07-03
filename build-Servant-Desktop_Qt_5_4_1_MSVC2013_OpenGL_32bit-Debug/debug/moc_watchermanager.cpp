/****************************************************************************
** Meta object code from reading C++ file 'watchermanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Servant/watchermanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'watchermanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WatcherManager_t {
    QByteArrayData data[14];
    char stringdata[151];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WatcherManager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WatcherManager_t qt_meta_stringdata_WatcherManager = {
    {
QT_MOC_LITERAL(0, 0, 14), // "WatcherManager"
QT_MOC_LITERAL(1, 15, 11), // "fileChanged"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 8), // "QString&"
QT_MOC_LITERAL(4, 37, 8), // "ruleName"
QT_MOC_LITERAL(5, 46, 8), // "filePath"
QT_MOC_LITERAL(6, 55, 13), // "outputMessage"
QT_MOC_LITERAL(7, 69, 3), // "msg"
QT_MOC_LITERAL(8, 73, 12), // "rulesUpdated"
QT_MOC_LITERAL(9, 86, 26), // "QVector<shared_ptr<Rule> >"
QT_MOC_LITERAL(10, 113, 5), // "rules"
QT_MOC_LITERAL(11, 119, 13), // "onFileChanged"
QT_MOC_LITERAL(12, 133, 4), // "path"
QT_MOC_LITERAL(13, 138, 12) // "onNewMessage"

    },
    "WatcherManager\0fileChanged\0\0QString&\0"
    "ruleName\0filePath\0outputMessage\0msg\0"
    "rulesUpdated\0QVector<shared_ptr<Rule> >\0"
    "rules\0onFileChanged\0path\0onNewMessage"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WatcherManager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       6,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   47,    2, 0x0a /* Public */,
      11,    1,   50,    2, 0x0a /* Public */,
      13,    1,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void WatcherManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WatcherManager *_t = static_cast<WatcherManager *>(_o);
        switch (_id) {
        case 0: _t->fileChanged((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->outputMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->rulesUpdated((*reinterpret_cast< QVector<shared_ptr<Rule> >(*)>(_a[1]))); break;
        case 3: _t->onFileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onNewMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WatcherManager::*_t)(QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WatcherManager::fileChanged)) {
                *result = 0;
            }
        }
        {
            typedef void (WatcherManager::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WatcherManager::outputMessage)) {
                *result = 1;
            }
        }
    }
}

const QMetaObject WatcherManager::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WatcherManager.data,
      qt_meta_data_WatcherManager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WatcherManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WatcherManager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WatcherManager.stringdata))
        return static_cast<void*>(const_cast< WatcherManager*>(this));
    return QObject::qt_metacast(_clname);
}

int WatcherManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void WatcherManager::fileChanged(QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WatcherManager::outputMessage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
