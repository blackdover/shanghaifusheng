#include "ItemManager.h"
#include <fstream>
#include <sstream>
#include <random>
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QtGlobal>
#include<qcoreapplication.h>
#include<QDir>

ItemManager::ItemManager() {}

bool ItemManager::loadItemsFromFile(const QString& filename) {
    QString filePath = QCoreApplication::applicationDirPath() + "/res/items.txt";
    QFile file(filePath);

    // 检查文件是否存在
    if (!file.exists()) {
        // 文件不存在，创建目录
        QDir dir;
        if (!dir.exists(QCoreApplication::applicationDirPath() + "/res")) {
            if (!dir.mkpath(QCoreApplication::applicationDirPath() + "/res")) {
                qDebug() << "无法创建目录:" << QCoreApplication::applicationDirPath() + "/res";
                return false;
            }
        }
        // 从资源文件读取默认数据
        QFile resourceFile(":/res/items.txt");
        if (resourceFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
            QTextStream in(&resourceFile);
            QString defaultData = in.readAll();
            resourceFile.close();

            // 将默认数据写入工作目录下的 items.txt
            if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
                QTextStream out(&file);
                out << defaultData;
                file.close();
                qDebug() << "items.txt 文件已创建，并初始化为默认数据。";
            } else {
                qDebug() << "无法创建 items.txt 文件。";
                return false;
            }
        } else {
            qDebug() << "无法打开资源文件 :/res/items.txt 以获取默认数据。";
            return false;
        }
    }
    // 现在尝试从工作目录下的 items.txt 加载数据
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        qDebug() << "无法打开文件:" << filePath;
        return false;
    }
    QTextStream in(&file);
    items.clear(); // 清空现有的 items，以防重复加载
    while (!in.atEnd()) {
        QString line = in.readLine().trimmed();
        if (line.isEmpty()) {
            continue; // 跳过空行
        }
        QStringList parts = line.split(" ", Qt::SkipEmptyParts);
        if (parts.size() < 3) {
            qDebug() << "文件格式错误:" << line;
            continue;
        }
        QString name = parts[0];
        bool ok1, ok2;
        qint64 basePrice = parts[1].toLongLong(&ok1);
        qint64 priceFluctuation = parts[2].toLongLong(&ok2);
        if (!ok1 || !ok2) {
            qDebug() << "数值转换失败:" << line;
            continue;
        }
        items.emplace_back(name.toStdString(), basePrice, priceFluctuation);
    }
    file.close();
    qDebug() << "成功从" << filePath << "加载 items。";
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

bool ItemManager::saveItemsToFile() {
    QString filePath = QCoreApplication::applicationDirPath() + "/res/items.txt";
    QFile file(filePath);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qDebug() << "无法打开文件进行写入:" << filePath;
        return false;
    }
    QTextStream out(&file);
    for (const auto& item : items) {
        out << QString::fromStdString(item.getName()) << " "
            << QString::number(item.getBasePrice()) << " "
            << QString::number(item.getPriceFluctuation()) << "\n";
    }
    file.close();
    qDebug() << "成功将 items 保存到" << filePath;
    return true;
}


const std::vector<Item>& ItemManager::getAllItems() const {
    return items;
}

bool ItemManager::addItem(const Item& item) {
    // 检查是否有同名商品
    for (const auto& existingItem : items) {
        if (existingItem.getName() == item.getName()) {
            qDebug() << "添加失败：商品名称重复:" << QString::fromStdString(item.getName());
            return false;
        }
    }
    items.push_back(item);
    if (!saveItemsToFile()) {
        qDebug() << "添加失败：无法保存到文件。";
        // 如果保存失败，可以选择从 items 中移除刚添加的物品
        items.pop_back();
        return false;
    }
    qDebug() << "成功添加商品:" << QString::fromStdString(item.getName());
    return true;
}

bool ItemManager::modifyItem(const std::string& oldName, const Item& newItem) {
    bool found = false;
    for (auto& item : items) {
        if (item.getName() == oldName) {
            // 检查新名称是否与其他物品重复（如果名称有变化）
            if (newItem.getName() != oldName) {
                for (const auto& existingItem : items) {
                    if (existingItem.getName() == newItem.getName()) {
                        qDebug() << "修改失败：新商品名称与现有商品重复:" << QString::fromStdString(newItem.getName());
                        return false;
                    }
                }
            }

            item = newItem;
            found = true;
            break;
        }
    }
    if (!found) {
        qDebug() << "修改失败：未找到商品:" << QString::fromStdString(oldName);
        return false;
    }
    if (!saveItemsToFile()) {
        qDebug() << "修改失败：无法保存到文件。";
        return false;
    }
    qDebug() << "成功修改商品:" << QString::fromStdString(oldName) << "到" << QString::fromStdString(newItem.getName());
    return true;
}

bool ItemManager::deleteItem(const std::string& name) {
    auto it = std::remove_if(items.begin(), items.end(),
                             [&](const Item& item) { return item.getName() == name; });
    if (it == items.end()) {
        qDebug() << "删除失败：未找到商品:" << QString::fromStdString(name);
        return false;
    }

    items.erase(it, items.end());

    if (!saveItemsToFile()) {
        qDebug() << "删除失败：无法保存到文件。";
        return false;
    }

    qDebug() << "成功删除商品:" << QString::fromStdString(name);
    return true;
}
