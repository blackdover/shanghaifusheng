#include "mainwindow.h"
#include "start.h"
#include <QApplication>
#include"uitest.h"
#include<iostream>
#include <fstream>
#include <QString>
void printFileContents(const QString& filename);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    start w;
    w.show();
    // uitest w2();
    // w2.show();
    return a.exec();
}
