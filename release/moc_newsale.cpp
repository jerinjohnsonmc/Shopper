/****************************************************************************
** Meta object code from reading C++ file 'newsale.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../newsale.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'newsale.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_newsale_t {
    QByteArrayData data[15];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_newsale_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_newsale_t qt_meta_stringdata_newsale = {
    {
QT_MOC_LITERAL(0, 0, 7), // "newsale"
QT_MOC_LITERAL(1, 8, 10), // "sale_added"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 30), // "on_lineEdit_sale_returnPressed"
QT_MOC_LITERAL(4, 51, 17), // "saveDataIntoTable"
QT_MOC_LITERAL(5, 69, 4), // "item"
QT_MOC_LITERAL(6, 74, 5), // "price"
QT_MOC_LITERAL(7, 80, 8), // "quantity"
QT_MOC_LITERAL(8, 89, 4), // "code"
QT_MOC_LITERAL(9, 94, 5), // "clear"
QT_MOC_LITERAL(10, 100, 5), // "descr"
QT_MOC_LITERAL(11, 106, 1), // "q"
QT_MOC_LITERAL(12, 108, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(13, 130, 29), // "on_lineEdit_des_returnPressed"
QT_MOC_LITERAL(14, 160, 23) // "on_pushButton_2_clicked"

    },
    "newsale\0sale_added\0\0on_lineEdit_sale_returnPressed\0"
    "saveDataIntoTable\0item\0price\0quantity\0"
    "code\0clear\0descr\0q\0on_pushButton_clicked\0"
    "on_lineEdit_des_returnPressed\0"
    "on_pushButton_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_newsale[] = {

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
       4,    4,   61,    2, 0x08 /* Private */,
       9,    1,   70,    2, 0x08 /* Private */,
      10,    1,   73,    2, 0x08 /* Private */,
       8,    1,   76,    2, 0x08 /* Private */,
      12,    0,   79,    2, 0x08 /* Private */,
      13,    0,   80,    2, 0x08 /* Private */,
      14,    0,   81,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Double, QMetaType::Int, QMetaType::QString,    5,    6,    7,    8,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void newsale::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        newsale *_t = static_cast<newsale *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sale_added(); break;
        case 1: _t->on_lineEdit_sale_returnPressed(); break;
        case 2: _t->saveDataIntoTable((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 3: _t->clear((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->descr((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->code((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_pushButton_clicked(); break;
        case 7: _t->on_lineEdit_des_returnPressed(); break;
        case 8: _t->on_pushButton_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (newsale::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&newsale::sale_added)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject newsale::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_newsale.data,
      qt_meta_data_newsale,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *newsale::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *newsale::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_newsale.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int newsale::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void newsale::sale_added()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
