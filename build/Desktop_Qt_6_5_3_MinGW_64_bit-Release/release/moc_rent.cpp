/****************************************************************************
** Meta object code from reading C++ file 'rent.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../rent.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rent.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSRentENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSRentENDCLASS = QtMocHelpers::stringData(
    "Rent",
    "bagMaxSizeChanged",
    "",
    "on_leaveButton_clicked",
    "on_oneButton_clicked",
    "on_twoButton_clicked",
    "on_threeButton_clicked",
    "on_fourButton_clicked",
    "on_fiveButton_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSRentENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[5];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[21];
    char stringdata5[21];
    char stringdata6[23];
    char stringdata7[22];
    char stringdata8[22];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSRentENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSRentENDCLASS_t qt_meta_stringdata_CLASSRentENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "Rent"
        QT_MOC_LITERAL(5, 17),  // "bagMaxSizeChanged"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 22),  // "on_leaveButton_clicked"
        QT_MOC_LITERAL(47, 20),  // "on_oneButton_clicked"
        QT_MOC_LITERAL(68, 20),  // "on_twoButton_clicked"
        QT_MOC_LITERAL(89, 22),  // "on_threeButton_clicked"
        QT_MOC_LITERAL(112, 21),  // "on_fourButton_clicked"
        QT_MOC_LITERAL(134, 21)   // "on_fiveButton_clicked"
    },
    "Rent",
    "bagMaxSizeChanged",
    "",
    "on_leaveButton_clicked",
    "on_oneButton_clicked",
    "on_twoButton_clicked",
    "on_threeButton_clicked",
    "on_fourButton_clicked",
    "on_fiveButton_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSRentENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Rent::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSRentENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSRentENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSRentENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Rent, std::true_type>,
        // method 'bagMaxSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_leaveButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_oneButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_twoButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_threeButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_fourButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_fiveButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Rent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Rent *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->bagMaxSizeChanged(); break;
        case 1: _t->on_leaveButton_clicked(); break;
        case 2: _t->on_oneButton_clicked(); break;
        case 3: _t->on_twoButton_clicked(); break;
        case 4: _t->on_threeButton_clicked(); break;
        case 5: _t->on_fourButton_clicked(); break;
        case 6: _t->on_fiveButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Rent::*)();
            if (_t _q_method = &Rent::bagMaxSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *Rent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Rent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSRentENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Rent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void Rent::bagMaxSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
