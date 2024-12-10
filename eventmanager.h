#ifndef EVENTMANAGER_H
#define EVENTMANAGER_H

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QVector>
#include <QRandomGenerator>
#include <iostream>

// 事件结构体
class RandomEvent {
public:
    QString itemName;  // 物品名称
    qint64 minPrice;       // 最低价格
    qint64 maxPrice;       // 最高价格
    QString description;    // 事件描述
public:
    //构造函数
    RandomEvent(QString i,qint64 min,qint64 max,QString des)
        : itemName(i), minPrice(min), maxPrice(max), description(des) {}
    // 获取随机事件属性
    QString getItemName() const { return itemName; }
    qint64 getMinPrice() const { return minPrice; }
    qint64 getMaxPrice() const { return maxPrice; }
    QString getDescription() const { return description; }
    long long getRandomPrice() const {
        return QRandomGenerator::global()->bounded(minPrice, maxPrice + 1);
    }
};

class EventManager
{
public:
    EventManager();
    // 加载事件文件
    bool loadEventsFromFile(const QString& filename);
    // 获取所有事件
    const QVector<RandomEvent>& getAllEvents() const;
private:
    QVector<RandomEvent> events; // 存储所有事件

};

#endif // EVENTMANAGER_H
