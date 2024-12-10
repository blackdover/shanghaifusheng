/********************************************************************************
** Form generated from reading UI file 'sudomodel.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUDOMODEL_H
#define UI_SUDOMODEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sudomodel
{
public:
    QLabel *label;
    QPushButton *moneyadd;
    QPushButton *healthadd;
    QPushButton *fameadd;
    QWidget *widget;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;

    void setupUi(QWidget *sudomodel)
    {
        if (sudomodel->objectName().isEmpty())
            sudomodel->setObjectName("sudomodel");
        sudomodel->resize(389, 255);
        label = new QLabel(sudomodel);
        label->setObjectName("label");
        label->setGeometry(QRect(145, 25, 101, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(18);
        label->setFont(font);
        moneyadd = new QPushButton(sudomodel);
        moneyadd->setObjectName("moneyadd");
        moneyadd->setGeometry(QRect(20, 100, 101, 41));
        QFont font1;
        font1.setPointSize(14);
        moneyadd->setFont(font1);
        healthadd = new QPushButton(sudomodel);
        healthadd->setObjectName("healthadd");
        healthadd->setGeometry(QRect(150, 100, 91, 41));
        healthadd->setFont(font1);
        fameadd = new QPushButton(sudomodel);
        fameadd->setObjectName("fameadd");
        fameadd->setGeometry(QRect(270, 100, 91, 41));
        fameadd->setFont(font1);
        widget = new QWidget(sudomodel);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 391, 261));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(214, 214, 214);"));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(70, 100, 171, 31));
        QFont font2;
        font2.setPointSize(12);
        label_2->setFont(font2);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(200, 100, 113, 31));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(160, 170, 81, 31));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font3.setPointSize(12);
        pushButton_3->setFont(font3);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(sudomodel);

        QMetaObject::connectSlotsByName(sudomodel);
    } // setupUi

    void retranslateUi(QWidget *sudomodel)
    {
        sudomodel->setWindowTitle(QCoreApplication::translate("sudomodel", "Form", nullptr));
        label->setText(QCoreApplication::translate("sudomodel", "\345\246\231\345\246\231\345\267\245\345\205\267", nullptr));
        moneyadd->setText(QCoreApplication::translate("sudomodel", "\346\211\223\351\222\261\357\274\201", nullptr));
        healthadd->setText(QCoreApplication::translate("sudomodel", "\346\233\264\345\201\245\345\272\267\357\274\201", nullptr));
        fameadd->setText(QCoreApplication::translate("sudomodel", "\346\233\264\346\234\211\345\220\215!", nullptr));
        label_2->setText(QCoreApplication::translate("sudomodel", "\350\257\267\350\276\223\345\205\245\347\245\236\347\247\230\344\273\243\347\240\201\357\274\232", nullptr));
        lineEdit->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("sudomodel", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sudomodel: public Ui_sudomodel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUDOMODEL_H
