#include "uitest.h"
#include "ui_uitest.h"
#include <QTimer>


uitest::uitest(MainWindow *main,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::uitest)
    ,mainwindow(main)
{
    ui->setupUi(this);
    this->setWindowTitle("结算画面（此处应有攒劲的小曲）");
    setWindowIcon(QIcon(":/res/icon.png"));
    inputName();
    Player *p=mainwindow->getPlayer();
    money = p->getMoney()+p->getBankMoney()-p->getGiveUpMoney();
    health=p->getHealth();
    fame=p->getFame();
    ui->name->setText(name);
    ui -> name -> setAlignment(Qt::AlignCenter);
    ui->money->setText(QString::number(money));
    ui->health->setText(QString::number(health));
    ui->fame->setText(QString::number(fame));
    setTitle(p);
}

uitest::~uitest()
{
    delete ui;
}

void uitest::inputName()
{
    bool ok;
    name = QInputDialog::getText(this, "人口普查", "请输入你的大名:", QLineEdit::Normal, "佚名", &ok);
    // 检查用户是否点击了“OK”按钮
    if (ok && !name.isEmpty()) {

    } else {
        name="连名都没留就匆忙离开的侠客";
    }
}

void uitest::on_torank_clicked()
{

}


void uitest::on_newgame_clicked()
{
    this->close();
    mainwindow->close();
    MainWindow *m=new MainWindow;
    m->show();
}


void uitest::on_leave_clicked()
{
    this->close();
    mainwindow->close();
}

void uitest::setTitle(Player *player)
{
    long long money = player->getMoney();
    int health = player->getHealth();
    int fame = player->getFame();
    QString title;

    if (money > 1000000000) {
        title = "传说中的财富之王";
    } else if (money > 10000000 && fame > 90) {
        title = "富可敌国的名流";
    } else if (money > 100000 && health > 70) {
        title = "健康与富饶的领主";
    } else if (money > 100000 && health < 30) {
        title = "金玉其外，败絮其中";
    } else if (health > 70 && fame > 70) {
        title = "健康的勇士";
    } else if (health > 70) {
        title = "坚不可摧的守护者";
    } else if (fame > 70) {
        title = "名声显赫的传奇";
    } else if (money < 100 && fame > 70) {
        title = "贫困却备受敬爱";
    } else if (money < 100 && health < 30) {
        title = "贫病交加的旅人";
    } else if (money < 100 && health > 70) {
        title = "清贫却坚韧";
    } else if (fame < 30 && money < 100) {
        title = "默默无闻的追求者";
    } else if (fame > 70 && health < 30) {
        title = "声名鹊起的虚弱者";
    } else if (health > 70 && fame < 30) {
        title = "健康却隐匿的英雄";
    } else if (money > 10000 && fame >= 30 && fame <= 70 && health >= 30 && health <= 70) {
        title = "富有却平凡的生活者";
    } else if (money < 100) {
        title = "一贫如洗的流浪者";
    } else {
        title = "无名的冒险者";
    }

    ui->title->setText(title);
}
