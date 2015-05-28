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
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settings.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Settings_t {
    QByteArrayData data[19];
    char stringdata[403];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Settings_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Settings_t qt_meta_stringdata_Settings = {
    {
QT_MOC_LITERAL(0, 0, 8), // "Settings"
QT_MOC_LITERAL(1, 9, 21), // "on_toolButton_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 23), // "on_btn_add_rule_clicked"
QT_MOC_LITERAL(4, 56, 23), // "on_btn_del_rule_clicked"
QT_MOC_LITERAL(5, 80, 20), // "on_btn_apply_clicked"
QT_MOC_LITERAL(6, 101, 21), // "on_btn_cancel_clicked"
QT_MOC_LITERAL(7, 123, 17), // "on_btn_ok_clicked"
QT_MOC_LITERAL(8, 141, 25), // "on_listWidget_itemClicked"
QT_MOC_LITERAL(9, 167, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(10, 184, 4), // "item"
QT_MOC_LITERAL(11, 189, 26), // "on_in_wdir_editingFinished"
QT_MOC_LITERAL(12, 216, 27), // "on_in_dirfs_editingFinished"
QT_MOC_LITERAL(13, 244, 28), // "on_in_filefs_editingFinished"
QT_MOC_LITERAL(14, 273, 25), // "on_in_cmd_editingFinished"
QT_MOC_LITERAL(15, 299, 26), // "on_in_args_editingFinished"
QT_MOC_LITERAL(16, 326, 31), // "on_listWidget_itemDoubleClicked"
QT_MOC_LITERAL(17, 358, 32), // "on_listWidget_currentTextChanged"
QT_MOC_LITERAL(18, 391, 11) // "currentText"

    },
    "Settings\0on_toolButton_clicked\0\0"
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
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   84,    2, 0x08 /* Private */,
       3,    0,   85,    2, 0x08 /* Private */,
       4,    0,   86,    2, 0x08 /* Private */,
       5,    0,   87,    2, 0x08 /* Private */,
       6,    0,   88,    2, 0x08 /* Private */,
       7,    0,   89,    2, 0x08 /* Private */,
       8,    1,   90,    2, 0x08 /* Private */,
      11,    0,   93,    2, 0x08 /* Private */,
      12,    0,   94,    2, 0x08 /* Private */,
      13,    0,   95,    2, 0x08 /* Private */,
      14,    0,   96,    2, 0x08 /* Private */,
      15,    0,   97,    2, 0x08 /* Private */,
      16,    1,   98,    2, 0x08 /* Private */,
      17,    1,  101,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,   18,

       0        // eod
};

void Settings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Settings *_t = static_cast<Settings *>(_o);
        switch (_id) {
        case 0: _t->on_toolButton_clicked(); break;
        case 1: _t->on_btn_add_rule_clicked(); break;
        case 2: _t->on_btn_del_rule_clicked(); break;
        case 3: _t->on_btn_apply_clicked(); break;
        case 4: _t->on_btn_cancel_clicked(); break;
        case 5: _t->on_btn_ok_clicked(); break;
        case 6: _t->on_listWidget_itemClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->on_in_wdir_editingFinished(); break;
        case 8: _t->on_in_dirfs_editingFinished(); break;
        case 9: _t->on_in_filefs_editingFinished(); break;
        case 10: _t->on_in_cmd_editingFinished(); break;
        case 11: _t->on_in_args_editingFinished(); break;
        case 12: _t->on_listWidget_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 13: _t->on_listWidget_currentTextChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
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
QT_END_MOC_NAMESPACE
