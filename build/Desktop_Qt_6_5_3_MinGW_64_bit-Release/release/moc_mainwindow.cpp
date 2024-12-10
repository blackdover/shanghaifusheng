/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "updatePlayerUI",
    "",
    "on_playermoney_overflow",
    "moreneedmoney",
    "nextday",
    "randomevent",
    "on_buy_clicked",
    "on_sell_clicked",
    "addItemToBag",
    "itemName",
    "nowPrice",
    "quantity",
    "refreshItemsInMarket",
    "count",
    "excludeName",
    "on_lujiazuiplace_clicked",
    "updateBagSpaceDisplay",
    "updateDate",
    "on_bankButton_clicked",
    "on_hospitalButton_clicked",
    "on_postButton_clicked",
    "on_rentButton_clicked",
    "on_douyinButton_clicked",
    "douyinButtonClick",
    "showGameOverMessage",
    "on_hongkouplace_clicked",
    "on_baoshanplace_clicked",
    "on_qingpuplace_clicked",
    "on_pudongplace_clicked",
    "on_linggangplace_clicked",
    "on_jinshanplace_clicked",
    "on_songjiangplace_clicked",
    "on_jiadingplace_clicked",
    "on_newgame_triggered",
    "on_seehelp_triggered",
    "on_sudomodel_triggered",
    "on_backtomain_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[76];
    char stringdata0[11];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[24];
    char stringdata4[14];
    char stringdata5[8];
    char stringdata6[12];
    char stringdata7[15];
    char stringdata8[16];
    char stringdata9[13];
    char stringdata10[9];
    char stringdata11[9];
    char stringdata12[9];
    char stringdata13[21];
    char stringdata14[6];
    char stringdata15[12];
    char stringdata16[25];
    char stringdata17[22];
    char stringdata18[11];
    char stringdata19[22];
    char stringdata20[26];
    char stringdata21[22];
    char stringdata22[22];
    char stringdata23[24];
    char stringdata24[18];
    char stringdata25[20];
    char stringdata26[24];
    char stringdata27[24];
    char stringdata28[23];
    char stringdata29[23];
    char stringdata30[25];
    char stringdata31[24];
    char stringdata32[26];
    char stringdata33[24];
    char stringdata34[21];
    char stringdata35[21];
    char stringdata36[23];
    char stringdata37[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 14),  // "updatePlayerUI"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 23),  // "on_playermoney_overflow"
        QT_MOC_LITERAL(51, 13),  // "moreneedmoney"
        QT_MOC_LITERAL(65, 7),  // "nextday"
        QT_MOC_LITERAL(73, 11),  // "randomevent"
        QT_MOC_LITERAL(85, 14),  // "on_buy_clicked"
        QT_MOC_LITERAL(100, 15),  // "on_sell_clicked"
        QT_MOC_LITERAL(116, 12),  // "addItemToBag"
        QT_MOC_LITERAL(129, 8),  // "itemName"
        QT_MOC_LITERAL(138, 8),  // "nowPrice"
        QT_MOC_LITERAL(147, 8),  // "quantity"
        QT_MOC_LITERAL(156, 20),  // "refreshItemsInMarket"
        QT_MOC_LITERAL(177, 5),  // "count"
        QT_MOC_LITERAL(183, 11),  // "excludeName"
        QT_MOC_LITERAL(195, 24),  // "on_lujiazuiplace_clicked"
        QT_MOC_LITERAL(220, 21),  // "updateBagSpaceDisplay"
        QT_MOC_LITERAL(242, 10),  // "updateDate"
        QT_MOC_LITERAL(253, 21),  // "on_bankButton_clicked"
        QT_MOC_LITERAL(275, 25),  // "on_hospitalButton_clicked"
        QT_MOC_LITERAL(301, 21),  // "on_postButton_clicked"
        QT_MOC_LITERAL(323, 21),  // "on_rentButton_clicked"
        QT_MOC_LITERAL(345, 23),  // "on_douyinButton_clicked"
        QT_MOC_LITERAL(369, 17),  // "douyinButtonClick"
        QT_MOC_LITERAL(387, 19),  // "showGameOverMessage"
        QT_MOC_LITERAL(407, 23),  // "on_hongkouplace_clicked"
        QT_MOC_LITERAL(431, 23),  // "on_baoshanplace_clicked"
        QT_MOC_LITERAL(455, 22),  // "on_qingpuplace_clicked"
        QT_MOC_LITERAL(478, 22),  // "on_pudongplace_clicked"
        QT_MOC_LITERAL(501, 24),  // "on_linggangplace_clicked"
        QT_MOC_LITERAL(526, 23),  // "on_jinshanplace_clicked"
        QT_MOC_LITERAL(550, 25),  // "on_songjiangplace_clicked"
        QT_MOC_LITERAL(576, 23),  // "on_jiadingplace_clicked"
        QT_MOC_LITERAL(600, 20),  // "on_newgame_triggered"
        QT_MOC_LITERAL(621, 20),  // "on_seehelp_triggered"
        QT_MOC_LITERAL(642, 22),  // "on_sudomodel_triggered"
        QT_MOC_LITERAL(665, 23)   // "on_backtomain_triggered"
    },
    "MainWindow",
    "updatePlayerUI",
    "",
    "on_playermoney_overflow",
    "moreneedmoney",
    "nextday",
    "randomevent",
    "on_buy_clicked",
    "on_sell_clicked",
    "addItemToBag",
    "itemName",
    "nowPrice",
    "quantity",
    "refreshItemsInMarket",
    "count",
    "excludeName",
    "on_lujiazuiplace_clicked",
    "updateBagSpaceDisplay",
    "updateDate",
    "on_bankButton_clicked",
    "on_hospitalButton_clicked",
    "on_postButton_clicked",
    "on_rentButton_clicked",
    "on_douyinButton_clicked",
    "douyinButtonClick",
    "showGameOverMessage",
    "on_hongkouplace_clicked",
    "on_baoshanplace_clicked",
    "on_qingpuplace_clicked",
    "on_pudongplace_clicked",
    "on_linggangplace_clicked",
    "on_jinshanplace_clicked",
    "on_songjiangplace_clicked",
    "on_jiadingplace_clicked",
    "on_newgame_triggered",
    "on_seehelp_triggered",
    "on_sudomodel_triggered",
    "on_backtomain_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      32,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  206,    2, 0x08,    1 /* Private */,
       3,    0,  207,    2, 0x08,    2 /* Private */,
       4,    0,  208,    2, 0x08,    3 /* Private */,
       5,    0,  209,    2, 0x08,    4 /* Private */,
       6,    0,  210,    2, 0x08,    5 /* Private */,
       7,    0,  211,    2, 0x08,    6 /* Private */,
       8,    0,  212,    2, 0x08,    7 /* Private */,
       9,    3,  213,    2, 0x08,    8 /* Private */,
      13,    1,  220,    2, 0x08,   12 /* Private */,
      13,    2,  223,    2, 0x08,   14 /* Private */,
      16,    0,  228,    2, 0x08,   17 /* Private */,
      17,    0,  229,    2, 0x08,   18 /* Private */,
      18,    0,  230,    2, 0x08,   19 /* Private */,
      19,    0,  231,    2, 0x08,   20 /* Private */,
      20,    0,  232,    2, 0x08,   21 /* Private */,
      21,    0,  233,    2, 0x08,   22 /* Private */,
      22,    0,  234,    2, 0x08,   23 /* Private */,
      23,    0,  235,    2, 0x08,   24 /* Private */,
      24,    0,  236,    2, 0x08,   25 /* Private */,
      25,    0,  237,    2, 0x08,   26 /* Private */,
      26,    0,  238,    2, 0x08,   27 /* Private */,
      27,    0,  239,    2, 0x08,   28 /* Private */,
      28,    0,  240,    2, 0x08,   29 /* Private */,
      29,    0,  241,    2, 0x08,   30 /* Private */,
      30,    0,  242,    2, 0x08,   31 /* Private */,
      31,    0,  243,    2, 0x08,   32 /* Private */,
      32,    0,  244,    2, 0x08,   33 /* Private */,
      33,    0,  245,    2, 0x08,   34 /* Private */,
      34,    0,  246,    2, 0x08,   35 /* Private */,
      35,    0,  247,    2, 0x08,   36 /* Private */,
      36,    0,  248,    2, 0x08,   37 /* Private */,
      37,    0,  249,    2, 0x08,   38 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::LongLong, QMetaType::Int,   10,   11,   12,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   14,   15,
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
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'updatePlayerUI'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_playermoney_overflow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'moreneedmoney'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'nextday'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'randomevent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_buy_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sell_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addItemToBag'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<long long, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'refreshItemsInMarket'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'refreshItemsInMarket'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_lujiazuiplace_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateBagSpaceDisplay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bankButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_hospitalButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_postButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_rentButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_douyinButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'douyinButtonClick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showGameOverMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_hongkouplace_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_baoshanplace_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_qingpuplace_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pudongplace_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_linggangplace_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_jinshanplace_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_songjiangplace_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_jiadingplace_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_newgame_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_seehelp_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sudomodel_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_backtomain_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updatePlayerUI(); break;
        case 1: _t->on_playermoney_overflow(); break;
        case 2: _t->moreneedmoney(); break;
        case 3: _t->nextday(); break;
        case 4: _t->randomevent(); break;
        case 5: _t->on_buy_clicked(); break;
        case 6: _t->on_sell_clicked(); break;
        case 7: _t->addItemToBag((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qlonglong>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 8: _t->refreshItemsInMarket((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->refreshItemsInMarket((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->on_lujiazuiplace_clicked(); break;
        case 11: _t->updateBagSpaceDisplay(); break;
        case 12: _t->updateDate(); break;
        case 13: _t->on_bankButton_clicked(); break;
        case 14: _t->on_hospitalButton_clicked(); break;
        case 15: _t->on_postButton_clicked(); break;
        case 16: _t->on_rentButton_clicked(); break;
        case 17: _t->on_douyinButton_clicked(); break;
        case 18: _t->douyinButtonClick(); break;
        case 19: _t->showGameOverMessage(); break;
        case 20: _t->on_hongkouplace_clicked(); break;
        case 21: _t->on_baoshanplace_clicked(); break;
        case 22: _t->on_qingpuplace_clicked(); break;
        case 23: _t->on_pudongplace_clicked(); break;
        case 24: _t->on_linggangplace_clicked(); break;
        case 25: _t->on_jinshanplace_clicked(); break;
        case 26: _t->on_songjiangplace_clicked(); break;
        case 27: _t->on_jiadingplace_clicked(); break;
        case 28: _t->on_newgame_triggered(); break;
        case 29: _t->on_seehelp_triggered(); break;
        case 30: _t->on_sudomodel_triggered(); break;
        case 31: _t->on_backtomain_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 32)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 32;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 32)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 32;
    }
    return _id;
}
QT_WARNING_POP
