/********************************************************************************
** Form generated from reading UI file 'hospital.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HOSPITAL_H
#define UI_HOSPITAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Hospital
{
public:
    QLabel *label;
    QLabel *tipLabel;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *cureButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *cancelButton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Hospital)
    {
        if (Hospital->objectName().isEmpty())
            Hospital->setObjectName("Hospital");
        Hospital->resize(403, 212);
        label = new QLabel(Hospital);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 10, 301, 51));
        tipLabel = new QLabel(Hospital);
        tipLabel->setObjectName("tipLabel");
        tipLabel->setGeometry(QRect(40, 60, 321, 61));
        layoutWidget = new QWidget(Hospital);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(40, 140, 321, 51));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        cureButton = new QPushButton(layoutWidget);
        cureButton->setObjectName("cureButton");

        horizontalLayout->addWidget(cureButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName("cancelButton");

        horizontalLayout->addWidget(cancelButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        retranslateUi(Hospital);

        QMetaObject::connectSlotsByName(Hospital);
    } // setupUi

    void retranslateUi(QWidget *Hospital)
    {
        Hospital->setWindowTitle(QCoreApplication::translate("Hospital", "Form", nullptr));
        label->setText(QCoreApplication::translate("Hospital", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">\346\254\242\350\277\216\346\202\250\346\235\245\345\210\260\345\205\255\351\231\242\357\274\201</span></p></body></html>", nullptr));
        tipLabel->setText(QString());
        cureButton->setText(QCoreApplication::translate("Hospital", "\346\262\273\347\226\227", nullptr));
        cancelButton->setText(QCoreApplication::translate("Hospital", "\344\270\215\346\262\273\344\272\206\357\274\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Hospital: public Ui_Hospital {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HOSPITAL_H
