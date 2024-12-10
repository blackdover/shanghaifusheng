/********************************************************************************
** Form generated from reading UI file 'backend.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BACKEND_H
#define UI_BACKEND_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_backend
{
public:
    QLabel *label;
    QWidget *loginwidget;
    QLabel *label_2;
    QLineEdit *coreedit;
    QPushButton *confirmbutton;
    QTreeWidget *itemWidget;
    QLineEdit *newitemname;
    QLineEdit *newitembase;
    QLineEdit *newitemflow;
    QGroupBox *groupBox;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *addconfirm;
    QGroupBox *groupBox_2;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QPushButton *editconfirm;
    QPushButton *deleteconfirm;
    QLineEdit *nameedit;
    QLineEdit *baseedit;
    QLineEdit *flowedit;

    void setupUi(QWidget *backend)
    {
        if (backend->objectName().isEmpty())
            backend->setObjectName("backend");
        backend->resize(742, 590);
        label = new QLabel(backend);
        label->setObjectName("label");
        label->setGeometry(QRect(315, 5, 216, 61));
        QFont font;
        font.setFamilies({QString::fromUtf8("Microsoft YaHei UI")});
        font.setPointSize(18);
        label->setFont(font);
        loginwidget = new QWidget(backend);
        loginwidget->setObjectName("loginwidget");
        loginwidget->setGeometry(QRect(0, 0, 746, 591));
        loginwidget->setStyleSheet(QString::fromUtf8("background-color: rgb(214, 214, 214);"));
        label_2 = new QLabel(loginwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(265, 245, 171, 31));
        QFont font1;
        font1.setPointSize(12);
        label_2->setFont(font1);
        coreedit = new QLineEdit(loginwidget);
        coreedit->setObjectName("coreedit");
        coreedit->setGeometry(QRect(395, 245, 113, 31));
        confirmbutton = new QPushButton(loginwidget);
        confirmbutton->setObjectName("confirmbutton");
        confirmbutton->setGeometry(QRect(355, 315, 81, 31));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\346\245\267\344\275\223")});
        font2.setPointSize(12);
        confirmbutton->setFont(font2);
        confirmbutton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        itemWidget = new QTreeWidget(backend);
        itemWidget->setObjectName("itemWidget");
        itemWidget->setGeometry(QRect(30, 70, 361, 466));
        itemWidget->setRootIsDecorated(false);
        itemWidget->header()->setVisible(true);
        itemWidget->header()->setCascadingSectionResizes(false);
        itemWidget->header()->setStretchLastSection(true);
        newitemname = new QLineEdit(backend);
        newitemname->setObjectName("newitemname");
        newitemname->setGeometry(QRect(530, 115, 171, 31));
        newitemname->setFont(font1);
        newitembase = new QLineEdit(backend);
        newitembase->setObjectName("newitembase");
        newitembase->setGeometry(QRect(530, 165, 171, 31));
        newitembase->setFont(font1);
        newitemflow = new QLineEdit(backend);
        newitemflow->setObjectName("newitemflow");
        newitemflow->setGeometry(QRect(530, 215, 171, 31));
        newitemflow->setFont(font1);
        groupBox = new QGroupBox(backend);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(400, 75, 341, 236));
        groupBox->setFont(font1);
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(5, 40, 141, 26));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(5, 90, 141, 26));
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(5, 140, 141, 26));
        addconfirm = new QPushButton(groupBox);
        addconfirm->setObjectName("addconfirm");
        addconfirm->setGeometry(QRect(180, 190, 121, 31));
        groupBox_2 = new QGroupBox(backend);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(395, 315, 341, 236));
        groupBox_2->setFont(font1);
        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(5, 40, 181, 26));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(5, 90, 176, 26));
        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(5, 140, 181, 26));
        editconfirm = new QPushButton(groupBox_2);
        editconfirm->setObjectName("editconfirm");
        editconfirm->setGeometry(QRect(185, 185, 121, 31));
        deleteconfirm = new QPushButton(groupBox_2);
        deleteconfirm->setObjectName("deleteconfirm");
        deleteconfirm->setGeometry(QRect(35, 185, 121, 31));
        nameedit = new QLineEdit(groupBox_2);
        nameedit->setObjectName("nameedit");
        nameedit->setGeometry(QRect(165, 40, 171, 31));
        baseedit = new QLineEdit(groupBox_2);
        baseedit->setObjectName("baseedit");
        baseedit->setGeometry(QRect(165, 90, 171, 31));
        flowedit = new QLineEdit(groupBox_2);
        flowedit->setObjectName("flowedit");
        flowedit->setGeometry(QRect(165, 140, 171, 31));
        groupBox->raise();
        label->raise();
        itemWidget->raise();
        newitemname->raise();
        newitembase->raise();
        newitemflow->raise();
        groupBox_2->raise();
        loginwidget->raise();

        retranslateUi(backend);

        QMetaObject::connectSlotsByName(backend);
    } // setupUi

    void retranslateUi(QWidget *backend)
    {
        backend->setWindowTitle(QCoreApplication::translate("backend", "Form", nullptr));
        label->setText(QCoreApplication::translate("backend", "\346\225\260\346\215\256\347\256\241\347\220\206\351\235\242\346\235\277", nullptr));
        label_2->setText(QCoreApplication::translate("backend", "\350\257\267\350\276\223\345\205\245\347\231\273\351\231\206\345\257\206\347\240\201\357\274\232", nullptr));
        coreedit->setText(QString());
        confirmbutton->setText(QCoreApplication::translate("backend", "\347\241\256\345\256\232", nullptr));
        QTreeWidgetItem *___qtreewidgetitem = itemWidget->headerItem();
        ___qtreewidgetitem->setText(2, QCoreApplication::translate("backend", "\346\265\256\345\212\250\344\273\267\346\240\274", nullptr));
        ___qtreewidgetitem->setText(1, QCoreApplication::translate("backend", "\345\237\272\345\207\206\344\273\267\346\240\274", nullptr));
        ___qtreewidgetitem->setText(0, QCoreApplication::translate("backend", "\345\225\206\345\223\201\345\220\215\347\247\260", nullptr));
        groupBox->setTitle(QCoreApplication::translate("backend", "\346\226\260\345\242\236\345\225\206\345\223\201", nullptr));
        label_3->setText(QCoreApplication::translate("backend", "\350\257\267\350\276\223\345\205\245\345\225\206\345\223\201\345\220\215\347\247\260\357\274\232", nullptr));
        label_4->setText(QCoreApplication::translate("backend", "\350\257\267\350\276\223\345\205\245\345\237\272\345\207\206\344\273\267\346\240\274\357\274\232", nullptr));
        label_5->setText(QCoreApplication::translate("backend", "\350\257\267\350\276\223\345\205\245\346\265\256\345\212\250\344\273\267\346\240\274\357\274\232", nullptr));
        addconfirm->setText(QCoreApplication::translate("backend", "\347\241\256\350\256\244", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("backend", "\344\277\256\346\224\271\345\225\206\345\223\201", nullptr));
        label_6->setText(QCoreApplication::translate("backend", "\345\275\223\345\211\215\351\200\211\344\270\255\347\232\204\345\225\206\345\223\201\345\220\215\347\247\260\357\274\232", nullptr));
        label_7->setText(QCoreApplication::translate("backend", "\345\275\223\345\211\215\351\200\211\344\270\255\347\232\204\345\237\272\345\207\206\344\273\267\346\240\274\357\274\232", nullptr));
        label_8->setText(QCoreApplication::translate("backend", "\345\275\223\345\211\215\351\200\211\344\270\255\347\232\204\346\265\256\345\212\250\344\273\267\346\240\274\357\274\232", nullptr));
        editconfirm->setText(QCoreApplication::translate("backend", "\344\277\256\346\224\271", nullptr));
        deleteconfirm->setText(QCoreApplication::translate("backend", "\345\210\240\351\231\244\351\200\211\344\270\255", nullptr));
    } // retranslateUi

};

namespace Ui {
    class backend: public Ui_backend {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BACKEND_H
