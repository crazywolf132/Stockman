#include "stockItem.h"

stockItem::stockItem(string n, double p, int soh) : name(n), price(p), stockOnHand(soh) {}

void stockItem::setPartCode( string pCode ) {
    partcode = pCode;
}

void stockItem::setDesc( string description ) {
    desc = description;
}

void stockItem::adjustStock( int amount ) {
    stockOnHand += amount;
}

void stockItem::plusStock( int amount ) {
    stockOnHand += amount;
}

void stockItem::minusStock( int amount ) {
    stockOnHand -= amount;
}