#ifndef ITEMMANAGER_H
#define ITEMMANAGER_H

#include <vector>
#include "Item.h"
#include <QString>

class ItemManager {
private:
    std::vector<Item> items; // 物品列表

public:
    ItemManager();

    //从文件加载物品
    bool loadItemsFromFile(const QString& filename);

    Item* getItemByName(const std::string& name);
    std::vector<long long> generateAllPrices() const;
    const std::vector<Item>& getAllItems() const;
    void addItem(const Item& item);  //添加物品
};

#endif // ITEMMANAGER_H
