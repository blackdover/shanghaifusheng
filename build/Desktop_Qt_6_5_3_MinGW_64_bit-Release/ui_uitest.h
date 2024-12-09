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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_uitest
{
public:

    void setupUi(QWidget *uitest)
    {
        if (uitest->objectName().isEmpty())
            uitest->setObjectName("uitest");
        uitest->resize(756, 625);
        QFont font;
        font.setPointSize(8);
        uitest->setFont(font);

        retranslateUi(uitest);

        QMetaObject::connectSlotsByName(uitest);
    } // setupUi

    void retranslateUi(QWidget *uitest)
    {
        uitest->setWindowTitle(QCoreApplication::translate("uitest", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class uitest: public Ui_uitest {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UITEST_H
