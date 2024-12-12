#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include"itemmanager.h"
#include <QTreeWidgetItem>
#include <QRandomGenerator>
#include <QPushButton>
#include <QDebug>
#include<qinputdialog.h>
#include"player.h"
#include "bank.h"
#include "hospital.h"
#include "rent.h"
#include <algorithm>
#include <random>
#include "ranking.h"
#include"settlement.h"
#include"stdmessagebox.h"
#include "eventwindow.h"
#include<qapplication.h>
#include"start.h"

class event;

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , daytime(1)
    , ui(new Ui::MainWindow)
    ,bank(nullptr)
    ,rent(nullptr)
    ,clickCount(0)
    ,bookbuy(0)
{
    ui->setupUi(this);
    setWindowTitle("上海浮生记");
    setWindowIcon(QIcon(":/res/icon.png"));
    ui->playermoney->setDigitCount(13);
    ui->playerbankmoney->setDigitCount(13);
    ui->playergiveupmoney->setDigitCount(13);

    ui->playermoney->setSegmentStyle(QLCDNumber::Flat);
    ui->playerbankmoney->setSegmentStyle(QLCDNumber::Flat);
    ui->playergiveupmoney->setSegmentStyle(QLCDNumber::Flat);
    ui->playerhealth->setSegmentStyle(QLCDNumber::Flat);
    ui->playerfame->setSegmentStyle(QLCDNumber::Flat);

    itemWidget = ui->itemWidget;
    bagWidget = ui->bagWidget;
    //连接 player对象,连接到其信号函数，
    connect(player, &Player::moneyChanged, this, &MainWindow::updatePlayerUI);
    connect(player, &Player::bankMoneyChanged, this, &MainWindow::updatePlayerUI);
    connect(player, &Player::giveUpMoneyChanged, this, &MainWindow::updatePlayerUI);
    connect(player, &Player::healthChanged, this, &MainWindow::updatePlayerUI);
    connect(player, &Player::fameChanged, this, &MainWindow::updatePlayerUI);
    connect(ui->douyinButton, &QPushButton::clicked, this, &MainWindow::douyinButtonClick);


    if (!itemManager->loadItemsFromFile("")) {
        qDebug() << "Failed to load items from file. Using default items.";
    }

    updatePlayerUI();

//背包列宽
    bagWidget->header()->setSectionResizeMode(0, QHeaderView::Fixed);
    bagWidget->setColumnWidth(0, 105);
    bagWidget->header()->setSectionResizeMode(1, QHeaderView::Fixed);
    bagWidget->setColumnWidth(1, 60);
    bagWidget->header()->setSectionResizeMode(2, QHeaderView::Stretch);

//商品栏列宽
    itemWidget->header()->setSectionResizeMode(QHeaderView::Stretch); // 所有列拉伸
    itemWidget->header()->resizeSection(0, 5); // 第1列权重为2
    itemWidget->header()->resizeSection(1, 5); // 第2列权重为3

    updateBagSpaceDisplay();
    updateDate();
    refreshItemsInMarket(6);
}

MainWindow::~MainWindow()
{
    delete ui;
    delete player;
}

void MainWindow::updatePlayerUI()
{
    ui->playermoney->display(QString::number(player->getMoney()));
    ui->playerbankmoney->display(QString::number(player->getBankMoney()));
    ui->playergiveupmoney->display(QString::number(player->getGiveUpMoney()));
    ui->playerhealth->display(QString::number(player->getHealth()));
    ui->playerfame->display(QString::number(player->getFame()));
}

