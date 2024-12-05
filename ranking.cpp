#include "ranking.h"
#include "ui_ranking.h"
#include"start.h"
#include <QList>
#include <QTreeWidgetItem>
#include <QTextStream>
#include <QStringList>
#include <QDebug>
#include "qmessagebox.h"
#include"rankitem.h"
#include"rankitemmanager.h"
#include<qinputdialog.h>
Ranking::Ranking(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Ranking)
{
    ui->setupUi(this);
    //ui->ranktableWidget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    //ui->tableWidget->verticalHeader()->setSectionResizeMode(QHeaderView::Stretch);
    ui->ranktreeWidget->setStyleSheet("QTreeWidget::item { height: 40px; }");

    this->setWindowTitle("富豪玩家排行榜");
      
    rankItemManager rankItemManager;
    if (!rankItemManager.loadScoreFromFile(":/res/score.txt")) {
        qDebug() << "Failed to load scores from file. Using default items.";
    }

    ui->ranktreeWidget->clear();

    std::vector<rankItem> rankItems = rankItemManager.getAllElements();

    // 根据金钱从大到小排序
    std::sort(rankItems.begin(), rankItems.end(), [](const rankItem& a, const rankItem& b) {
        return a.getMoney() > b.getMoney();
    });

    int rank=1;
    for (const auto& rankitem : rankItems) {
        QString rankPerson =  QString::fromStdString(rankitem.getPlayername());
        long long ownMoney = rankitem.getMoney();
        long long healthState=rankitem.getHealth() ;
        long long fameState=rankitem.getFame();
        QString title =  QString::fromStdString(rankitem.getPlayertitle());

        // 创建 QTreeWidgetItem
        QTreeWidgetItem* treeItem = new QTreeWidgetItem();
        treeItem->setText(0,QString::number(rank));
        treeItem->setText(1, rankPerson);                  // 第二列：人名
        treeItem->setText(2, QString::number(ownMoney));// 第三列：金钱
        treeItem->setText(3, QString::number(healthState));//健康
        treeItem->setText(4, QString::number(fameState));//名声
        treeItem->setText(5, title);

        // 添加到 QTreeWidget
        ui->ranktreeWidget->addTopLevelItem(treeItem);
        rank++;
    }

    setWindowIcon(QIcon(":/res/icon.png"));

}

Ranking::~Ranking()
{
    delete ui;
}







void Ranking::on_pushButton_clicked()
{
    this->close();
}

