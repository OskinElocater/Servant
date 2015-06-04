/****************************************************************************
** Meta object code from reading C++ file 'settings.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Servant/settings.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Settings_t {
    QByteArrayData data[22];
    char stringdata[435];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Settings_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Settings_t qt_meta_stringdata_Settings = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Settings"
QT_MOC_LITERAL(1, 9, 12), // "rulesUpdated"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 12), // "QList<RuleS>"
QT_MOC_LITERAL(4, 36, 5), // "rules"
QT_MOC_LITERAL(5, 42, 21), // "on_toolButton_clicked"
QT_MOC_LITERAL(6, 64, 23), // "on_btn_add_rule_clicked"
QT_MOC_LITERAL(7, 88, 23), // "on_btn_del_rule_clicked"
QT_MOC_LITERAL(8, 112, 20), // "on_btn_apply_clicked"
QT_MOC_LITERAL(9, 133, 21), // "on_btn_cancel_clicked"
QT_MOC_LITERAL(10, 155, 17), // "on_btn_ok_clicked"
QT_MOC_LITERAL(11, 173, 25), // "on_listWidget_itemClicked"
QT_MOC_LITERAL(12, 199, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(13, 216, 4), // "item"
QT_MOC_LITERAL(14, 221, 26), // "on_in_wdir_editingFinished"
QT_MOC_LITERAL(15, 248, 27), // "on_in_dirfs_editingFinished"
QT_MOC_LITERAL(16, 276, 28), // "on_in_filefs_editingFinished"
QT_MOC_LITERAL(17, 305, 25), // "on_in_cmd_editingFinished"
QT_MOC_LITERAL(18, 331, 26), // "on_in_args_editingFinished"
QT_MOC_LITERAL(19, 358, 31), // "on_listWidget_itemDoubleClicked"
QT_MOC_LITERAL(20, 390, 32), // "on_listWidget_currentTextChanged"
QT_MOC_LITERAL(21, 423, 11) // "currentText"

    },
    "Settings\0rulesUpdated\0\0QList<RuleS>\0"
    "rules\0on_toolButton_clicked\0"
    "on_btn_add_rule_clicked\0on_btn_del_rule_clicked\0"
    "on_btn_apply_clicked\0on_btn_cancel_clicked\0"
    "on_btn_ok_clicked\0on_listWidget_itemClicked\0"
    "QListWidgetItem*\0item\0on_in_wdir_editingFinished\0"
    "on_in_dirfs_editingFinished\0"
    "on_in_filefs_editingFinished\0"
    "on_in_cmd_editingFinished\0"
    "on_in_args_editingFinished\0"
    "on_listWidget_itemDoubleClicked\0"
    "on_listWidget_currentTextChanged\0"
    "currentText"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Settings[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    1,   98,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,
      17,    0,  104,    2, 0x08 /* Private */,
      18,    0,  105,    2, 0x08 /* Private */,
      19,    1,  106,    2, 0x08 /* Private */,
      20,    1,  109,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::QString,   21,

       0        // eod
};

void Settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Settings *_t = static_cast<Settings *>(_o);
        switch (_id) {
        case 0: _t->rulesUpdated((*reinterpret_cast< QList<RuleS>(*)>(_a[1]))); break;
        case 1: _t->on_toolButton_clicked(); break;
        case 2: _t->on_btn_add_rule_clicked(); break;
        case 3: _t->on_btn_del_rule_clicked(); break;
        case 4: _t->on_btn_apply_clicked(); break;
        case 5: _t->on_btn_cancel_clicked(); break;
        case 6: _t->on_btn_ok_clicked(); break;
        case 7: _t->on_listWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 8: _t->on_in_wdir_editingFinished(); break;
        case 9: _t->on_in_dirfs_editingFinished(); break;
        case 10: _t->on_in_filefs_editingFinished(); break;
        case 11: _t->on_in_cmd_editingFinished(); break;
        case 12: _t->on_in_args_editingFinished(); break;
        case 13: _t->on_listWidget_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 14: _t->on_listWidget_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (Settings::*_t)(QList<RuleS> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&Settings::rulesUpdated)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject Settings::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Settings.data,
      qt_meta_data_Settings,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Settings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Settings::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Settings.stringdata))
        return static_cast<void*>(const_cast< Settings*>(this));
    return QDialog::qt_metacast(_clname);
}

int Settings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void Settings::rulesUpdated(QList<RuleS> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
