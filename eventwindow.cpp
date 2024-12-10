#include "eventwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QRandomGenerator>
#include "ui_eventwindow.h"

// Constructor
eventwindow::eventwindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::eventwindow)
{
    ui->setupUi(this);
    setWindowTitle("全球新闻");
    setWindowIcon(QIcon(":/res/icon.png"));

    // Initialize random events
    events = {{"拼好饭牌脆皮鸡", {5, 30}},
              {"面向对象课本大受欢迎", {50, 100}},
              {"面向对象课本无人问津", {50, 100}},
              {"软硬适中华", {100, 300}},
              {"写满的实验报告", {300, 500}},
              {"大米电瓶车", {700, 2000}},
              {"华为Mate120pro", {6000, 10000}},
              {"曹县茅台", {10000, 15000}},
              {"冯诺依曼亲签", {20000, 40000}},
              {"特斯拉火箭牌汽车", {200000, 500000}}};
    connect(ui->OK, &QPushButton::clicked, this, &eventwindow::on_OK_clicked);
}

// Destructor
eventwindow::~eventwindow()
{
    delete ui;
}

//产生一个随机事件
void eventwindow::triggerRandomEvent()
{
    if (events.empty())return;

    int index = QRandomGenerator::global()->bounded(events.size());
    QString des = QString::fromStdString(events[index].first); // Convert std::string to QString
    int minPrice = events[index].second.first;
    int maxPrice = events[index].second.second;
    ui->description->setText(des);
}
void eventwindow::on_OK_clicked()
{
    close();//关闭当前窗口
}


