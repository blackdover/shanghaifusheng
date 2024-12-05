#ifndef RANKITEMMANAGER_H
#define RANKITEMMANAGER_H

#include <vector>
#include "rankitem.h"
#include <QString>
class rankItemManager
{

private:
    std::vector<rankItem> rankItems;
public:
    rankItemManager();
    bool loadScoreFromFile(const QString& filename);
    const std::vector<rankItem>& getAllElements() const;
};


#endif // RANKITEMMANAGER_H
