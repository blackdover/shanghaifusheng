/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_help
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *help)
    {
        if (help->objectName().isEmpty())
            help->setObjectName("help");
        help->resize(568, 401);
        label = new QLabel(help);
        label->setObjectName("label");
        label->setGeometry(QRect(220, 0, 131, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font.setPointSize(16);
        label->setFont(font);
        label_2 = new QLabel(help);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 40, 551, 381));

        retranslateUi(help);

        QMetaObject::connectSlotsByName(help);
    } // setupUi

    void retranslateUi(QWidget *help)
    {
        help->setWindowTitle(QCoreApplication::translate("help", "Form", nullptr));
        label->setText(QCoreApplication::translate("help", "<html><head/><body><p><span style=\" font-size:20pt;\">\345\270\256\345\212\251\346\226\207\346\241\243</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("help", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-weight:700;\">\344\273\245\344\270\213\346\230\257\347\211\251\345\223\201\347\232\204\345\237\272\345\207\206\344\273\267\346\240\274\357\274\214\350\267\235\347\246\273\345\237\272\345\207\206\344\273\267\346\240\274\350\266\212\350\277\221\357\274\214\350\266\212\351\200\202\345\220\210\344\271\260\345\205\245</span></p><p align=\"center\"><span style=\" font-size:11pt;\">\346\213\274\345\245\275\351\245\255\347\211\214\350\204\206\347\232\256\351\270\241 5</span></p><p align=\"center\"><span style=\" font-size:11pt;\">\351\235\242\345\220\221\345\257\271\350\261\241\350\257\276\346\234\254 50</span></p><p align=\"center\"><span style=\" font-size:11pt;\">\350\275\257\347\241\254\351\200\202\344\270\255\345\215\216 100</span></p><p align=\"center\"><span style=\" font-size:11pt;\">\345\206\231\346\273\241\347\232\204\345\256\236\351\252\214\346\212\245\345\221\212 300</span></p><p align=\"center\"><span style=\" font-size:11pt;\">\345"
                        "\244\247\347\261\263\347\224\265\347\223\266\350\275\246 700</span></p><p align=\"center\"><span style=\" font-size:11pt;\">\345\215\216\344\270\272Mate120pro 6000</span></p><p align=\"center\"><span style=\" font-size:11pt;\">\346\233\271\345\216\277\350\214\205\345\217\260 10000</span></p><p align=\"center\"><span style=\" font-size:11pt;\">\345\206\257\350\257\272\344\276\235\346\233\274\344\272\262\347\255\276 20000</span></p><p align=\"center\"><span style=\" font-size:11pt;\">\347\211\271\346\226\257\346\213\211\347\201\253\347\256\255\347\211\214\346\261\275\350\275\246 200000</span></p><p align=\"center\"><br/></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class help: public Ui_help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
