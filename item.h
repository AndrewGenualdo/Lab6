//
// Created by andrew.genualdo on 3/29/2024.
//

#ifndef LAB6_ITEM_H
#define LAB6_ITEM_H
#include <string>

using namespace std;

class Item
{
    string mCode;
    double mPrice;
    int mQuantity;

    Item();
    Item(string code, double price, int quantity);
    ~Item();

    string getCode();
    double getPrice();
    int getQuantity();

    void setCode(string code);
    void setPrice(double price);
    void setQuantity(int quantity);

    friend istream& operator>>(istream& input, Item& item);
    friend ostream& operator>>(ostream&, Item item);
};


#endif //LAB6_ITEM_H
