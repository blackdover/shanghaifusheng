/********************************************************************************
** Form generated from reading UI file 'uitest.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UITEST_H
#define UI_UITEST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uitest
{
public:
    QLabel *contenttitle;
    QLabel *money;
    QLabel *label;
    QLabel *health;
    QLabel *label_2;
    QLabel *fame;
    QLabel *label_3;
    QLabel *title;
    QLabel *label_4;
    QPushButton *torank;
    QPushButton *newgame;
    QPushButton *leave;
    QLabel *name;

    void setupUi(QWidget *uitest)
    {
        if (uitest->objectName().isEmpty())
            uitest->setObjectName("uitest");
        uitest->resize(442, 335);
        QFont font;
        font.setPointSize(8);
        uitest->setFont(font);
        contenttitle = new QLabel(uitest);
        contenttitle->setObjectName("contenttitle");
        contenttitle->setGeometry(QRect(180, 10, 96, 51));
        contenttitle->setStyleSheet(QString::fromUtf8("font: 16pt \"\346\245\267\344\275\223\";"));
        money = new QLabel(uitest);
        money->setObjectName("money");
        money->setGeometry(QRect(240, 95, 121, 31));
        QFont font1;
        font1.setPointSize(12);
        money->setFont(font1);
        label = new QLabel(uitest);
        label->setObjectName("label");
        label->setGeometry(QRect(110, 95, 121, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font2.setPointSize(14);
        label->setFont(font2);
        health = new QLabel(uitest);
        health->setObjectName("health");
        health->setGeometry(QRect(240, 135, 121, 31));
        health->setFont(font1);
        label_2 = new QLabel(uitest);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(110, 135, 121, 31));
        label_2->setFont(font2);
        fame = new QLabel(uitest);
        fame->setObjectName("fame");
        fame->setGeometry(QRect(240, 175, 121, 31));
        fame->setFont(font1);
        label_3 = new QLabel(uitest);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(110, 175, 121, 31));
        label_3->setFont(font2);
        title = new QLabel(uitest);
        title->setObjectName("title");
        title->setGeometry(QRect(240, 215, 196, 31));
        title->setFont(font1);
        label_4 = new QLabel(uitest);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(110, 215, 121, 31));
        label_4->setFont(font2);
        torank = new QPushButton(uitest);
        torank->setObjectName("torank");
        torank->setGeometry(QRect(80, 275, 81, 41));
        torank->setFont(font);
        newgame = new QPushButton(uitest);
        newgame->setObjectName("newgame");
        newgame->setGeometry(QRect(180, 275, 81, 41));
        QFont font3;
        font3.setPointSize(10);
        newgame->setFont(font3);
        leave = new QPushButton(uitest);
        leave->setObjectName("leave");
        leave->setGeometry(QRect(280, 275, 81, 41));
        leave->setFont(font1);
        name = new QLabel(uitest);
        name->setObjectName("name");
        name->setGeometry(QRect(0, 55, 441, 31));
        name->setFont(font2);

        retranslateUi(uitest);

        QMetaObject::connectSlotsByName(uitest);
    } // setupUi

    void retranslateUi(QWidget *uitest)
    {
        uitest->setWindowTitle(QCoreApplication::translate("uitest", "Form", nullptr));
        contenttitle->setText(QCoreApplication::translate("uitest", "\346\270\270\346\210\217\347\273\223\346\235\237", nullptr));
        money->setText(QCoreApplication::translate("uitest", "money", nullptr));
        label->setText(QCoreApplication::translate("uitest", "\346\202\250\347\232\204\346\234\200\347\273\210\346\224\266\347\233\212\357\274\232", nullptr));
        health->setText(QCoreApplication::translate("uitest", "health", nullptr));
        label_2->setText(QCoreApplication::translate("uitest", "\346\202\250\347\232\204\346\234\200\347\273\210\345\201\245\345\272\267\357\274\232", nullptr));
        fame->setText(QCoreApplication::translate("uitest", "fame", nullptr));
        label_3->setText(QCoreApplication::translate("uitest", "\346\202\250\347\232\204\346\234\200\347\273\210\345\243\260\346\234\233\357\274\232", nullptr));
        title->setText(QCoreApplication::translate("uitest", "title", nullptr));
        label_4->setText(QCoreApplication::translate("uitest", "\346\202\250\350\216\267\345\276\227\344\272\206\347\247\260\345\217\267\357\274\232", nullptr));
        torank->setText(QCoreApplication::translate("uitest", "\346\237\245\347\234\213\346\216\222\350\241\214\346\246\234", nullptr));
        newgame->setText(QCoreApplication::translate("uitest", "\345\206\215\346\235\245\344\270\200\345\261\200", nullptr));
        leave->setText(QCoreApplication::translate("uitest", "\347\246\273\345\274\200", nullptr));
        name->setText(QCoreApplication::translate("uitest", "<html><head/><body><p align=\"center\">\345\220\215\345\255\227</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uitest: public Ui_uitest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UITEST_H
