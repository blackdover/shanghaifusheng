/********************************************************************************
** Form generated from reading UI file 'eventwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EVENTWINDOW_H
#define UI_EVENTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_eventwindow
{
public:
    QPushButton *OK;
    QLabel *description;

    void setupUi(QWidget *eventwindow)
    {
        if (eventwindow->objectName().isEmpty())
            eventwindow->setObjectName("eventwindow");
        eventwindow->resize(536, 163);
        eventwindow->setMouseTracking(false);
        OK = new QPushButton(eventwindow);
        OK->setObjectName("OK");
        OK->setGeometry(QRect(220, 120, 93, 28));
        OK->setMouseTracking(false);
        description = new QLabel(eventwindow);
        description->setObjectName("description");
        description->setGeometry(QRect(160, 40, 221, 41));
        description->setScaledContents(false);
        description->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(eventwindow);

        QMetaObject::connectSlotsByName(eventwindow);
    } // setupUi

    void retranslateUi(QWidget *eventwindow)
    {
        eventwindow->setWindowTitle(QCoreApplication::translate("eventwindow", "MainWindow", nullptr));
        OK->setText(QCoreApplication::translate("eventwindow", "OK", nullptr));
        description->setText(QCoreApplication::translate("eventwindow", "event", nullptr));
    } // retranslateUi

};

namespace Ui {
    class eventwindow: public Ui_eventwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EVENTWINDOW_H