void MainWindow::on_playermoney_overflow()
{
    ui->playermoney->display(00000000000);
}
void MainWindow::refreshItemsInMarket(int count)
{
    ui->itemWidget->clear();//清除原有的商品
    const auto& allItems = itemManager->getAllItems();//从itemManager中拿取全部商品
    int displayCount = std::min(count, static_cast<int>(allItems.size()));//计算抽取的数量
    QVector<int> indices;//索引数组
    for (long long unsigned int i = 0; i < allItems.size(); ++i) {
        indices.append(i);//将索引加入索引数组
    }
    std::random_device rd;//定义随机数
    std::mt19937 g(rd());//设定随机种子
    std::shuffle(indices.begin(), indices.end(), g);//抽取索引

    for (int i = 0; i < displayCount; ++i) {
        const auto& item = allItems[indices[i]];
        QString itemName = QString::fromStdString(item.getName());
        long long nowPrice = item.generatePrice();
        //new一个QTreeWidgetItem，然后用对应的商品的内容设置其内容
        QTreeWidgetItem* treeItem = new QTreeWidgetItem();
        treeItem->setText(0, itemName);
        treeItem->setText(1, QString::number(nowPrice));
        //将抽到的索引对应的物品加入显示栏
        ui->itemWidget->addTopLevelItem(treeItem);
    }
}
//随机事件发生时应该调用
void MainWindow::refreshItemsInMarket(int count, const QString& excludeName)
{
    ui->itemWidget->clear();
    const auto& allItems = itemManager->getAllItems();
    QVector<Item> filteredItems;
    for (const auto& item : allItems) {
        if (QString::fromStdString(item.getName()) != excludeName) {
            filteredItems.append(item);
        }
    }
    int displayCount = std::min(count, static_cast<int>(filteredItems.size()));
    QVector<int> indices;
    for (int i = 0; i < filteredItems.size(); ++i) {
        indices.append(i);
    }
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(indices.begin(), indices.end(), g);
    for (int i = 0; i < displayCount; ++i) {
        const auto& item = filteredItems[indices[i]];
        QString itemName = QString::fromStdString(item.getName());
        long long nowPrice = item.generatePrice();
        QTreeWidgetItem* treeItem = new QTreeWidgetItem();
        treeItem->setText(0, itemName);
        treeItem->setText(1, QString::number(nowPrice));
        ui->itemWidget->addTopLevelItem(treeItem);
    }
}

// 更新背包剩余空间
void MainWindow::updateBagSpaceDisplay()
{
    // 计算比例
    int bagSize = player->getBagSize();//背包的剩余空间
    int maxBagSize = player->getMaxBagSize();//背包的最大空间
    // 更新 bagWidget的第三列标题
    ui->bagWidget->headerItem()->setText(2, QString("数量:%1/%2").arg(maxBagSize-bagSize).arg(maxBagSize));
}

void MainWindow::addItemToBag(QString itemName,long long nowPrice,int quantity)
{
    QTreeWidgetItem* bagItem = new QTreeWidgetItem();//定义一个bagItem型的指针
    bagItem->setText(0, itemName);//背包第一列
    bagItem->setText(1, QString::number(nowPrice));//背包第二列
    bagItem->setText(2, QString::number(quantity));//背包第三列
    ui->bagWidget->addTopLevelItem(bagItem);//item加入背包widget
}
void MainWindow::on_buy_clicked()
{
    QTreeWidgetItem *nowSelect=ui->itemWidget->currentItem();
    if(!nowSelect){
        QMessageBox::warning(this,"警告","请选择一个物品");
        return;
    }
    QString nowName=nowSelect->text(0);
    long long nowPrice=nowSelect->text(1).toLongLong();
    // 检查总金额是否足够购买 1 个商品
    if (player->getMoney() + player->getBankMoney() < nowPrice) {
        QMessageBox::warning(this, "错误", "没有足够的钱！");
        return;
    }
    // 如果现金不够但银行里的钱足够购买
    if (player->getBankMoney() >= nowPrice&&player->getMoney()<nowPrice) {
        QMessageBox::warning(this, "提示", "银行里的钱足够购买，请去取钱！");
        return;
    }
    if(player->getBagSize()==0)//若背包剩余空间为0
    {
        QMessageBox::warning(this, "提示", "你没有足够的背包空间");
        return;
    }
    // 弹出输入框，默认值为最多可购买数量
    int maxQuantity = std::min(player->getMoney() / nowPrice,player->getBagSize()); // 玩家最多可买的数量
    bool ok;//用于判断买入是否成功
    int quantity = QInputDialog::getInt(this, "购买商品",
                                        QString("请输入购买数量（最多 %1 个）：").arg(maxQuantity),
                                        maxQuantity, 1, maxQuantity, 1, &ok);//默认数量、最低数量、最高数量
    if (!ok || quantity <= 0) {
        return;
    }
    addItemToBag(nowName, nowPrice, quantity);//将买入的商品添加入背包
    player->reduceMoney( nowPrice * quantity);// 扣除玩家的钱
    player->setBagSize(player->getBagSize()-quantity);//减少背包容量
    updateBagSpaceDisplay();//更新背包大小
}

