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

    for (int i = 0; i < ui->ranktreeWidget->columnCount(); ++i) {
        ui->ranktreeWidget->resizeColumnToContents(i);
    }

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

        QFile resourceFile(":/res/score.txt");
        if (resourceFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&resourceFile);
            QString defaultData = in.readAll();

            if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
                QTextStream out(&file);
                out << defaultData;  // 将数据写入新文件
                file.close();

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

    std::sort(rankItems.begin(), rankItems.end(), [](const rankItem& a, const rankItem& b) {
        return (a.getMoney()*0.6+a.getHealth()*0.2+a.getFame()*0.2) > (b.getMoney()*0.6+b.getHealth()*0.2+b.getFame()*0.2);
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
        treeItem->setText(1, rankPerson);
        treeItem->setText(2, QString::number(ownMoney));
        treeItem->setText(3, QString::number(healthState));
        treeItem->setText(4, QString::number(fameState));
        treeItem->setText(5, title);

        QFont font = treeItem->font(0);
        font.setPointSize(10);
        treeItem->setFont(0, font);

        treeItem->setFont(1, font);
        treeItem->setFont(2, font);
        treeItem->setFont(3, font);
        treeItem->setFont(4, font);
        treeItem->setFont(5, font);

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

