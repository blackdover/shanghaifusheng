/********************************************************************************
** Form generated from reading UI file 'start.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_START_H
#define UI_START_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_start
{
public:
    QLabel *label;
    QPushButton *startbutton;
    QPushButton *rankbutton;
    QPushButton *connectusbutton;
    QPushButton *gotoback;

    void setupUi(QWidget *start)
    {
        if (start->objectName().isEmpty())
            start->setObjectName("start");
        start->resize(280, 428);
        label = new QLabel(start);
        label->setObjectName("label");
        label->setGeometry(QRect(60, 40, 171, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(24);
        label->setFont(font);
        startbutton = new QPushButton(start);
        startbutton->setObjectName("startbutton");
        startbutton->setGeometry(QRect(90, 185, 91, 31));
        rankbutton = new QPushButton(start);
        rankbutton->setObjectName("rankbutton");
        rankbutton->setGeometry(QRect(90, 235, 91, 31));
        connectusbutton = new QPushButton(start);
        connectusbutton->setObjectName("connectusbutton");
        connectusbutton->setGeometry(QRect(90, 285, 91, 31));
        gotoback = new QPushButton(start);
        gotoback->setObjectName("gotoback");
        gotoback->setGeometry(QRect(90, 335, 91, 31));

        retranslateUi(start);

        QMetaObject::connectSlotsByName(start);
    } // setupUi

    void retranslateUi(QWidget *start)
    {
        start->setWindowTitle(QCoreApplication::translate("start", "Form", nullptr));
        label->setText(QCoreApplication::translate("start", "\344\270\212\346\265\267\346\265\256\347\224\237\350\256\260", nullptr));
        startbutton->setText(QCoreApplication::translate("start", "\345\274\200\345\247\213\346\270\270\346\210\217", nullptr));
        rankbutton->setText(QCoreApplication::translate("start", "\346\216\222\350\241\214\346\246\234", nullptr));
        connectusbutton->setText(QCoreApplication::translate("start", "\350\201\224\347\263\273\346\210\221\344\273\254", nullptr));
        gotoback->setText(QCoreApplication::translate("start", "\350\277\233\345\205\245\345\220\216\345\217\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class start: public Ui_start {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_START_H