void MainWindow::on_sell_clicked()
{
    // 获取当前选中的物品
    QTreeWidgetItem *selectedItem = ui->bagWidget->currentItem();
    if (!selectedItem) {
        QMessageBox::warning(this, "警告", "请选择一个物品！");
        return;
    }
    QString itemName = selectedItem->text(0);
    int ownedQuantity = selectedItem->text(2).toInt();
    // 弹出输入框，默认值为拥有的最大数量
    bool ok;
    int sellQuantity = QInputDialog::getInt(this, "卖出商品",
                                            QString("请输入卖出数量（最多 %1 个）：").arg(ownedQuantity),
                                            ownedQuantity, 1, ownedQuantity, 1, &ok);
    if (!ok) {
        return;
    }
    // 检查卖出数量是否合理
    if (sellQuantity <= 0) {
        QMessageBox::warning(this, "错误", "卖出数量不能为负数或零！");
        return;
    }
    if (sellQuantity > ownedQuantity) {
        QMessageBox::warning(this, "错误", "卖出的数量不能超过拥有的数量！");
        return;
    }
    // 检查 itemWidget 是否有相应的收购物品
    QTreeWidgetItem *buyerItem = nullptr;
    for (int i = 0; i < ui->itemWidget->topLevelItemCount(); ++i) {
        QTreeWidgetItem *item = ui->itemWidget->topLevelItem(i);
        if (item->text(0) == itemName) {
            buyerItem = item;
            break;
        }
    }
    if (!buyerItem) {
        QMessageBox::information(this, "提示", "暂时没有人收购呢！");
        return;
    }
    // 获取当前的价格
    long long sellPrice = buyerItem->text(1).toLongLong();
    // 增加玩家的钱
    player->addMoney(sellQuantity * sellPrice);
    player->setBagSize(player->getBagSize()+sellQuantity);
    // 更新拥有数量
    ownedQuantity -= sellQuantity;
    if (ownedQuantity > 0) {
        // 如果还有剩余，更新 bagWidget 中的数量
        selectedItem->setText(2, QString::number(ownedQuantity));
    } else {
        // 如果卖光了，删除该行
        delete selectedItem;
    }
    updateBagSpaceDisplay();
}
void MainWindow::moreneedmoney()
{
    player->addGiveUpMoney(player->getGiveUpMoney()*0.1);
}
void MainWindow::updateDate()
{
    if(daytime>40)
    {
        // daytime=41;
        ui->gameover->raise();
        if(player->getGiveUpMoney()>0)
        {
            QMessageBox::warning(this,"哼！想跑？",QString("你因没有还完钱被暴打一顿，名声也坏了，健康声望减少50%，"));
            player->reduceHealth(player->getHealth()/2);
            player->reduceFame(player->getFame()/2);
        }
        showGameOverMessage();
    }
    else
        ui->daylabel->setText(QString("当前是第%1天").arg(daytime));
}
void MainWindow::showGameOverMessage()
{
    settlement *se=new settlement(this);
    se->show();
}

//发生随机事件
void MainWindow::randomevent()
{
    int probability = QRandomGenerator::global()->bounded(1,100); //生成一个0到99的随机数
    if (probability <= 30)//30%概率触发随机事件
    {
        eventwindow *event = new eventwindow();  // 创建eventwindow实例
        RandomEvent *rand = event->triggerRandomEvent();
        refreshItemsInMarket(6,rand->getItemName());
        QString itemName = rand->getItemName();
        long long nowPrice = rand->getRandomPrice();
        QTreeWidgetItem* treeItem = new QTreeWidgetItem();
        treeItem->setText(0, itemName);
        treeItem->setText(1, QString::number(nowPrice));
        ui->itemWidget->addTopLevelItem(treeItem);
        if(event->exec() == QDialog::Accepted)
        {
            event->show(); // 显示窗口
        }
    }
}
void MainWindow::nextday()
{
    refreshItemsInMarket(6);
    moreneedmoney();
    daytime++;
    player->addBankMoney(player->getBankMoney()*0.05);
    if(daytime==40)
    {
        QMessageBox::information(this,"提示",QString("你明天就要回家啦，记得把背包里的东西清理掉，不然只能分给乡亲们了"));
        refreshItemsInMarket(10);
    }
    updateDate();
    randomevent();
}
void MainWindow::on_lujiazuiplace_clicked()
{
    nextday();
}

