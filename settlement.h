#ifndef SETTLEMENT_H
#define SETTLEMENT_H

#include <QWidget>
#include<qlabel.h>
#include"mainwindow.h"
#include<qstring.h>
#include <QInputDialog>
#include"ranking.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include<qdir.h>
#include <QCoreApplication>
namespace Ui {
class settlement;
}

class settlement : public QWidget
{
    Q_OBJECT

public:
    explicit settlement(MainWindow *main,QWidget *parent = nullptr);
    ~settlement();

private slots:
    void on_torank_clicked();
    void on_newgame_clicked();
    void on_leave_clicked();
    void setTitle(Player *player);
    void inputName();
    void scoreAdd();
private:
    Ui::settlement *ui;
    MainWindow *mainwindow;
    long long money;
    long long health;
    long long fame;
    QString title;
    QString name;
};

#endif // SETTLEMENT_H
