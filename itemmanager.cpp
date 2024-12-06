#include "ItemManager.h"
#include <fstream>
#include <sstream>
#include <random>
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QtGlobal>

ItemManager::ItemManager() {}

bool ItemManager::loadItemsFromFile(const QString& filename) {
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        std::cerr << "无法打开文件: " << filename.toStdString() << std::endl;
        return false;
    }

    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(" ");

        if (parts.size() < 3) {
            std::cerr << "文件格式错误: " << line.toStdString() << std::endl;
            continue;
        }

        QString name = parts[0];
        qint64 basePrice = parts[1].toLongLong();
        qint64 priceFluctuation = parts[2].toLongLong();

        items.emplace_back(name.toStdString(), basePrice, priceFluctuation);
    }

    file.close();
    return true;
}



Item* ItemManager::getItemByName(const std::string& name) {
    for (auto& item : items) {
        if (item.getName() == name) {
            return &item;
        }
    }
    return nullptr;
}

std::vector<long long> ItemManager::generateAllPrices() const {
    std::vector<long long> prices;
    for (const auto& item : items) {
        prices.push_back(item.generatePrice());
    }
    return prices;
}

const std::vector<Item>& ItemManager::getAllItems() const {
    return items;
}

// 添加物品的方法
void ItemManager::addItem(const Item& item) {
    items.push_back(item);  // 使用 push_back 添加物品到 items 列表
}
