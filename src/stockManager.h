#include <iostream>
#include <vector>
#include "stockItem.h"

using namespace std;

class stockManager {
    public:
        stockManager( ) = default;
        stockManager(int sc, vector< stockItem > st);
        stockManager(vector< stockItem > stock);
        void addStock(stockItem si);
        void setStockCount(int amount);
        void autoSetStockCount( );
        const int getStockCount( ) const { return stockCount; }

    private:
        int stockCount = 0;
        vector< stockItem > stock;
};