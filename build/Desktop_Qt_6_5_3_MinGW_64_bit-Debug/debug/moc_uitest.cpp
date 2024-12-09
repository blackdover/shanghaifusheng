/****************************************************************************
** Meta object code from reading C++ file 'uitest.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../uitest.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'uitest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSuitestENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSuitestENDCLASS = QtMocHelpers::stringData(
    "uitest",
    "on_torank_clicked",
    "",
    "on_newgame_clicked",
    "on_leave_clicked",
    "setTitle",
    "Player*",
    "player",
    "inputName"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSuitestENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[7];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[17];
    char stringdata5[9];
    char stringdata6[8];
    char stringdata7[7];
    char stringdata8[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSuitestENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSuitestENDCLASS_t qt_meta_stringdata_CLASSuitestENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "uitest"
        QT_MOC_LITERAL(7, 17),  // "on_torank_clicked"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 18),  // "on_newgame_clicked"
        QT_MOC_LITERAL(45, 16),  // "on_leave_clicked"
        QT_MOC_LITERAL(62, 8),  // "setTitle"
        QT_MOC_LITERAL(71, 7),  // "Player*"
        QT_MOC_LITERAL(79, 6),  // "player"
        QT_MOC_LITERAL(86, 9)   // "inputName"
    },
    "uitest",
    "on_torank_clicked",
    "",
    "on_newgame_clicked",
    "on_leave_clicked",
    "setTitle",
    "Player*",
    "player",
    "inputName"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSuitestENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    1,   47,    2, 0x08,    4 /* Private */,
       8,    0,   50,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject uitest::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSuitestENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSuitestENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSuitestENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<uitest, std::true_type>,
        // method 'on_torank_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_newgame_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_leave_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setTitle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Player *, std::false_type>,
        // method 'inputName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void uitest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<uitest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_torank_clicked(); break;
        case 1: _t->on_newgame_clicked(); break;
        case 2: _t->on_leave_clicked(); break;
        case 3: _t->setTitle((*reinterpret_cast< std::add_pointer_t<Player*>>(_a[1]))); break;
        case 4: _t->inputName(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Player* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *uitest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *uitest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSuitestENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int uitest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
