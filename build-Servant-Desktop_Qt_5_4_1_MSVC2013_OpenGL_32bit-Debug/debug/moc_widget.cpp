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
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Widget_t {
    QByteArrayData data[16];
    char stringdata[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Widget_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 0, 6), // "Widget"
QT_MOC_LITERAL(1, 7, 12), // "rulesUpdated"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 29), // "QList<std::shared_ptr<Rule> >"
QT_MOC_LITERAL(4, 51, 5), // "rules"
QT_MOC_LITERAL(5, 57, 12), // "stopWatching"
QT_MOC_LITERAL(6, 70, 11), // "fileChanged"
QT_MOC_LITERAL(7, 82, 4), // "path"
QT_MOC_LITERAL(8, 87, 16), // "directoryChanged"
QT_MOC_LITERAL(9, 104, 13), // "onRuleUpdated"
QT_MOC_LITERAL(10, 118, 5), // "Rule&"
QT_MOC_LITERAL(11, 124, 4), // "rule"
QT_MOC_LITERAL(12, 129, 14), // "onRulesUpdated"
QT_MOC_LITERAL(13, 144, 23), // "on_btn_settings_clicked"
QT_MOC_LITERAL(14, 168, 20), // "on_btn_start_clicked"
QT_MOC_LITERAL(15, 189, 19) // "on_btn_stop_clicked"

    },
    "Widget\0rulesUpdated\0\0QList<std::shared_ptr<Rule> >\0"
    "rules\0stopWatching\0fileChanged\0path\0"
    "directoryChanged\0onRuleUpdated\0Rule&\0"
    "rule\0onRulesUpdated\0on_btn_settings_clicked\0"
    "on_btn_start_clicked\0on_btn_stop_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x06 /* Public */,
       5,    0,   62,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   63,    2, 0x0a /* Public */,
       8,    1,   66,    2, 0x0a /* Public */,
       9,    1,   69,    2, 0x0a /* Public */,
      12,    1,   72,    2, 0x0a /* Public */,
      13,    0,   75,    2, 0x08 /* Private */,
      14,    0,   76,    2, 0x08 /* Private */,
      15,    0,   77,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Widget *_t = static_cast<Widget *>(_o);
        switch (_id) {
        case 0: _t->rulesUpdated((*reinterpret_cast< QList<std::shared_ptr<Rule> >(*)>(_a[1]))); break;
        case 1: _t->stopWatching(); break;
        case 2: _t->fileChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->directoryChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->onRuleUpdated((*reinterpret_cast< Rule(*)>(_a[1]))); break;
        case 5: _t->onRulesUpdated((*reinterpret_cast< QList<std::shared_ptr<Rule> >(*)>(_a[1]))); break;
        case 6: _t->on_btn_settings_clicked(); break;
        case 7: _t->on_btn_start_clicked(); break;
        case 8: _t->on_btn_stop_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Widget::*_t)(QList<std::shared_ptr<Rule>> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::rulesUpdated)) {
                *result = 0;
            }
        }
        {
            typedef void (Widget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Widget::stopWatching)) {
                *result = 1;
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

// SIGNAL 0
void Widget::rulesUpdated(QList<std::shared_ptr<Rule>> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Widget::stopWatching()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