void MainWindow::on_bankButton_clicked()
{
    bank = new Bank(player);
    long long myCash = player->getMoney();
    long long mySavings = player->getBankMoney();
    bank->setCash(myCash,mySavings);
    connect(bank,&Bank::bankMoneyChanged,this,&MainWindow::updatePlayerUI);
    bank->exec();
}


void MainWindow::on_hospitalButton_clicked()
{
    hospital = new Hospital(player);
    long long health = player->getHealth();
    hospital->setHealth(health);
    connect(hospital,&Hospital::healthChanged,this,&MainWindow::updatePlayerUI);
    hospital->exec();
}


void MainWindow::on_postButton_clicked()
{
    post = new Post(player);
    connect(post,&Post::giveUpMoneyChanged,this,&MainWindow::updatePlayerUI);
    post->exec();
}

void MainWindow::on_rentButton_clicked()
{
    if(player->getMoney() >= 30000)
    {
        rent = new Rent(player);
        connect(rent, &Rent::bagMaxSizeChanged, this, &MainWindow::updateBagSpaceDisplay);
        rent->exec();
    }
    else
    {
        QMessageBox::warning(this,"中介说","连3万块都没有还想租房子？");
    }
}


void MainWindow::on_douyinButton_clicked()
{
    if (clickCount < 5)
    {
        int randomNumber = QRandomGenerator::global()->bounded(1, 5);
        switch(randomNumber)
        {
        case 1:
            QMessageBox::information(this,"OPPS!","你因沉迷抖音荒废了一天！？");
            daytime++;
            updateDate();
            break;
        case 2:
            QMessageBox::information(this,"村长说","“侬小子不还钱搁这刷抖音？”（找村口的二虎揍了你一顿）");
            player->reduceHealth(5);
            updatePlayerUI();
            break;
        case 3:
            if (player->getMoney() >= 50)
            {
                if (!bookbuy)
                {
                    QMessageBox::information(this, "订单提醒", "你在抖音商城下单了面向对象课本");
                    bookbuy = 1;
                    player->reduceMoney(50);
                    addItemToBag("面向对象课本", 50, 1);
                    player->setBagSize(player->getBagSize() - 1);
                    updatePlayerUI();
                    updateBagSpaceDisplay();
                }
                else
                {
                    QMessageBox::information(this, "完啦", "买来的面向对象课本一次都没看过，你感到前途灰暗，睡了一天");
                    daytime++;
                    updateDate();
                }
            }
            else
            {
                player->addGiveUpMoney(50);
                addItemToBag("面向对象课本", 50, 1);
                player->setBagSize(player->getBagSize() - 1);
                QMessageBox::information(this, "花呗提示", "你使用花呗购买了面向对象课本，欠款增加了50");
                updatePlayerUI();
                updateBagSpaceDisplay();
            }
            break;
        case 4:
            QMessageBox::information(this,"还有这好事？!","你在抖音极速版刷视频成功提现10元");
            player->addMoney(10);
            updatePlayerUI();
            break;
        }
    }
}

void MainWindow::douyinButtonClick()
{
    clickCount++;
    if (clickCount >= 5)
    {
        QMessageBox::information(this,"村长说","侬去搞钱啊别刷抖音了！");
    }
}
Player* MainWindow::getPlayer()
{
    return player;
}

void MainWindow::on_hongkouplace_clicked()
{
    nextday();
}

void MainWindow::on_baoshanplace_clicked()
{
    nextday();
}

void MainWindow::on_qingpuplace_clicked()
{
    nextday();
}


void MainWindow::on_pudongplace_clicked()
{
    nextday();
}


void MainWindow::on_linggangplace_clicked()
{
    nextday();
}


void MainWindow::on_jinshanplace_clicked()
{
    nextday();
}


void MainWindow::on_songjiangplace_clicked()
{
    nextday();
}

void MainWindow::on_jiadingplace_clicked()
{
    nextday();
}


void MainWindow::on_newgame_triggered()
{
    MainWindow *main=new MainWindow();
    main->show();
    this->close();
}

// void MainWindow::on_addmoney_clicked()
// {
//         player->addMoney(1000000);
// }

void MainWindow::on_seehelp_triggered()
{
    doc = new help();
    doc->show();
}


void MainWindow::on_sudomodel_triggered()
{
    sudo = new sudomodel();
    sudo->setPlayer(player);
    sudo->show();
}


void MainWindow::on_backtomain_triggered()
{
    st=new start();
    st->show();
    this->close();
}

