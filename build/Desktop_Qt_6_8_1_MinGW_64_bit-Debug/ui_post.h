/********************************************************************************
** Form generated from reading UI file 'post.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_POST_H
#define UI_POST_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Post
{
public:
    QLabel *label;
    QLabel *label_2;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *payButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *leaveButton;
    QSpacerItem *horizontalSpacer_3;

    void setupUi(QWidget *Post)
    {
        if (Post->objectName().isEmpty())
            Post->setObjectName("Post");
        Post->resize(331, 164);
        label = new QLabel(Post);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 10, 231, 41));
        label_2 = new QLabel(Post);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(50, 50, 251, 41));
        widget = new QWidget(Post);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 100, 271, 41));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        payButton = new QPushButton(widget);
        payButton->setObjectName("payButton");

        horizontalLayout->addWidget(payButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        leaveButton = new QPushButton(widget);
        leaveButton->setObjectName("leaveButton");

        horizontalLayout->addWidget(leaveButton);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        retranslateUi(Post);

        QMetaObject::connectSlotsByName(Post);
    } // setupUi

    void retranslateUi(QWidget *Post)
    {
        Post->setWindowTitle(QCoreApplication::translate("Post", "Form", nullptr));
        label->setText(QCoreApplication::translate("Post", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:700;\">\346\254\242\350\277\216\346\202\250\346\235\245\345\210\260\351\202\256\345\261\200\357\274\201</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("Post", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\267\351\227\256\346\202\250\346\235\245\345\271\262\347\202\271\344\273\200\344\271\210\357\274\237</span></p></body></html>", nullptr));
        payButton->setText(QCoreApplication::translate("Post", "\350\277\230\351\222\261", nullptr));
        leaveButton->setText(QCoreApplication::translate("Post", "\347\246\273\345\274\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Post: public Ui_Post {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_POST_H
