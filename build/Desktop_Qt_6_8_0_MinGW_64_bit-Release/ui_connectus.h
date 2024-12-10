/********************************************************************************
** Form generated from reading UI file 'connectus.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONNECTUS_H
#define UI_CONNECTUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_connectUs
{
public:
    QLabel *githubtext;
    QLabel *github;
    QLabel *label_2;
    QLabel *label;
    QLabel *qrcodeimg;

    void setupUi(QWidget *connectUs)
    {
        if (connectUs->objectName().isEmpty())
            connectUs->setObjectName("connectUs");
        connectUs->resize(240, 403);
        githubtext = new QLabel(connectUs);
        githubtext->setObjectName("githubtext");
        githubtext->setGeometry(QRect(22, 120, 121, 31));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(14);
        githubtext->setFont(font);
        githubtext->setScaledContents(false);
        githubtext->setWordWrap(false);
        githubtext->setOpenExternalLinks(true);
        github = new QLabel(connectUs);
        github->setObjectName("github");
        github->setGeometry(QRect(140, 120, 91, 31));
        github->setFont(font);
        label_2 = new QLabel(connectUs);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 175, 231, 41));
        label_2->setFont(font);
        label = new QLabel(connectUs);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 245, 76, 26));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font1.setPointSize(10);
        label->setFont(font1);
        qrcodeimg = new QLabel(connectUs);
        qrcodeimg->setObjectName("qrcodeimg");
        qrcodeimg->setGeometry(QRect(85, 245, 140, 140));

        retranslateUi(connectUs);

        QMetaObject::connectSlotsByName(connectUs);
    } // setupUi

    void retranslateUi(QWidget *connectUs)
    {
        connectUs->setWindowTitle(QCoreApplication::translate("connectUs", "Form", nullptr));
        githubtext->setText(QCoreApplication::translate("connectUs", "github\344\273\223\345\272\223\357\274\232", nullptr));
        github->setText(QCoreApplication::translate("connectUs", "\347\202\271\345\207\273\350\267\263\350\275\254", nullptr));
        label_2->setText(QCoreApplication::translate("connectUs", "\351\202\256\347\256\261\357\274\232blackdover@163.com", nullptr));
        label->setText(QCoreApplication::translate("connectUs", "QQ\344\272\214\347\273\264\347\240\201\357\274\232", nullptr));
        qrcodeimg->setText(QCoreApplication::translate("connectUs", "\344\272\214\347\273\264\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class connectUs: public Ui_connectUs {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONNECTUS_H
