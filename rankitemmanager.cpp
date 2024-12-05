#include "rankitemmanager.h"
#include <iostream>
#include <QFile>
#include <QTextStream>
#include <QtGlobal>

rankItemManager::rankItemManager() {}

bool rankItemManager::loadScoreFromFile(const QString& filename){
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        std::cerr << "无法打开文件: " << filename.toStdString() << std::endl;
        return false;
    }

    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString line = in.readLine();
        QStringList parts = line.split(" ");

        if (parts.size() < 5)
        {
            std::cerr << "文件格式错误: " << line.toStdString() << std::endl;
            continue;
        }
        QString playerName=parts[0];
        qint64 money = parts[1].toLongLong();
        qint64 fame=parts[2].toLongLong();
        qint64 health=parts[3].toLongLong();
        QString playerTitle=parts[4];
        rankItems.emplace_back(playerName.toStdString(), money,fame,health,playerTitle.toStdString());
    }
    file.close();
    return true;



}

const std::vector<rankItem>& rankItemManager::getAllElements() const
{
    return rankItems;
}
