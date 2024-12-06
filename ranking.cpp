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
#include<qfile.h>
#include<qdir.h>
Ranking::Ranking(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Ranking)
{
    ui->setupUi(this);

    // 先调整所有列的宽度以适应内容
    for (int i = 0; i < ui->ranktreeWidget->columnCount(); ++i) {
        ui->ranktreeWidget->resizeColumnToContents(i);
    }

    // 然后指定某一列（例如最后一列）进行拉伸
    ui->ranktreeWidget->header()->setSectionResizeMode(1, QHeaderView::Stretch);
    ui->ranktreeWidget->header()->setSectionResizeMode(2, QHeaderView::Stretch);
    // ui->ranktreeWidget->header()->setSectionResizeMode(3, QHeaderView::Stretch);
    // ui->ranktreeWidget->header()->setSectionResizeMode(4, QHeaderView::Stretch);

    ui->ranktreeWidget->setStyleSheet("QTreeWidget::item { height: 30px; }");

    this->setWindowTitle("排行榜");
      
    rankItemManager rankItemManager;

    QString filePath = QCoreApplication::applicationDirPath() + "/res/score.txt";
    QFile file(filePath);

    // 检查文件是否存在
    if (!file.exists()) {
        // 文件不存在，创建目录
        QDir dir;
        if (!dir.exists(QCoreApplication::applicationDirPath() + "/res")) {
            dir.mkpath(QCoreApplication::applicationDirPath() + "/res");
        }

        // 从资源文件读取默认数据
        QFile resourceFile(":/res/score.txt");
        if (resourceFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&resourceFile);
            QString defaultData = in.readAll();  // 读取资源文件中的数据

            // 创建文件并写入默认数据
            if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
                QTextStream out(&file);
                out << defaultData;  // 将数据写入新文件
                file.close();  // 关闭文件

                qDebug() << "分数文件已创建，并初始化为默认数据。";
            } else {
                qDebug() << "创建分数文件失败。";
            }
        } else {
            qDebug() << "无法打开资源文件以获取默认数据。";
        }

        // 重新加载文件内容
        if (!rankItemManager.loadScoreFromFile(filePath)) {
            qDebug() << "从文件加载分数失败，使用默认项目。";
        }
    } else {
        // 文件存在，加载文件内容
        if (!rankItemManager.loadScoreFromFile(filePath)) {
            qDebug() << "从文件加载分数失败，使用默认项目。";
        }
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

        // 设置字体大小
        QFont font = treeItem->font(0);  // 获取第一列（可以选择其他列）的字体
        font.setPointSize(10);            // 设置字体大小为 12
        treeItem->setFont(0, font);       // 设置第一列的字体

        // 为其他列设置字体
        treeItem->setFont(1, font);       // 第二列
        treeItem->setFont(2, font);       // 第三列
        treeItem->setFont(3, font);       // 第四列
        treeItem->setFont(4, font);       // 第五列
        treeItem->setFont(5, font);       // 第六列

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

