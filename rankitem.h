#ifndef RANKITEM_H
#define RANKITEM_H
#include <string>
#include <QtGlobal>

class rankItem
{
public:
    rankItem(const std::string& Playername, long long money, long long health,long long fame,const std::string& Playertitle);
    // 构造函数
    std::string getPlayername() const;
    long long getMoney() const;

    long long getHealth() const;
    long long getFame() const;
    std::string getPlayertitle() const;
private:

    long long money;

    long long health;
    long long fame;
    std::string Playername;
    std::string Playertitle;
};

#endif // RANKITEM_H
