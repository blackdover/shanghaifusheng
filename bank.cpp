#include "bank.h"
#include "ui_bank.h"
#include <QLabel>
#include <QFont>
#include <QInputDialog>
#include "player.h"

Bank::Bank(Player *player,QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Bank)
    ,myCash(0)
    ,player(player)
{
    ui->setupUi(this);
    setWindowTitle("银行");

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
    bool ok;
    int amount = QInputDialog::getInt(this,"存款","您存多少钱？",myCash,0,myCash,1,&ok);
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

void Bank::on_drawButton_clicked()
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

void Bank::on_leaveButton_clicked()
{
    this->close();
}

