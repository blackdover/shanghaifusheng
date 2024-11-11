/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QWidget *centralwidget;
    QPushButton *buy;
    QPushButton *sell;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *pushButton_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButton_5;
    QSpacerItem *horizontalSpacer_6;
    QLCDNumber *playermoney;
    QLCDNumber *playerbankmoney;
    QLCDNumber *playergiveupmoney;
    QLCDNumber *playerhealth;
    QLCDNumber *playerfame;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_13;
    QPushButton *pushButton_11;
    QPushButton *pushButton_16;
    QPushButton *pushButton_15;
    QPushButton *pushButton_14;
    QPushButton *pushButton_12;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QLabel *daylabel;
    QListWidget *itemWidget;
    QListWidget *bagWidget;
    QMenuBar *menubar;
    QMenu *menu;
    QMenu *menu_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(618, 450);
        action = new QAction(MainWindow);
        action->setObjectName("action");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        buy = new QPushButton(centralwidget);
        buy->setObjectName("buy");
        buy->setGeometry(QRect(270, 80, 81, 24));
        sell = new QPushButton(centralwidget);
        sell->setObjectName("sell");
        sell->setGeometry(QRect(270, 130, 81, 24));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(10, 380, 601, 26));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_5);

        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout->addWidget(pushButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        pushButton_3 = new QPushButton(layoutWidget);
        pushButton_3->setObjectName("pushButton_3");

        horizontalLayout->addWidget(pushButton_3);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        pushButton_4 = new QPushButton(layoutWidget);
        pushButton_4->setObjectName("pushButton_4");

        horizontalLayout->addWidget(pushButton_4);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        pushButton_5 = new QPushButton(layoutWidget);
        pushButton_5->setObjectName("pushButton_5");

        horizontalLayout->addWidget(pushButton_5);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_6);

        horizontalLayout->setStretch(2, 5);
        horizontalLayout->setStretch(4, 5);
        horizontalLayout->setStretch(6, 5);
        horizontalLayout->setStretch(8, 5);
        playermoney = new QLCDNumber(centralwidget);
        playermoney->setObjectName("playermoney");
        playermoney->setGeometry(QRect(70, 200, 191, 31));
        playerbankmoney = new QLCDNumber(centralwidget);
        playerbankmoney->setObjectName("playerbankmoney");
        playerbankmoney->setGeometry(QRect(70, 240, 191, 31));
        playergiveupmoney = new QLCDNumber(centralwidget);
        playergiveupmoney->setObjectName("playergiveupmoney");
        playergiveupmoney->setGeometry(QRect(70, 280, 191, 31));
        playerhealth = new QLCDNumber(centralwidget);
        playerhealth->setObjectName("playerhealth");
        playerhealth->setGeometry(QRect(70, 320, 71, 31));
        playerfame = new QLCDNumber(centralwidget);
        playerfame->setObjectName("playerfame");
        playerfame->setGeometry(QRect(190, 320, 71, 31));
        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName("layoutWidget1");
        layoutWidget1->setGeometry(QRect(360, 170, 231, 211));
        gridLayout = new QGridLayout(layoutWidget1);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_8 = new QPushButton(layoutWidget1);
        pushButton_8->setObjectName("pushButton_8");

        gridLayout->addWidget(pushButton_8, 0, 0, 1, 1);

        pushButton_9 = new QPushButton(layoutWidget1);
        pushButton_9->setObjectName("pushButton_9");

        gridLayout->addWidget(pushButton_9, 0, 1, 1, 1);

        pushButton_10 = new QPushButton(layoutWidget1);
        pushButton_10->setObjectName("pushButton_10");

        gridLayout->addWidget(pushButton_10, 0, 2, 1, 1);

        pushButton_13 = new QPushButton(layoutWidget1);
        pushButton_13->setObjectName("pushButton_13");

        gridLayout->addWidget(pushButton_13, 1, 0, 1, 1);

        pushButton_11 = new QPushButton(layoutWidget1);
        pushButton_11->setObjectName("pushButton_11");

        gridLayout->addWidget(pushButton_11, 1, 2, 1, 1);

        pushButton_16 = new QPushButton(layoutWidget1);
        pushButton_16->setObjectName("pushButton_16");

        gridLayout->addWidget(pushButton_16, 2, 0, 1, 1);

        pushButton_15 = new QPushButton(layoutWidget1);
        pushButton_15->setObjectName("pushButton_15");

        gridLayout->addWidget(pushButton_15, 2, 1, 1, 1);

        pushButton_14 = new QPushButton(layoutWidget1);
        pushButton_14->setObjectName("pushButton_14");

        gridLayout->addWidget(pushButton_14, 2, 2, 1, 1);

        pushButton_12 = new QPushButton(layoutWidget1);
        pushButton_12->setObjectName("pushButton_12");

        gridLayout->addWidget(pushButton_12, 1, 1, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 205, 31, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 245, 31, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(40, 285, 31, 21));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(40, 325, 31, 21));
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(160, 325, 31, 21));
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(310, 200, 51, 31));
        pushButton_17 = new QPushButton(centralwidget);
        pushButton_17->setObjectName("pushButton_17");
        pushButton_17->setGeometry(QRect(270, 280, 75, 24));
        pushButton_18 = new QPushButton(centralwidget);
        pushButton_18->setObjectName("pushButton_18");
        pushButton_18->setGeometry(QRect(270, 310, 75, 24));
        daylabel = new QLabel(centralwidget);
        daylabel->setObjectName("daylabel");
        daylabel->setGeometry(QRect(270, 0, 81, 31));
        itemWidget = new QListWidget(centralwidget);
        itemWidget->setObjectName("itemWidget");
        itemWidget->setGeometry(QRect(40, 30, 221, 161));
        bagWidget = new QListWidget(centralwidget);
        bagWidget->setObjectName("bagWidget");
        bagWidget->setGeometry(QRect(360, 30, 231, 161));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 618, 22));
        menu = new QMenu(menubar);
        menu->setObjectName("menu");
        menu_2 = new QMenu(menubar);
        menu_2->setObjectName("menu_2");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());
        menubar->addAction(menu_2->menuAction());
        menu->addAction(action);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\346\216\222\350\241\214\346\246\234", nullptr));
        buy->setText(QCoreApplication::translate("MainWindow", "\344\271\260\345\205\245=>", nullptr));
        sell->setText(QCoreApplication::translate("MainWindow", "<=\345\215\226\345\207\272", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\351\223\266\350\241\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\345\214\273\351\231\242", nullptr));
        pushButton_3->setText(QCoreApplication::translate("MainWindow", "\351\202\256\345\261\200", nullptr));
        pushButton_4->setText(QCoreApplication::translate("MainWindow", "\347\247\237\346\210\277\344\270\255\344\273\213", nullptr));
        pushButton_5->setText(QCoreApplication::translate("MainWindow", "\347\275\221\345\220\247", nullptr));
        pushButton_8->setText(QCoreApplication::translate("MainWindow", "\345\230\211\345\256\232", nullptr));
        pushButton_9->setText(QCoreApplication::translate("MainWindow", "\350\231\271\345\217\243", nullptr));
        pushButton_10->setText(QCoreApplication::translate("MainWindow", "\345\256\235\345\261\261", nullptr));
        pushButton_13->setText(QCoreApplication::translate("MainWindow", "\351\235\222\346\265\246", nullptr));
        pushButton_11->setText(QCoreApplication::translate("MainWindow", "\346\265\246\344\270\234", nullptr));
        pushButton_16->setText(QCoreApplication::translate("MainWindow", "\346\235\276\346\261\237", nullptr));
        pushButton_15->setText(QCoreApplication::translate("MainWindow", "\351\207\221\345\261\261", nullptr));
        pushButton_14->setText(QCoreApplication::translate("MainWindow", "\344\270\264\346\270\257", nullptr));
        pushButton_12->setText(QCoreApplication::translate("MainWindow", "\351\231\206\345\256\266\345\230\264", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\216\260\351\207\221:", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\255\230\346\254\276:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\346\254\240\346\254\276:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\345\201\245\345\272\267:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\220\215\345\243\260:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\345\234\260\351\223\201\347\253\231\357\274\232", nullptr));
        pushButton_17->setText(QCoreApplication::translate("MainWindow", "\346\211\223\351\222\261", nullptr));
        pushButton_18->setText(QCoreApplication::translate("MainWindow", "\350\277\230\351\222\261", nullptr));
        daylabel->setText(QCoreApplication::translate("MainWindow", "\345\275\223\345\211\215\346\230\257\347\254\254x\345\244\251", nullptr));
        menu->setTitle(QCoreApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        menu_2->setTitle(QCoreApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
