/********************************************************************************
** Form generated from reading UI file 'loading.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOADING_H
#define UI_LOADING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_loading
{
public:
    QLabel *label;
    QPushButton *begin;
    QLabel *label_2;

    void setupUi(QWidget *loading)
    {
        if (loading->objectName().isEmpty())
            loading->setObjectName("loading");
        loading->resize(410, 583);
        label = new QLabel(loading);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 50, 381, 421));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label->setWordWrap(true);
        begin = new QPushButton(loading);
        begin->setObjectName("begin");
        begin->setGeometry(QRect(120, 500, 131, 51));
        QFont font1;
        font1.setPointSize(14);
        begin->setFont(font1);
        label_2 = new QLabel(loading);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, -10, 381, 71));
        QFont font2;
        font2.setPointSize(18);
        label_2->setFont(font2);

        retranslateUi(loading);

        QMetaObject::connectSlotsByName(loading);
    } // setupUi

    void retranslateUi(QWidget *loading)
    {
        loading->setWindowTitle(QCoreApplication::translate("loading", "Form", nullptr));
        label->setText(QCoreApplication::translate("loading", "<html><head/><body><p>\350\277\231\346\230\257\346\210\221\344\273\254\346\240\271\346\215\256\342\200\234\345\214\227\344\272\254\346\265\256\347\224\237\350\256\260\342\200\235\346\224\271\347\274\226\350\200\214\346\235\245\347\232\204\351\235\242\345\220\221\345\257\271\350\261\241\345\256\236\351\252\214\350\257\276\347\250\213\350\256\276\350\256\241\351\241\271\347\233\256\343\200\202</p><p>\345\234\250\346\270\270\346\210\217\344\270\255\357\274\214\346\202\250\345\260\206\346\211\256\346\274\224\344\270\200\344\275\215\346\200\200\346\217\243\346\242\246\346\203\263\347\232\204\346\262\252\346\274\202\343\200\202\345\234\250\345\210\235\345\210\260\344\270\212\346\265\267\346\227\266\357\274\214\346\202\250\344\273\216\346\235\221\351\225\277\345\244\204\345\200\237\344\272\2065000\345\205\203\347\232\204\345\220\257\345\212\250\350\265\204\351\207\221\357\274\214\345\210\251\346\201\257\344\274\232\344\273\245\346\257\217\346\227\24510%\347\232\204\346\236\201\351\253\230\345\210\251\347\216\207\344\270"
                        "\212\346\266\250\357\274\214\350\277\231\346\204\217\345\221\263\347\235\200\345\246\202\346\236\234\346\202\250\346\262\241\346\234\211\345\260\275\346\227\251\350\277\230\346\270\205\357\274\214\351\202\243\344\271\210\345\260\206\351\235\242\344\270\264\346\233\264\345\244\247\347\232\204\350\264\242\345\212\241\345\216\213\345\212\233\343\200\202\346\202\250\351\234\200\350\246\201\351\200\232\350\277\207\345\220\204\345\214\272\347\232\204\345\225\206\346\234\272\357\274\214\344\271\260\345\215\226\345\225\206\345\223\201\346\235\245\350\277\205\351\200\237\347\247\257\347\264\257\350\265\204\351\207\221\357\274\214\345\256\236\347\216\260\350\264\242\345\212\241\350\207\252\347\224\261\357\274\214\345\271\266\345\234\250\350\277\231\345\272\247\345\205\205\346\273\241\346\234\272\351\201\207\347\232\204\345\237\216\345\270\202\351\207\214\350\204\261\351\242\226\350\200\214\345\207\272\343\200\202</p><p>\345\234\250\346\270\270\346\210\217\345\221\250\346\234\237\345\206\205\357\274\214\346\202\250\346\234"
                        "\21140\346\254\241\350\241\214\345\212\250\346\234\272\344\274\232\357\274\210\346\257\217\346\254\241\350\241\214\345\212\250\350\247\206\344\270\272\344\270\200\345\244\251\357\274\211\357\274\214\346\257\217\346\254\241\345\211\215\345\276\200\346\226\260\347\232\204\345\270\202\345\234\272\345\214\272\345\237\237\351\203\275\345\260\206\346\266\210\350\200\227\344\270\200\345\244\251\346\227\266\351\227\264\343\200\202\346\234\200\345\210\235\357\274\214\346\202\250\347\232\204\345\261\205\346\211\200\344\273\205\350\203\275\345\256\271\347\272\263100\344\273\266\347\211\251\345\223\201\357\274\214\346\202\250\345\217\257\344\273\245\345\211\215\345\276\200\347\247\237\346\210\277\344\270\255\345\277\203\345\215\207\347\272\247\345\210\260\346\233\264\345\244\247\347\232\204\344\273\223\345\272\223\346\235\245\346\217\220\345\215\207\345\255\230\345\202\250\347\251\272\351\227\264\343\200\202\345\220\210\347\220\206\350\277\220\347\224\250\350\265\204\346\272\220\343\200\201\350\247\204\345\210\222\345\255"
                        "\230\350\264\247\346\230\257\345\205\263\351\224\256\346\211\200\345\234\250\343\200\202\346\255\244\345\244\226\357\274\214\346\202\250\350\277\230\344\274\232\351\201\207\345\210\260\344\270\200\344\272\233\345\275\261\345\223\215\345\201\245\345\272\267\345\222\214\350\264\242\345\212\241\347\232\204\351\232\217\346\234\272\344\272\213\344\273\266\357\274\214\351\234\200\350\260\250\346\205\216\345\272\224\345\257\271\357\274\214\344\273\245\345\205\215\345\273\266\350\257\257\345\217\221\345\261\225\346\210\226\345\242\236\345\212\240\350\264\237\346\213\205\343\200\202</p><p>\345\234\250\350\277\231\351\207\214\357\274\214\346\202\250\351\234\200\350\246\201\347\262\276\346\211\223\347\273\206\347\256\227\357\274\214\345\210\266\345\256\232\346\234\211\346\225\210\347\232\204\347\255\226\347\225\245\357\274\214\345\234\250\347\237\255\347\237\25540\345\244\251\345\206\205\346\234\200\345\244\247\345\214\226\350\264\242\345\257\214\347\247\257\347\264\257\345\271\266\345\201\277\350\277\230\351\253\230\351"
                        "\242\235\350\264\267\346\254\276\343\200\202\345\207\206\345\244\207\345\245\275\350\277\216\346\216\245\346\214\221\346\210\230\357\274\214\345\274\200\345\210\233\345\261\236\344\272\216\346\202\250\347\232\204\344\270\212\346\265\267\345\245\213\346\226\227\346\225\205\344\272\213\345\220\247\357\274\201</p></body></html>", nullptr));
        begin->setText(QCoreApplication::translate("loading", "\345\207\272\345\217\221", nullptr));
        label_2->setText(QCoreApplication::translate("loading", "<html><head/><body><p align=\"center\"><span style=\" font-weight:700;\">\344\270\212\346\265\267\346\265\256\347\224\237\350\256\260\347\232\204\346\225\205\344\272\213</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class loading: public Ui_loading {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOADING_H
