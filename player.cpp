#include "player.h"
#include<QDebug>
#include <QFile>
#include <QTextStream>
#include<QString>
#include<QStringList>

Player::Player()
    : money(5000), bankMoney(0), giveUpMoney(5000), health(60), fame(60) ,bagsize(100),maxbagsize(100){}


long long Player::getMoney() const { return money; }
void Player::addMoney(long long num)
{
    money+=(num);
    emit moneyChanged(money);
}
void Player::reduceMoney(long long num)
{
    money-=(num);
    emit moneyChanged(money);
}

long long Player::getBankMoney() const { return bankMoney; }
void Player::addBankMoney(long long num)
{
    bankMoney+=(num);
    emit bankMoneyChanged(bankMoney);
}
void Player::reduceBankMoney(long long num)
{
    bankMoney-=(num);
    emit bankMoneyChanged(bankMoney);
}

long long Player::getGiveUpMoney() const { return giveUpMoney; }
void Player::addGiveUpMoney(long long num)
{
    giveUpMoney+=(num);
    emit giveUpMoneyChanged(giveUpMoney);
}
void Player::reduceGiveUpMoney(long long num)
{
    giveUpMoney-=(num);
    emit giveUpMoneyChanged(giveUpMoney);
}

long long Player::getHealth() const { return health; }
void Player::addHealth(long long num)
{
    health+=(num);
    emit healthChanged(health);
}
void Player::reduceHealth(long long num)
{
    health-=(num);
    emit healthChanged(health);
}

long long Player::getFame() const { return fame; }
void Player::addFame(long long num)
{
    fame+=(num);
    emit fameChanged(fame);
}
void Player::reduceFame(long long num)
{
    fame-=(num);
    emit fameChanged(fame);
}

long long Player::getBagSize() const {
    return bagsize;
}

void Player::setBagSize(long long size) {
    bagsize = size;
}
long long Player::getMaxBagSize() const {
    return maxbagsize;
}

void Player::setMaxBagSize(long long size) {
    maxbagsize = size;
}

