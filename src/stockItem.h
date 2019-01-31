#include <iostream>

using namespace std;


class stockItem {
    public:
        stockItem( ) = default;
        stockItem(string n, double p, int soh);
        void setPartCode( string pCode );
        void setDesc( string description );
        void adjustStock( int amount );
        void plusStock( int amount );
        void minusStock( int amount );
        const int getStockOnHand( ) const { return stockOnHand; }
        const double getPrice( ) const { return price; }
        const string getName( ) const { return name; }
    private:
        string partcode = "";
        string name = "";
        string desc = "";
        double price = 0.00;
        int stockOnHand = 0;

};