#include "rankitem.h"

rankItem::rankItem(const std::string& Playername, long long money, long long health,long long fame,const std::string& Playertitle)
    : Playername(Playername),money(money),health(health),fame(fame),Playertitle(Playertitle){}

std::string rankItem::getPlayername() const {
    return Playername;
}
long long rankItem::getMoney() const {
    return money;
}

long long rankItem::getHealth() const {
    return health;
}
long long rankItem::getFame() const {
    return fame;
}
std::string rankItem::getPlayertitle() const {
    return Playertitle;
}
