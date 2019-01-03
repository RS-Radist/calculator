/****************************************************************************
** Meta object code from reading C++ file 'calculator_frame_one.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../calculator/calculator_frame_one.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'calculator_frame_one.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FirstFrameCalculator_t {
    QByteArrayData data[20];
    char stringdata0[266];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FirstFrameCalculator_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FirstFrameCalculator_t qt_meta_stringdata_FirstFrameCalculator = {
    {
QT_MOC_LITERAL(0, 0, 20), // "FirstFrameCalculator"
QT_MOC_LITERAL(1, 21, 18), // "signal_to_textEdit"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 12), // "SetTextLine1"
QT_MOC_LITERAL(4, 54, 12), // "SetTextLine2"
QT_MOC_LITERAL(5, 67, 12), // "SetTextLine3"
QT_MOC_LITERAL(6, 80, 12), // "SetTextLine4"
QT_MOC_LITERAL(7, 93, 12), // "SetTextLine5"
QT_MOC_LITERAL(8, 106, 12), // "SetTextLine6"
QT_MOC_LITERAL(9, 119, 12), // "SetTextLine7"
QT_MOC_LITERAL(10, 132, 12), // "SetTextLine8"
QT_MOC_LITERAL(11, 145, 12), // "SetTextLine9"
QT_MOC_LITERAL(12, 158, 12), // "SetTextLine0"
QT_MOC_LITERAL(13, 171, 12), // "SetClearLine"
QT_MOC_LITERAL(14, 184, 12), // "SlotPlusLine"
QT_MOC_LITERAL(15, 197, 13), // "SlotMinusLine"
QT_MOC_LITERAL(16, 211, 11), // "SlotDivLine"
QT_MOC_LITERAL(17, 223, 12), // "SlotMultLine"
QT_MOC_LITERAL(18, 236, 10), // "SlotEqLine"
QT_MOC_LITERAL(19, 247, 18) // "SlotPointForDouble"

    },
    "FirstFrameCalculator\0signal_to_textEdit\0"
    "\0SetTextLine1\0SetTextLine2\0SetTextLine3\0"
    "SetTextLine4\0SetTextLine5\0SetTextLine6\0"
    "SetTextLine7\0SetTextLine8\0SetTextLine9\0"
    "SetTextLine0\0SetClearLine\0SlotPlusLine\0"
    "SlotMinusLine\0SlotDivLine\0SlotMultLine\0"
    "SlotEqLine\0SlotPointForDouble"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FirstFrameCalculator[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  104,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,  107,    2, 0x0a /* Public */,
       4,    0,  108,    2, 0x0a /* Public */,
       5,    0,  109,    2, 0x0a /* Public */,
       6,    0,  110,    2, 0x0a /* Public */,
       7,    0,  111,    2, 0x0a /* Public */,
       8,    0,  112,    2, 0x0a /* Public */,
       9,    0,  113,    2, 0x0a /* Public */,
      10,    0,  114,    2, 0x0a /* Public */,
      11,    0,  115,    2, 0x0a /* Public */,
      12,    0,  116,    2, 0x0a /* Public */,
      13,    0,  117,    2, 0x0a /* Public */,
      14,    0,  118,    2, 0x0a /* Public */,
      15,    0,  119,    2, 0x0a /* Public */,
      16,    0,  120,    2, 0x0a /* Public */,
      17,    0,  121,    2, 0x0a /* Public */,
      18,    0,  122,    2, 0x0a /* Public */,
      19,    0,  123,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

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
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void FirstFrameCalculator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        FirstFrameCalculator *_t = static_cast<FirstFrameCalculator *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->signal_to_textEdit((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->SetTextLine1(); break;
        case 2: _t->SetTextLine2(); break;
        case 3: _t->SetTextLine3(); break;
        case 4: _t->SetTextLine4(); break;
        case 5: _t->SetTextLine5(); break;
        case 6: _t->SetTextLine6(); break;
        case 7: _t->SetTextLine7(); break;
        case 8: _t->SetTextLine8(); break;
        case 9: _t->SetTextLine9(); break;
        case 10: _t->SetTextLine0(); break;
        case 11: _t->SetClearLine(); break;
        case 12: _t->SlotPlusLine(); break;
        case 13: _t->SlotMinusLine(); break;
        case 14: _t->SlotDivLine(); break;
        case 15: _t->SlotMultLine(); break;
        case 16: _t->SlotEqLine(); break;
        case 17: _t->SlotPointForDouble(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (FirstFrameCalculator::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FirstFrameCalculator::signal_to_textEdit)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FirstFrameCalculator::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_FirstFrameCalculator.data,
      qt_meta_data_FirstFrameCalculator,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *FirstFrameCalculator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FirstFrameCalculator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FirstFrameCalculator.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int FirstFrameCalculator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void FirstFrameCalculator::signal_to_textEdit(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
