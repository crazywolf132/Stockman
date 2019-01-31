#include "stockManager.h"

stockManager::stockManager( int sc, vector< stockItem > st ) : stockCount(sc), stock(st) {}

stockManager::stockManager( vector < stockItem > st ) : stock(st) {}

void stockManager::addStock( stockItem si ) {
    stock.push_back(si);
}

void stockManager::setStockCount( int amount ) {
    stockCount = amount;
}

void stockManager::autoSetStockCount( ) {
    stockCount = stock.size();
}