/********************************************************************************
** Form generated from reading UI file 'bank.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BANK_H
#define UI_BANK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Bank
{
public:
    QLabel *label;
    QLabel *tipLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *saveButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *drawButton;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *leaveButton;
    QSpacerItem *horizontalSpacer_4;

    void setupUi(QWidget *Bank)
    {
        if (Bank->objectName().isEmpty())
            Bank->setObjectName("Bank");
        Bank->resize(362, 203);
        Bank->setWindowOpacity(1.000000000000000);
        label = new QLabel(Bank);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 20, 221, 41));
        tipLabel = new QLabel(Bank);
        tipLabel->setObjectName("tipLabel");
        tipLabel->setGeometry(QRect(40, 60, 281, 51));
        layoutWidget = new QWidget(Bank);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(20, 140, 321, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        saveButton = new QPushButton(layoutWidget);
        saveButton->setObjectName("saveButton");

        horizontalLayout->addWidget(saveButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        drawButton = new QPushButton(layoutWidget);
        drawButton->setObjectName("drawButton");

        horizontalLayout->addWidget(drawButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        leaveButton = new QPushButton(layoutWidget);
        leaveButton->setObjectName("leaveButton");

        horizontalLayout->addWidget(leaveButton);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_4);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 1);
        horizontalLayout->setStretch(4, 1);
        horizontalLayout->setStretch(5, 1);
        horizontalLayout->setStretch(6, 1);

        retranslateUi(Bank);

        QMetaObject::connectSlotsByName(Bank);
    } // setupUi

    void retranslateUi(QWidget *Bank)
    {
        Bank->setWindowTitle(QCoreApplication::translate("Bank", "Form", nullptr));
        label->setText(QCoreApplication::translate("Bank", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">\346\254\242\350\277\216\346\202\250\346\235\245\345\210\260\351\223\266\350\241\214\357\274\201</span></p></body></html>", nullptr));
        tipLabel->setText(QString());
        saveButton->setText(QCoreApplication::translate("Bank", "\345\255\230\346\254\276", nullptr));
        drawButton->setText(QCoreApplication::translate("Bank", "\345\217\226\346\254\276", nullptr));
        leaveButton->setText(QCoreApplication::translate("Bank", "\347\246\273\345\274\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bank: public Ui_Bank {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BANK_H
