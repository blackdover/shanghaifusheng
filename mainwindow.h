#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<qtreewidget.h>
#include<qpushbutton.h>
#include"player.h"
#include "bank.h"
#include "hospital.h"
#include"itemmanager.h"
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    int daytime;

private slots:
    void updatePlayerUI();
    void on_playermoney_overflow();

    void moreneedmoney();
    void nextday();
    void on_buy_clicked();
    void on_sell_clicked();

    void addItemToBag(QString itemName,long long nowPrice,int quantity);
    void refreshItemsInMarket(int count);
    void on_lujiazuiplace_clicked();
    void updateBagSpaceDisplay();
    void updateDate();

    void on_bankButton_clicked();
    void on_hospitalButton_clicked();

private:
    Ui::MainWindow *ui;
    QTreeWidget *itemWidget;
    QTreeWidget *bagWidget;
    Player *player=new Player();
    ItemManager *itemManager=new ItemManager();
    Bank *bank;
    Hospital *hospital;

};
#endif // MAINWINDOW_H
