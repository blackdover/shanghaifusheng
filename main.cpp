#include "mainwindow.h"
#include "start.h"
#include <QApplication>
#include<iostream>
#include <fstream>
#include <QString>
void printFileContents(const QString& filename);

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    start w;
    w.show();
    return a.exec();
}
