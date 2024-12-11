#ifndef ITEMMANAGER_H
#define ITEMMANAGER_H

#include <vector>
#include "Item.h"
#include <QString>

class ItemManager {
private:
    std::vector<Item> items;//item类的动态数组
    bool saveItemsToFile();//保存item至文件
public:
    ItemManager();

    bool loadItemsFromFile(const QString& filename);//从文件加载Item属性
    Item* getItemByName(const std::string& name);//通过物品名获取Item对象
    std::vector<long long> generateAllPrices() const;//生成所有Item对象的价格
    const std::vector<Item>& getAllItems() const;//获取所有的Item
    bool addItem(const Item& item);  //添加商品
    bool modifyItem(const std::string& oldName, const Item& newItem);//修改商品
    bool deleteItem(const std::string& name);//删除商品
};

#endif // ITEMMANAGER_H
