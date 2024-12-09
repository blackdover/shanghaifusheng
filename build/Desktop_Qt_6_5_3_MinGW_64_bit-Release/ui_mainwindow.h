/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *newgame;
    QAction *seehelp;
    QAction *sudomodel;
    QWidget *centralwidget;
    QPushButton *sell;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *bankButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *hospitalButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *postButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *rentButton;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *douyinButton;
    QSpacerItem *horizontalSpacer_6;
    QLabel *daylabel;
    QPushButton *buy;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_2;
    QLCDNumber *playerbankmoney;
    QLCDNumber *playergiveupmoney;
    QLabel *label;
    QLabel *label_5;
    QLCDNumber *playerfame;
    QLCDNumber *playermoney;
    QLCDNumber *playerhealth;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QPushButton *jinshanplace;
    QPushButton *linggangplace;
    QPushButton *baoshanplace;
    QPushButton *pudongplace;
    QPushButton *songjiangplace;
    QPushButton *lujiazuiplace;
    QPushButton *jiadingplace;
    QPushButton *qingpuplace;
    QPushButton *hongkouplace;
    QTreeWidget *itemWidget;
    QTreeWidget *bagWidget;
    QLabel *label_6;
    QLabel *label_7;
    QWidget *gameover;
    QStatusBar *statusbar;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(637, 461);
        newgame = new QAction(MainWindow);
        newgame->setObjectName("newgame");
        seehelp = new QAction(MainWindow);
        seehelp->setObjectName("seehelp");
        sudomodel = new QAction(MainWindow);
        sudomodel->setObjectName("sudomodel");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        sell = new QPushButton(centralwidget);
        sell->setObjectName("sell");
        sell->setGeometry(QRect(275, 120, 71, 24));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(15, 380, 601, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        bankButton = new QPushButton(layoutWidget);
        bankButton->setObjectName("bankButton");

        horizontalLayout->addWidget(bankButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        hospitalButton = new QPushButton(layoutWidget);
        hospitalButton->setObjectName("hospitalButton");

        horizontalLayout->addWidget(hospitalButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        postButton = new QPushButton(layoutWidget);
        postButton->setObjectName("postButton");

        horizontalLayout->addWidget(postButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        rentButton = new QPushButton(layoutWidget);
        rentButton->setObjectName("rentButton");

        horizontalLayout->addWidget(rentButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        douyinButton = new QPushButton(layoutWidget);
        douyinButton->setObjectName("douyinButton");

        horizontalLayout->addWidget(douyinButton);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        horizontalLayout->setStretch(2, 5);
        horizontalLayout->setStretch(4, 5);
        horizontalLayout->setStretch(6, 5);
        horizontalLayout->setStretch(8, 5);
        daylabel = new QLabel(centralwidget);
        daylabel->setObjectName("daylabel");
        daylabel->setGeometry(QRect(275, 5, 81, 31));
        buy = new QPushButton(centralwidget);
        buy->setObjectName("buy");
        buy->setGeometry(QRect(275, 70, 71, 24));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(25, 195, 246, 176));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(15, 105, 31, 21));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(15, 145, 31, 21));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(15, 65, 31, 21));
        playerbankmoney = new QLCDNumber(groupBox);
        playerbankmoney->setObjectName("playerbankmoney");
        playerbankmoney->setGeometry(QRect(45, 60, 191, 31));
        playerbankmoney->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 255, 0);"));
        playergiveupmoney = new QLCDNumber(groupBox);
        playergiveupmoney->setObjectName("playergiveupmoney");
        playergiveupmoney->setGeometry(QRect(45, 100, 191, 31));
        playergiveupmoney->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(255, 0, 0);"));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(15, 25, 31, 21));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(135, 145, 31, 21));
        playerfame = new QLCDNumber(groupBox);
        playerfame->setObjectName("playerfame");
        playerfame->setGeometry(QRect(165, 140, 71, 31));
        playerfame->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 255, 0);"));
        playermoney = new QLCDNumber(groupBox);
        playermoney->setObjectName("playermoney");
        playermoney->setGeometry(QRect(45, 20, 191, 31));
        playermoney->setAutoFillBackground(false);
        playermoney->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 255, 0);"));
        playerhealth = new QLCDNumber(groupBox);
        playerhealth->setObjectName("playerhealth");
        playerhealth->setGeometry(QRect(45, 140, 71, 31));
        playerhealth->setStyleSheet(QString::fromUtf8("background-color: rgb(0, 0, 0);\n"
"color: rgb(0, 255, 0);"));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(350, 195, 261, 176));
        groupBox_2->setAutoFillBackground(false);
        groupBox_2->setStyleSheet(QString::fromUtf8("border-color: rgb(0, 0, 0);"));
        groupBox_2->setFlat(false);
        groupBox_2->setCheckable(false);
        layoutWidget1 = new QWidget(groupBox_2);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(15, -10, 241, 211));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        jinshanplace = new QPushButton(layoutWidget1);
        jinshanplace->setObjectName("jinshanplace");

        gridLayout->addWidget(jinshanplace, 2, 1, 1, 1);

        linggangplace = new QPushButton(layoutWidget1);
        linggangplace->setObjectName("linggangplace");

        gridLayout->addWidget(linggangplace, 2, 2, 1, 1);

        baoshanplace = new QPushButton(layoutWidget1);
        baoshanplace->setObjectName("baoshanplace");

        gridLayout->addWidget(baoshanplace, 0, 2, 1, 1);

        pudongplace = new QPushButton(layoutWidget1);
        pudongplace->setObjectName("pudongplace");

        gridLayout->addWidget(pudongplace, 1, 2, 1, 1);

        songjiangplace = new QPushButton(layoutWidget1);
        songjiangplace->setObjectName("songjiangplace");

        gridLayout->addWidget(songjiangplace, 2, 0, 1, 1);

        lujiazuiplace = new QPushButton(layoutWidget1);
        lujiazuiplace->setObjectName("lujiazuiplace");

        gridLayout->addWidget(lujiazuiplace, 1, 1, 1, 1);

        jiadingplace = new QPushButton(layoutWidget1);
        jiadingplace->setObjectName("jiadingplace");

        gridLayout->addWidget(jiadingplace, 0, 0, 1, 1);

        qingpuplace = new QPushButton(layoutWidget1);
        qingpuplace->setObjectName("qingpuplace");

        gridLayout->addWidget(qingpuplace, 1, 0, 1, 1);

        hongkouplace = new QPushButton(layoutWidget1);
        hongkouplace->setObjectName("hongkouplace");

        gridLayout->addWidget(hongkouplace, 0, 1, 1, 1);

        songjiangplace->raise();
        baoshanplace->raise();
        pudongplace->raise();
        linggangplace->raise();
        jinshanplace->raise();
        jiadingplace->raise();
        hongkouplace->raise();
        qingpuplace->raise();
        lujiazuiplace->raise();
        itemWidget = new QTreeWidget(centralwidget);
        itemWidget->setObjectName("itemWidget");
        itemWidget->setGeometry(QRect(25, 30, 236, 161));
        itemWidget->setRootIsDecorated(false);
        itemWidget->header()->setDefaultSectionSize(115);
        bagWidget = new QTreeWidget(centralwidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QString::fromUtf8("\345\225\206\345\223\201"));
        bagWidget->setHeaderItem(__qtreewidgetitem);
        bagWidget->setObjectName("bagWidget");
        bagWidget->setGeometry(QRect(360, 30, 251, 161));
        bagWidget->setRootIsDecorated(false);
        bagWidget->header()->setMinimumSectionSize(50);
        bagWidget->header()->setDefaultSectionSize(75);
        bagWidget->header()->setStretchLastSection(false);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(130, 10, 54, 16));
        QFont font;
        font.setPointSize(10);
        label_6->setFont(font);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(455, 10, 54, 16));
        label_7->setFont(font);
        gameover = new QWidget(centralwidget);
        gameover->setObjectName("gameover");
        gameover->setGeometry(QRect(0, 5, 626, 426));
        MainWindow->setCentralWidget(centralwidget);
        gameover->raise();
        groupBox->raise();
        groupBox_2->raise();
        sell->raise();
        layoutWidget->raise();
        daylabel->raise();
        buy->raise();
        itemWidget->raise();
        bagWidget->raise();
        label_6->raise();
        label_7->raise();
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 637, 18));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(newgame);
        menu_2->addAction(seehelp);
        menu_2->addAction(sudomodel);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        newgame->setText(QCoreApplication::translate("MainWindow", "\346\226\260\346\270\270\346\210\217", nullptr));
        seehelp->setText(QCoreApplication::translate("MainWindow", "\346\237\245\347\234\213\345\270\256\345\212\251\346\226\207\346\241\243", nullptr));
        sudomodel->setText(QCoreApplication::translate("MainWindow", "\347\245\236\347\247\230\346\214\211\351\222\256", nullptr));
        sell->setText(QCoreApplication::translate("MainWindow", "<=\345\215\226\345\207\272", nullptr));
        bankButton->setText(QCoreApplication::translate("MainWindow", "\351\223\266\350\241\214", nullptr));
        hospitalButton->setText(QCoreApplication::translate("MainWindow", "\345\214\273\351\231\242", nullptr));
        postButton->setText(QCoreApplication::translate("MainWindow", "\351\202\256\345\261\200", nullptr));
        rentButton->setText(QCoreApplication::translate("MainWindow", "\347\247\237\346\210\277\344\270\255\344\273\213", nullptr));
        douyinButton->setText(QCoreApplication::translate("MainWindow", "\346\212\226\351\237\263", nullptr));
        daylabel->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\346\230\257\347\254\254x\345\244\251", nullptr));
        buy->setText(QCoreApplication::translate("MainWindow", "\344\271\260\345\205\245=>", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\347\216\251\345\256\266\347\212\266\346\200\201", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\254\240\346\254\276:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\201\245\345\272\267:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\255\230\346\254\276:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\216\260\351\207\221:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\220\215\345\243\260:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\344\270\212\346\265\267\345\234\260\351\223\201", nullptr));
        jinshanplace->setText(QCoreApplication::translate("MainWindow", "\351\207\221\345\261\261", nullptr));
        linggangplace->setText(QCoreApplication::translate("MainWindow", "\344\270\264\346\270\257", nullptr));
        baoshanplace->setText(QCoreApplication::translate("MainWindow", "\345\256\235\345\261\261", nullptr));
        pudongplace->setText(QCoreApplication::translate("MainWindow", "\346\265\246\344\270\234", nullptr));
        songjiangplace->setText(QCoreApplication::translate("MainWindow", "\346\235\276\346\261\237", nullptr));
        lujiazuiplace->setText(QCoreApplication::translate("MainWindow", "\351\231\206\345\256\266\345\230\264", nullptr));
        jiadingplace->setText(QCoreApplication::translate("MainWindow", "\345\230\211\345\256\232", nullptr));
        qingpuplace->setText(QCoreApplication::translate("MainWindow", "\351\235\222\346\265\246", nullptr));
        hongkouplace->setText(QCoreApplication::translate("MainWindow", "\350\231\271\345\217\243", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = itemWidget->headerItem();
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("MainWindow", "\344\273\267\346\240\274", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("MainWindow", "\345\225\206\345\223\201", nullptr));
        QTreeWidgetItem *___qtreewidgetitem1 = bagWidget->headerItem();
        ___qtreewidgetitem1->setText(2, QCoreApplication::translate("MainWindow", "\346\225\260\351\207\217", nullptr));
        ___qtreewidgetitem1->setText(1, QCoreApplication::translate("MainWindow", "\344\271\260\350\277\233\344\273\267\346\240\274", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\270\202\345\234\272", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\346\202\250\347\232\204\350\203\214\345\214\205", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
