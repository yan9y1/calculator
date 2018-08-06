/****************************************************************************
** Meta object code from reading C++ file 'Calculator.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Calculator.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Calculator.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Calculator_t {
    QByteArrayData data[17];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Calculator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Calculator_t qt_meta_stringdata_Calculator = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Calculator"
QT_MOC_LITERAL(1, 11, 10), // "numberZero"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 9), // "numberOne"
QT_MOC_LITERAL(4, 33, 9), // "numberTwo"
QT_MOC_LITERAL(5, 43, 11), // "numberThree"
QT_MOC_LITERAL(6, 55, 10), // "numberFour"
QT_MOC_LITERAL(7, 66, 10), // "numberFive"
QT_MOC_LITERAL(8, 77, 9), // "numberSix"
QT_MOC_LITERAL(9, 87, 11), // "numberSeven"
QT_MOC_LITERAL(10, 99, 11), // "numberEight"
QT_MOC_LITERAL(11, 111, 10), // "numberNine"
QT_MOC_LITERAL(12, 122, 3), // "dot"
QT_MOC_LITERAL(13, 126, 4), // "plus"
QT_MOC_LITERAL(14, 131, 3), // "min"
QT_MOC_LITERAL(15, 135, 5), // "multi"
QT_MOC_LITERAL(16, 141, 6) // "divide"

    },
    "Calculator\0numberZero\0\0numberOne\0"
    "numberTwo\0numberThree\0numberFour\0"
    "numberFive\0numberSix\0numberSeven\0"
    "numberEight\0numberNine\0dot\0plus\0min\0"
    "multi\0divide"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Calculator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Calculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Calculator *_t = static_cast<Calculator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->numberZero(); break;
        case 1: _t->numberOne(); break;
        case 2: _t->numberTwo(); break;
        case 3: _t->numberThree(); break;
        case 4: _t->numberFour(); break;
        case 5: _t->numberFive(); break;
        case 6: _t->numberSix(); break;
        case 7: _t->numberSeven(); break;
        case 8: _t->numberEight(); break;
        case 9: _t->numberNine(); break;
        case 10: _t->dot(); break;
        case 11: _t->plus(); break;
        case 12: _t->min(); break;
        case 13: _t->multi(); break;
        case 14: _t->divide(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Calculator::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Calculator.data,
      qt_meta_data_Calculator,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Calculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Calculator::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Calculator.stringdata0))
        return static_cast<void*>(const_cast< Calculator*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Calculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
