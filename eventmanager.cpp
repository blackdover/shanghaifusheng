#include "eventmanager.h"
EventManager::EventManager(){}
bool EventManager::loadEventsFromFile(const QString& filename) {
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        std::cerr << "无法打开文件: " << filename.toStdString() << std::endl;
        return false;
    }
    QTextStream in(&file);
    while (!in.atEnd()) {
        QString line = in.readLine();
        QStringList parts = line.split(" ");

        // 至少需要4个部分: 名称、最低价、最高价、描述
        if (parts.size() < 4) {
            std::cerr << "文件格式错误: " << line.toStdString() << std::endl;
            continue;
        }

        // 提取名称、最低价格、最高价格
        QString itemName = parts[0];
        qint64 minPrice = parts[1].toLongLong();
        qint64 maxPrice = parts[2].toLongLong();

        // 提取描述(将第4部分及之后的所有部分合并为描述字符串)
        QString description = parts.mid(3).join(" ");

        // 添加到事件列表
        events.emplace_back(RandomEvent(itemName, minPrice, maxPrice, description));
    }
    file.close();
    return true;
}
// 获取所有事件
const QVector<RandomEvent>& EventManager::getAllEvents() const {
    return events;
}
