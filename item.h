#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <QtGlobal>
class AdditionalEffect; // 附加效果声明

class Item {
private:
    std::string name;       // 物品名称
    qint64 basePrice;       // 基础价格
    qint64 priceFluctuation;// 波动价格
    AdditionalEffect* effect; // 附加效果

public:
    Item(const std::string& name, long long basePrice, long long priceFluctuation, AdditionalEffect* effect = nullptr);

    std::string getName() const;
    long long getBasePrice() const;
    long long getPriceFluctuation() const;//波动范围
    long long generatePrice() const;

    AdditionalEffect* getEffect() const;
    void setEffect(AdditionalEffect* newEffect);
};

#endif // ITEM_H
