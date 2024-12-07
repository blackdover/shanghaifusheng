#include "post.h"
#include "ui_post.h"
#include <QMessageBox>
#include <QInputDialog>

Post::Post(Player *player,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Post)
    ,player(player)
{
    ui->setupUi(this);
    setWindowTitle("邮局");

    connect(ui->leaveButton, &QPushButton::clicked, this, &Post::on_leaveButton_clicked);
}

Post::~Post()
{
    delete ui;
}

void Post::on_leaveButton_clicked()
{
    this->close();
}

void Post::on_payButton_clicked()
{
    if(player->getMoney() == 0)
    {
        QMessageBox::warning(this,"保安说","取点钱再来吧！");
    }
    else if(player->getGiveUpMoney() == 0)
    {
        QMessageBox::warning(this,"村长说","侬想做慈善吗？！");
    }

    else
    {
        bool ok;
        int myCash = player->getMoney();
        // int needCash=player->getGiveUpMoney();
        int amount = QInputDialog::getInt(this,"信封","您打算还多少？",myCash,0,myCash,1,&ok);
        if(ok)
        {
            if(player->getGiveUpMoney() > amount)
            {
                player->reduceMoney(amount);
                player->reduceGiveUpMoney(amount);
            }
            else
            {
                player->reduceMoney(player->getGiveUpMoney());
                player->reduceGiveUpMoney(player->getGiveUpMoney());
                QMessageBox::information(this,"村长说","侬这小子还真还上了！");
            }
            emit giveUpMoneyChanged(amount);
        }
    }
}

