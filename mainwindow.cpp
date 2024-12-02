#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include"itemmanager.h"
#include <QTreeWidgetItem>
#include <QDebug>
#include<qinputdialog.h>
#include"player.h"
#include "bank.h"
#include "hospital.h"
#include <algorithm>
#include <random>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , daytime(1)
    ,bank(nullptr)

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

    connect(player, &Player::moneyChanged, this, &MainWindow::updatePlayerUI);
    connect(player, &Player::bankMoneyChanged, this, &MainWindow::updatePlayerUI);
    connect(player, &Player::giveUpMoneyChanged, this, &MainWindow::updatePlayerUI);
    connect(player, &Player::healthChanged, this, &MainWindow::updatePlayerUI);
    connect(player, &Player::fameChanged, this, &MainWindow::updatePlayerUI);

    if (!itemManager->loadItemsFromFile(":/res/items.txt")) {
        qDebug() << "Failed to load items from file. Using default items.";
    }

    updatePlayerUI();

//背包列宽设置
    bagWidget->header()->setSectionResizeMode(QHeaderView::Stretch); // 所有列拉伸
    bagWidget->header()->resizeSection(0, 3); // 第1列权重为2
    bagWidget->header()->resizeSection(1, 3); // 第2列权重为3
    bagWidget->header()->resizeSection(2, 3);

//商品栏列宽设置
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
    // 清空当前的物品列表
    ui->itemWidget->clear();

    // 获取所有物品
    ItemManager itemManager;

    if (!itemManager.loadItemsFromFile(":/res/items.txt")) {
        qDebug() << "Failed to load items from file. Using default items.";
    }

    // 获取所有物品列表
    const auto& allItems = itemManager.getAllItems();

    // 计算实际显示数量（确保不超过物品的总数量）
    int displayCount = std::min(count, static_cast<int>(allItems.size()));

    // 创建一个索引列表，包含所有物品的索引
    QVector<int> indices;
    for (int i = 0; i < allItems.size(); ++i) {
        indices.append(i);
    }

    // 使用 std::random_device 和 std::mt19937 来打乱索引
    std::random_device rd; // 获取一个随机数种子
    std::mt19937 g(rd());  // 使用这个种子初始化随机数生成器

    // 随机打乱索引列表
    std::shuffle(indices.begin(), indices.end(), g);

    // 随机抽取并添加到 QTreeWidget
    for (int i = 0; i < displayCount; ++i) {
        const auto& item = allItems[indices[i]];  // 随机选择一个商品

        QString itemName = QString::fromStdString(item.getName());
        long long nowPrice = item.generatePrice();

        // 创建 QTreeWidgetItem
        QTreeWidgetItem* treeItem = new QTreeWidgetItem();
        treeItem->setText(0, itemName);                  // 第一列：商品名
        treeItem->setText(1, QString::number(nowPrice)); // 第二列：价格

        // 添加到 QTreeWidget
        ui->itemWidget->addTopLevelItem(treeItem);
    }
}

// 更新背包剩余空间显示的函数
void MainWindow::updateBagSpaceDisplay()
{
    // 计算背包剩余空间比例
    int bagSize = player->getBagSize();
    int maxBagSize = player->getMaxBagSize();  // 假设你有一个函数返回最大背包容量

    // 更新 bagWidget 的第三列标题
    ui->bagWidget->headerItem()->setText(2, QString("数量:%1/%2").arg(maxBagSize-bagSize).arg(maxBagSize));
}

void MainWindow::addItemToBag(QString itemName,long long nowPrice,int quantity)
{
    QTreeWidgetItem* bagItem = new QTreeWidgetItem();

    bagItem->setText(0, itemName);

    bagItem->setText(1, QString::number(nowPrice));

    bagItem->setText(2, QString::number(quantity));

    ui->bagWidget->addTopLevelItem(bagItem);
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

    // 如果银行里的钱足够购买
    if (player->getBankMoney() >= nowPrice) {
        QMessageBox::information(this, "提示", "银行里的钱足够购买，请去取钱！");
        return;
    }

    if(player->getBagSize()==0)
    {
        QMessageBox::information(this, "提示", "你没有足够的背包空间");
        return;
    }
    // 弹出输入框，默认值为最多可购买数量
    int maxQuantity = std::min(player->getMoney() / nowPrice,player->getBagSize()); // 玩家最多可买的数量
    bool ok;
    int quantity = QInputDialog::getInt(this, "购买商品",
                                        QString("请输入购买数量（最多 %1 个）：").arg(maxQuantity),
                                        maxQuantity, 1, maxQuantity, 1, &ok);

    if (!ok || quantity <= 0) {
        return; // 用户取消或输入无效
    }
    player->setBagSize(player->getBagSize()-quantity);
    // 更新到 bagwidget
    addItemToBag(nowName, nowPrice, quantity);

    // 扣除玩家的钱
    player->reduceMoney( nowPrice * quantity);
    updateBagSpaceDisplay();
    ui->playermoney->display(QString::number(player->getMoney()));
    ui->playerbankmoney->display(QString::number(player->getBankMoney()));
    ui->playergiveupmoney->display(QString::number(player->getGiveUpMoney()));
    ui->playerhealth->display(QString::number(player->getHealth()));
    ui->playerfame->display(QString::number(player->getFame()));


    QMessageBox::information(this, "成功", QString("成功购买 %1 个 %2！").arg(quantity).arg(nowName));
}


void MainWindow::on_sell_clicked()
{
    // 获取当前选中的物品（bagWidget 中的物品）
    QTreeWidgetItem *selectedItem = ui->bagWidget->currentItem();
    if (!selectedItem) {
        QMessageBox::warning(this, "警告", "请选择一个物品！");
        return;
    }

    QString itemName = selectedItem->text(0);      // 商品名
    // long long ownedPrice = selectedItem->text(1).toLongLong(); // 持有时价格
    int ownedQuantity = selectedItem->text(2).toInt();         // 持有数量

    // 弹出输入框，默认值为拥有的最大数量
    bool ok;
    int sellQuantity = QInputDialog::getInt(this, "卖出商品",
                                            QString("请输入卖出数量（最多 %1 个）：").arg(ownedQuantity),
                                            ownedQuantity, 1, ownedQuantity, 1, &ok);

    if (!ok) {
        return; // 用户取消操作
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
        QMessageBox::warning(this, "提示", "暂时没有人收购呢！");
        return;
    }

    // 获取当前收购的价格
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

    // 更新玩家的 UI
    ui->playermoney->display(QString::number(player->getMoney()));
    updateBagSpaceDisplay();
    QMessageBox::information(this, "成功",
                             QString("成功卖出 %1 个 %2，获得 %3 金币！").arg(sellQuantity).arg(itemName).arg(sellQuantity * sellPrice));
}
void MainWindow::moreneedmoney()
{
    player->addGiveUpMoney(player->getGiveUpMoney()*0.1);
}
void MainWindow::updateDate()
{
    if(daytime>40)
    {
        //游戏结束，结算画面
    }
    else
        ui->daylabel->setText(QString("当前是第%1天").arg(daytime));
}
void MainWindow::nextday()
{
    refreshItemsInMarket(6);
    moreneedmoney();
    daytime++;
    updateDate();
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

