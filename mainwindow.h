#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<qtreewidget.h>
#include<qpushbutton.h>
#include"player.h"
#include "bank.h"
#include "hospital.h"
#include "post.h"
#include "rent.h"
#include"itemmanager.h"
#include<qmessagebox.h>
#include"help.h"
#include"sudomodel.h"
#include"backend.h"
#include "eventwindow.h"
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
    Player* getPlayer();

private slots:
    void updatePlayerUI();
    void on_playermoney_overflow();

    void moreneedmoney();
    void nextday();
    void randomevent();
    void on_buy_clicked();
    void on_sell_clicked();

    void addItemToBag(QString itemName,long long nowPrice,int quantity);
    void refreshItemsInMarket(int count);
    void refreshItemsInMarket(int count, const QString& excludeName);
    void on_lujiazuiplace_clicked();
    void updateBagSpaceDisplay();
    void updateDate();

    void on_bankButton_clicked();
    void on_hospitalButton_clicked();
    void on_postButton_clicked();
    
    void on_rentButton_clicked();
    void on_douyinButton_clicked();
    void douyinButtonClick();
    void showGameOverMessage();

    void on_hongkouplace_clicked();
    void on_baoshanplace_clicked();
    void on_qingpuplace_clicked();
    void on_pudongplace_clicked();
    void on_linggangplace_clicked();
    void on_jinshanplace_clicked();
    void on_songjiangplace_clicked();
    void on_jiadingplace_clicked();

    void on_newgame_triggered();

    // void on_addmoney _clicked();

    void on_seehelp_triggered();

    void on_sudomodel_triggered();

private:
    Ui::MainWindow *ui;
    QTreeWidget *itemWidget;
    QTreeWidget *bagWidget;
    Player *player=new Player();
    ItemManager *itemManager=new ItemManager();
    Bank *bank;
    Hospital *hospital;
    Post *post;
    Rent *rent;
    int clickCount; //抖音按钮计数
    int bookbuy;
    QMessageBox stdmessagebox;
    help *doc=nullptr;
    sudomodel *sudo=nullptr;
};
#endif // MAINWINDOW_H
