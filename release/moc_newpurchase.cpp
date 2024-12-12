/****************************************************************************
** Meta object code from reading C++ file 'newpurchase.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../newpurchase.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newpurchase.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_newpurchase_t {
    QByteArrayData data[16];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_newpurchase_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_newpurchase_t qt_meta_stringdata_newpurchase = {
    {
QT_MOC_LITERAL(0, 0, 11), // "newpurchase"
QT_MOC_LITERAL(1, 12, 14), // "purchase_added"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 30), // "on_lineEdit_sale_returnPressed"
QT_MOC_LITERAL(4, 59, 17), // "saveDataIntoTable"
QT_MOC_LITERAL(5, 77, 4), // "item"
QT_MOC_LITERAL(6, 82, 5), // "price"
QT_MOC_LITERAL(7, 88, 8), // "quantity"
QT_MOC_LITERAL(8, 97, 4), // "code"
QT_MOC_LITERAL(9, 102, 4), // "date"
QT_MOC_LITERAL(10, 107, 5), // "clear"
QT_MOC_LITERAL(11, 113, 5), // "descr"
QT_MOC_LITERAL(12, 119, 1), // "q"
QT_MOC_LITERAL(13, 121, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(14, 143, 29), // "on_lineEdit_des_returnPressed"
QT_MOC_LITERAL(15, 173, 23) // "on_pushButton_2_clicked"

    },
    "newpurchase\0purchase_added\0\0"
    "on_lineEdit_sale_returnPressed\0"
    "saveDataIntoTable\0item\0price\0quantity\0"
    "code\0date\0clear\0descr\0q\0on_pushButton_clicked\0"
    "on_lineEdit_des_returnPressed\0"
    "on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_newpurchase[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x08 /* Private */,
       4,    5,   61,    2, 0x08 /* Private */,
      10,    1,   72,    2, 0x08 /* Private */,
      11,    1,   75,    2, 0x08 /* Private */,
       8,    1,   78,    2, 0x08 /* Private */,
      13,    0,   81,    2, 0x08 /* Private */,
      14,    0,   82,    2, 0x08 /* Private */,
      15,    0,   83,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Int, QMetaType::QString, QMetaType::QString,    5,    6,    7,    8,    9,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void newpurchase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        newpurchase *_t = static_cast<newpurchase *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->purchase_added(); break;
        case 1: _t->on_lineEdit_sale_returnPressed(); break;
        case 2: _t->saveDataIntoTable((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 3: _t->clear((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->descr((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->code((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_lineEdit_des_returnPressed(); break;
        case 8: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (newpurchase::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&newpurchase::purchase_added)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject newpurchase::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_newpurchase.data,
      qt_meta_data_newpurchase,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *newpurchase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *newpurchase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_newpurchase.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int newpurchase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void newpurchase::purchase_added()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
