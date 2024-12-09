/****************************************************************************
** Meta object code from reading C++ file 'player.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../player.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'player.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPlayerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSPlayerENDCLASS = QtMocHelpers::stringData(
    "Player",
    "moneyChanged",
    "",
    "newMoney",
    "bankMoneyChanged",
    "newBankMoney",
    "giveUpMoneyChanged",
    "newGiveUpMoney",
    "healthChanged",
    "newHealth",
    "fameChanged",
    "newFame"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPlayerENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[7];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[17];
    char stringdata5[13];
    char stringdata6[19];
    char stringdata7[15];
    char stringdata8[14];
    char stringdata9[10];
    char stringdata10[12];
    char stringdata11[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPlayerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPlayerENDCLASS_t qt_meta_stringdata_CLASSPlayerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Player"
        QT_MOC_LITERAL(7, 12),  // "moneyChanged"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 8),  // "newMoney"
        QT_MOC_LITERAL(30, 16),  // "bankMoneyChanged"
        QT_MOC_LITERAL(47, 12),  // "newBankMoney"
        QT_MOC_LITERAL(60, 18),  // "giveUpMoneyChanged"
        QT_MOC_LITERAL(79, 14),  // "newGiveUpMoney"
        QT_MOC_LITERAL(94, 13),  // "healthChanged"
        QT_MOC_LITERAL(108, 9),  // "newHealth"
        QT_MOC_LITERAL(118, 11),  // "fameChanged"
        QT_MOC_LITERAL(130, 7)   // "newFame"
    },
    "Player",
    "moneyChanged",
    "",
    "newMoney",
    "bankMoneyChanged",
    "newBankMoney",
    "giveUpMoneyChanged",
    "newGiveUpMoney",
    "healthChanged",
    "newHealth",
    "fameChanged",
    "newFame"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPlayerENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       4,    1,   47,    2, 0x06,    3 /* Public */,
       6,    1,   50,    2, 0x06,    5 /* Public */,
       8,    1,   53,    2, 0x06,    7 /* Public */,
      10,    1,   56,    2, 0x06,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong,    3,
    QMetaType::Void, QMetaType::LongLong,    5,
    QMetaType::Void, QMetaType::LongLong,    7,
    QMetaType::Void, QMetaType::LongLong,    9,
    QMetaType::Void, QMetaType::LongLong,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject Player::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSPlayerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPlayerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPlayerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Player, std::true_type>,
        // method 'moneyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<long long, std::false_type>,
        // method 'bankMoneyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<long long, std::false_type>,
        // method 'giveUpMoneyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<long long, std::false_type>,
        // method 'healthChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<long long, std::false_type>,
        // method 'fameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<long long, std::false_type>
    >,
    nullptr
} };

void Player::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Player *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->moneyChanged((*reinterpret_cast< std::add_pointer_t<qlonglong>>(_a[1]))); break;
        case 1: _t->bankMoneyChanged((*reinterpret_cast< std::add_pointer_t<qlonglong>>(_a[1]))); break;
        case 2: _t->giveUpMoneyChanged((*reinterpret_cast< std::add_pointer_t<qlonglong>>(_a[1]))); break;
        case 3: _t->healthChanged((*reinterpret_cast< std::add_pointer_t<qlonglong>>(_a[1]))); break;
        case 4: _t->fameChanged((*reinterpret_cast< std::add_pointer_t<qlonglong>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Player::*)(long long );
            if (_t _q_method = &Player::moneyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Player::*)(long long );
            if (_t _q_method = &Player::bankMoneyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Player::*)(long long );
            if (_t _q_method = &Player::giveUpMoneyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Player::*)(long long );
            if (_t _q_method = &Player::healthChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Player::*)(long long );
            if (_t _q_method = &Player::fameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *Player::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Player::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPlayerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Player::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Player::moneyChanged(long long _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Player::bankMoneyChanged(long long _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Player::giveUpMoneyChanged(long long _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Player::healthChanged(long long _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void Player::fameChanged(long long _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
