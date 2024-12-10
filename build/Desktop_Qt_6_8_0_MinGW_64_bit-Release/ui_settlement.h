/********************************************************************************
** Form generated from reading UI file 'settlement.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTLEMENT_H
#define UI_SETTLEMENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_settlement
{
public:
    QPushButton *leave;
    QLabel *label_2;
    QLabel *fame;
    QPushButton *newgame;
    QLabel *name;
    QLabel *money;
    QLabel *label_4;
    QLabel *contenttitle;
    QLabel *label;
    QLabel *health;
    QLabel *label_3;
    QLabel *title;
    QPushButton *torank;

    void setupUi(QWidget *settlement)
    {
        if (settlement->objectName().isEmpty())
            settlement->setObjectName("settlement");
        settlement->resize(442, 335);
        leave = new QPushButton(settlement);
        leave->setObjectName("leave");
        leave->setGeometry(QRect(280, 275, 81, 41));
        QFont font;
        font.setPointSize(12);
        leave->setFont(font);
        label_2 = new QLabel(settlement);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 135, 121, 31));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font1.setPointSize(14);
        label_2->setFont(font1);
        fame = new QLabel(settlement);
        fame->setObjectName("fame");
        fame->setGeometry(QRect(240, 175, 121, 31));
        fame->setFont(font);
        newgame = new QPushButton(settlement);
        newgame->setObjectName("newgame");
        newgame->setGeometry(QRect(180, 275, 81, 41));
        QFont font2;
        font2.setPointSize(10);
        newgame->setFont(font2);
        name = new QLabel(settlement);
        name->setObjectName("name");
        name->setGeometry(QRect(0, 55, 441, 31));
        name->setFont(font1);
        money = new QLabel(settlement);
        money->setObjectName("money");
        money->setGeometry(QRect(240, 95, 121, 31));
        money->setFont(font);
        label_4 = new QLabel(settlement);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 215, 121, 31));
        label_4->setFont(font1);
        contenttitle = new QLabel(settlement);
        contenttitle->setObjectName("contenttitle");
        contenttitle->setGeometry(QRect(180, 10, 96, 51));
        contenttitle->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\245\267\344\275\223\";"));
        label = new QLabel(settlement);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 95, 121, 31));
        label->setFont(font1);
        health = new QLabel(settlement);
        health->setObjectName("health");
        health->setGeometry(QRect(240, 135, 121, 31));
        health->setFont(font);
        label_3 = new QLabel(settlement);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 175, 121, 31));
        label_3->setFont(font1);
        title = new QLabel(settlement);
        title->setObjectName("title");
        title->setGeometry(QRect(240, 215, 196, 31));
        title->setFont(font);
        torank = new QPushButton(settlement);
        torank->setObjectName("torank");
        torank->setGeometry(QRect(80, 275, 81, 41));
        QFont font3;
        font3.setPointSize(8);
        torank->setFont(font3);

        retranslateUi(settlement);

        QMetaObject::connectSlotsByName(settlement);
    } // setupUi

    void retranslateUi(QWidget *settlement)
    {
        settlement->setWindowTitle(QCoreApplication::translate("settlement", "Form", nullptr));
        leave->setText(QCoreApplication::translate("settlement", "\347\246\273\345\274\200", nullptr));
        label_2->setText(QCoreApplication::translate("settlement", "\346\202\250\347\232\204\346\234\200\347\273\210\345\201\245\345\272\267\357\274\232", nullptr));
        fame->setText(QCoreApplication::translate("settlement", "fame", nullptr));
        newgame->setText(QCoreApplication::translate("settlement", "\345\206\215\346\235\245\344\270\200\345\261\200", nullptr));
        name->setText(QCoreApplication::translate("settlement", "<html><head/><body><p align=\"center\">\345\220\215\345\255\227</p></body></html>", nullptr));
        money->setText(QCoreApplication::translate("settlement", "money", nullptr));
        label_4->setText(QCoreApplication::translate("settlement", "\346\202\250\350\216\267\345\276\227\344\272\206\347\247\260\345\217\267\357\274\232", nullptr));
        contenttitle->setText(QCoreApplication::translate("settlement", "\346\270\270\346\210\217\347\273\223\346\235\237", nullptr));
        label->setText(QCoreApplication::translate("settlement", "\346\202\250\347\232\204\346\234\200\347\273\210\346\224\266\347\233\212\357\274\232", nullptr));
        health->setText(QCoreApplication::translate("settlement", "health", nullptr));
        label_3->setText(QCoreApplication::translate("settlement", "\346\202\250\347\232\204\346\234\200\347\273\210\345\243\260\346\234\233\357\274\232", nullptr));
        title->setText(QCoreApplication::translate("settlement", "title", nullptr));
        torank->setText(QCoreApplication::translate("settlement", "\346\237\245\347\234\213\346\216\222\350\241\214\346\246\234", nullptr));
    } // retranslateUi

};

namespace Ui {
    class settlement: public Ui_settlement {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTLEMENT_H
