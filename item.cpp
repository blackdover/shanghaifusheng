#include "Item.h"
#include <cstdlib> // for random generation

Item::Item(const std::string& name, qint64 basePrice, qint64 priceFluctuation)
    : name(name), basePrice(basePrice), priceFluctuation(priceFluctuation){}

std::string Item::getName() const {
    return name;
}

qint64 Item::getBasePrice() const {
    return basePrice;
}

qint64 Item::getPriceFluctuation() const {
    return priceFluctuation;
}

qint64 Item::generatePrice() const {
    return basePrice + (std::rand() % (priceFluctuation + 1));
}
