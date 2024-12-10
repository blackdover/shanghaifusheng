#ifndef ITEMMANAGER_H
#define ITEMMANAGER_H

#include <vector>
#include "Item.h"
#include <QString>

class ItemManager {
private:
    std::vector<Item> items; // 物品列表
    // 保存物品到文件的方法
    bool saveItemsToFile();
public:
    ItemManager();
    //从文件加载物品
    bool loadItemsFromFile(const QString& filename);
    Item* getItemByName(const std::string& name);
    std::vector<long long> generateAllPrices() const;
    const std::vector<Item>& getAllItems() const;
    bool addItem(const Item& item);  //添加物品
    bool modifyItem(const std::string& oldName, const Item& newItem);
    bool deleteItem(const std::string& name);
};

#endif // ITEMMANAGER_H
