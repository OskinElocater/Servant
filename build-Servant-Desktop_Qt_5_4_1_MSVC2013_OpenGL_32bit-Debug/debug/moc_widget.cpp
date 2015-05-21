/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Servant/widget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[24];
    char stringdata[358];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 11), // "dir_changed"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 8), // "QString&"
QT_MOC_LITERAL(4, 29, 3), // "dir"
QT_MOC_LITERAL(5, 33, 20), // "file_filters_changed"
QT_MOC_LITERAL(6, 54, 12), // "QStringList&"
QT_MOC_LITERAL(7, 67, 6), // "filter"
QT_MOC_LITERAL(8, 74, 19), // "dir_filters_changed"
QT_MOC_LITERAL(9, 94, 11), // "cmd_changed"
QT_MOC_LITERAL(10, 106, 3), // "cmd"
QT_MOC_LITERAL(11, 110, 12), // "args_changed"
QT_MOC_LITERAL(12, 123, 4), // "args"
QT_MOC_LITERAL(13, 128, 11), // "fileChanged"
QT_MOC_LITERAL(14, 140, 4), // "path"
QT_MOC_LITERAL(15, 145, 16), // "directoryChanged"
QT_MOC_LITERAL(16, 162, 11), // "pathUpdated"
QT_MOC_LITERAL(17, 174, 27), // "on_inputDir_editingFinished"
QT_MOC_LITERAL(18, 202, 34), // "on_inputDirFilters_editingFin..."
QT_MOC_LITERAL(19, 237, 35), // "on_inputFileFilters_editingFi..."
QT_MOC_LITERAL(20, 273, 27), // "on_inputCmd_editingFinished"
QT_MOC_LITERAL(21, 301, 27), // "on_inputArg_editingFinished"
QT_MOC_LITERAL(22, 329, 23), // "on_inputDir_textChanged"
QT_MOC_LITERAL(23, 353, 4) // "arg1"

    },
    "Widget\0dir_changed\0\0QString&\0dir\0"
    "file_filters_changed\0QStringList&\0"
    "filter\0dir_filters_changed\0cmd_changed\0"
    "cmd\0args_changed\0args\0fileChanged\0"
    "path\0directoryChanged\0pathUpdated\0"
    "on_inputDir_editingFinished\0"
    "on_inputDirFilters_editingFinished\0"
    "on_inputFileFilters_editingFinished\0"
    "on_inputCmd_editingFinished\0"
    "on_inputArg_editingFinished\0"
    "on_inputDir_textChanged\0arg1"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       5,    1,   87,    2, 0x06 /* Public */,
       8,    1,   90,    2, 0x06 /* Public */,
       9,    1,   93,    2, 0x06 /* Public */,
      11,    1,   96,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,   99,    2, 0x0a /* Public */,
      15,    1,  102,    2, 0x0a /* Public */,
      16,    1,  105,    2, 0x0a /* Public */,
      17,    0,  108,    2, 0x08 /* Private */,
      18,    0,  109,    2, 0x08 /* Private */,
      19,    0,  110,    2, 0x08 /* Private */,
      20,    0,  111,    2, 0x08 /* Private */,
      21,    0,  112,    2, 0x08 /* Private */,
      22,    1,  113,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 3,   10,
    QMetaType::Void, 0x80000000 | 6,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, 0x80000000 | 3,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   23,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        switch (_id) {
        case 0: _t->dir_changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->file_filters_changed((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 2: _t->dir_filters_changed((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 3: _t->cmd_changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->args_changed((*reinterpret_cast< QStringList(*)>(_a[1]))); break;
        case 5: _t->fileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->directoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->pathUpdated((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->on_inputDir_editingFinished(); break;
        case 9: _t->on_inputDirFilters_editingFinished(); break;
        case 10: _t->on_inputFileFilters_editingFinished(); break;
        case 11: _t->on_inputCmd_editingFinished(); break;
        case 12: _t->on_inputArg_editingFinished(); break;
        case 13: _t->on_inputDir_textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Widget::*_t)(QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::dir_changed)) {
                *result = 0;
            }
        }
        {
            typedef void (Widget::*_t)(QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::file_filters_changed)) {
                *result = 1;
            }
        }
        {
            typedef void (Widget::*_t)(QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::dir_filters_changed)) {
                *result = 2;
            }
        }
        {
            typedef void (Widget::*_t)(QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::cmd_changed)) {
                *result = 3;
            }
        }
        {
            typedef void (Widget::*_t)(QStringList & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::args_changed)) {
                *result = 4;
            }
        }
    }
}

const QMetaObject Widget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Widget.data,
      qt_meta_data_Widget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata))
        return static_cast<void*>(const_cast< Widget*>(this));
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void Widget::dir_changed(QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Widget::file_filters_changed(QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Widget::dir_filters_changed(QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Widget::cmd_changed(QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Widget::args_changed(QStringList & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_END_MOC_NAMESPACE
