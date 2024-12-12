#ifndef PLAYER_H
#define PLAYER_H

#include <QObject>

class Player : public QObject {
    Q_OBJECT
public:
    Player();
    long long getMoney() const;//获取余额
    void addMoney(long long amount);//添加余额
    void reduceMoney(long long amount);//减少金额
    long long getBankMoney() const;//获取银行存款
    void addBankMoney(long long amount);//添加银行存款
    void reduceBankMoney(long long amount);//减少银行存款
    long long getGiveUpMoney() const;//获取欠款
    void addGiveUpMoney(long long amount);//增加欠款
    void reduceGiveUpMoney(long long amount);//减少欠款
    long long getHealth() const;
    void addHealth(long long amount);
    void reduceHealth(long long amount);
    long long getFame() const;
    void addFame(long long amount);
    void reduceFame(long long amount);
    long long getBagSize() const;
    void setBagSize(long long size);
    QString getPlayerName() const;  // 获取名字
    void setPlayerName(const QString &name);
    long long getMaxBagSize() const;
    void setMaxBagSize(long long size);
signals://QT自带的信号声明机制
    void moneyChanged(long long newMoney);//余额变化
    void bankMoneyChanged(long long newBankMoney);//银行存款变化
    void giveUpMoneyChanged(long long newGiveUpMoney);
    void healthChanged(long long newHealth);
    void fameChanged(long long newFame);

private:
    long long money;
    long long bankMoney;
    long long giveUpMoney;
    long long health;
    long long fame;
    long long bagsize;
    long long maxbagsize;
};

#endif // PLAYER_H
