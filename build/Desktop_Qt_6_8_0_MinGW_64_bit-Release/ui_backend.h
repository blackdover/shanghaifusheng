/********************************************************************************
** Form generated from reading UI file 'backend.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKEND_H
#define UI_BACKEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_backend
{
public:
    QLabel *label;
    QWidget *widget;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;

    void setupUi(QWidget *backend)
    {
        if (backend->objectName().isEmpty())
            backend->setObjectName("backend");
        backend->resize(742, 590);
        label = new QLabel(backend);
        label->setObjectName("label");
        label->setGeometry(QRect(335, 5, 146, 61));
        QFont font;
        font.setPointSize(18);
        label->setFont(font);
        widget = new QWidget(backend);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(0, 0, 746, 591));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(214, 214, 214);"));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(265, 245, 171, 31));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(395, 245, 113, 31));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(355, 315, 81, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font2.setPointSize(12);
        pushButton_3->setFont(font2);
        pushButton_3->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));

        retranslateUi(backend);

        QMetaObject::connectSlotsByName(backend);
    } // setupUi

    void retranslateUi(QWidget *backend)
    {
        backend->setWindowTitle(QCoreApplication::translate("backend", "Form", nullptr));
        label->setText(QCoreApplication::translate("backend", "\346\225\260\346\215\256\347\256\241\347\220\206", nullptr));
        label_2->setText(QCoreApplication::translate("backend", "\350\257\267\350\276\223\345\205\245\347\231\273\351\231\206\345\257\206\347\240\201\357\274\232", nullptr));
        lineEdit->setText(QString());
        pushButton_3->setText(QCoreApplication::translate("backend", "\347\241\256\345\256\232", nullptr));
    } // retranslateUi

};

namespace Ui {
    class backend: public Ui_backend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKEND_H
