#ifndef ITEM_H
#define ITEM_H

#include <string>
#include <QtGlobal>

class Item {
private:
    std::string name;       // 物品名称
    qint64 basePrice;       // 基础价格
    qint64 priceFluctuation;// 波动价格

public:
    Item(const std::string& name, qint64 basePrice,qint64 priceFluctuation);

    std::string getName() const;//获取物品名
    qint64 getBasePrice() const;//获取基础价格
    qint64 getPriceFluctuation() const;//获取波动价格
    qint64 generatePrice() const;//生成价格

};

#endif // ITEM_H
