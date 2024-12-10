#include "bank.h"
#include "ui_bank.h"
#include <QLabel>
#include <QFont>
#include <QInputDialog>
#include <QMessageBox>
#include "player.h"

Bank::Bank(Player *player,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Bank)
    ,myCash(0)
    ,player(player)
{
    ui->setupUi(this);
    setWindowTitle("银行");
    setWindowIcon(QIcon(":/res/icon.png"));
    connect(ui->leaveButton, &QPushButton::clicked, this, &Bank::on_leaveButton_clicked);
}

Bank::~Bank()
{
    delete ui;
}


void Bank::setCash(long long cash,long long savings)
{
    myCash = cash;
    mySavings = savings;
    updateTipLabel();
}

void Bank::updateTipLabel()
{
    QFont font = ui->tipLabel->font();
    font.setPointSize(12);
    ui->tipLabel->setFont(font);
    ui->tipLabel->setText(QString("您有现金：%1，您有存款：%2\n请问您要...?").arg(myCash).arg(mySavings));
}

void Bank::on_saveButton_clicked()
{
    if(player->getMoney() == 0)
        QMessageBox::warning(this,"柜姐说","侬拿啥来存呢？!");
    else
    {
        bool ok;
        int amount = QInputDialog::getInt(this,"存款","您存多少钱？(利率每天5%)",myCash,0,myCash,1,&ok);
        if (ok)
        {
            mySavings += amount;
            myCash -= amount;
            updateTipLabel();
            player->addBankMoney(amount);
            player->reduceMoney(amount);
            emit bankMoneyChanged(myCash,mySavings);
        }
    }
}

void Bank::on_drawButton_clicked()
{
    if(player->getBankMoney() == 0)
        QMessageBox::warning(this,"柜姐说","侬没钱可取哇！");
    else
    {
        bool ok;
        int amount = QInputDialog::getInt(this,"取款","您取多少钱？",mySavings,0,mySavings,1,&ok);
        if (ok)
        {
            mySavings -= amount;
            myCash += amount;
            updateTipLabel();
            player->addMoney(amount);
            player->reduceBankMoney(amount);
            emit bankMoneyChanged(myCash,mySavings);
        }
    }
}

void Bank::on_leaveButton_clicked()
{
    this->close();
}


void Bank::on_kidButton_clicked()
{
    bool ok;
    int amount = QInputDialog::getInt(this, "捐款", "您捐多少钱？", 0, 0, player->getMoney(), 1, &ok);
    updateTipLabel();
    if (ok)
    {
        player->reduceMoney(amount);
        myCash-=amount;
        int fameIncrease = 0;
        QString fameMessage;

        if (amount >= 1000000) {
            fameIncrease = amount/1000000*1000;
            player->addFame(fameIncrease);
            fameMessage = QString("您捐了 %1 金币，获得了 %2 点声望！").arg(amount).arg(fameIncrease);
        }
        else if (amount >= 100000) {
            fameIncrease = amount/100000*100;
            player->addFame(fameIncrease);
            fameMessage = QString("您捐了 %1 金币，获得了 %2 点声望！").arg(amount).arg(fameIncrease);
        }
        else if (amount >= 10000) {
            fameIncrease = amount/10000*10;
            player->addFame(fameIncrease);
            fameMessage = QString("您捐了 %1 金币，获得了 %2 点声望！").arg(amount).arg(fameIncrease);
        }
        else if (amount > 0) {
            fameIncrease = 5;
            player->addFame(fameIncrease);
            fameMessage = QString("您捐了 %1 金币，获得了 %2 点声望！").arg(amount).arg(fameIncrease);
        }

        if (fameIncrease > 0) {
            QMessageBox::information(this, "捐款成功", fameMessage);
        } else {
            QMessageBox::warning(this, "捐款失败", "捐款金额无效或为零，无法增加声望。");
        }

        if (amount > 10000000) {
            QMessageBox::information(this, "捐款成功", "您的捐款金额已经达到上限，无法继续捐赠。");
            player->addFame(5000);
        }
    }
    updateTipLabel();
}


