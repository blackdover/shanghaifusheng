#include "eventwindow.h"
#include <QDebug>
#include <QMessageBox>
#include <QRandomGenerator>
#include "ui_eventwindow.h"

eventwindow::eventwindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::eventwindow)
{
    ui->setupUi(this);
    setWindowTitle("全球新闻");
    setWindowIcon(QIcon(":/res/icon.png"));

    if (eventManager.loadEventsFromFile(":/res/event.txt"))
        events = eventManager.getAllEvents();
    else
        std::cerr << "加载事件失败！" << std::endl;
    connect(ui->OK, &QPushButton::clicked, this, &eventwindow::on_OK_clicked);
}

// Destructor
eventwindow::~eventwindow()
{
    delete ui;
}

//产生一个随机事件
RandomEvent* eventwindow::triggerRandomEvent()
{
    if (events.empty())return nullptr;

    int index = QRandomGenerator::global()->bounded(events.size());
    ui->description->setText(events[index].getDescription());
    return &events[index];
}
void eventwindow::on_OK_clicked()
{
    close();//关闭当前窗口
}


