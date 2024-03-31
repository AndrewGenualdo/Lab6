/*
     Author:  Drew Genualdo
      Class:  CSI-240-04
 Assignment: Lab 6
 Due Date: Mar 2, 2024 @ 1pm

Description:
   Multiple classes that have inheritance from each other to show how that works

Certification of Authenticity:
   I certify that this is entirely my own work, except where I have given
   fully-documented references to the work of others.I understand the
   definition and consequences of plagiarism and acknowledge that the
   assessor of this assignment may, for the purpose of assessing this
   assignment:
   - Reproduce this assignment and provide a copy to another member of
     academic staff; and/or
   - Communicate a copy of this assignment to a plagiarism checking
     service(which may then retain a copy of this assignment on its
	 database for the purpose of future plagiarism checking)
*/

#include "item.h"

/*     Pre: None
 *    Post: Default values will be initialized
 * Purpose: Default constructor
 *************************************************************************************************/
Item::Item()
{
    mCode = "Item Code";
    mPrice = 0.0;
    mQuantity = 0;
}

/*     Pre: None
 *    Post: Custom values will be initialized
 * Purpose: Custom constructor
 *************************************************************************************************/
Item::Item(string code, double price, int quantity)
{
    mCode = code;
    mPrice = price;
    mQuantity = quantity;
}

/*     Pre: Initialized
 *    Post: This object will be destroyed
 * Purpose: Default destructor
 *************************************************************************************************/
Item::~Item()
{
    //cout << "Item Destructed (Here to prove it works)!" << endl;
}

/*     Pre: Initialized
 *    Post: None
 * Purpose: Get code
 *************************************************************************************************/
string Item::getCode()
{
    return mCode;
}

/*     Pre: Initialized
 *    Post: None
 * Purpose: Get price
 *************************************************************************************************/
double Item::getPrice()
{
    return mPrice;
}

/*     Pre: Initialized
 *    Post: None
 * Purpose: Get quantity
 *************************************************************************************************/
int Item::getQuantity()
{
    return mQuantity;
}

/*     Pre: Initialized
 *    Post: Code will be set to input
 * Purpose: Set code
 *************************************************************************************************/
void Item::setCode(string code)
{
    mCode = code;
}

/*     Pre: Initialized
 *    Post: Price will be set to input
 * Purpose: Set price
 *************************************************************************************************/
void Item::setPrice(double price)
{
    mPrice = price;
}

/*     Pre: Initialized
 *    Post: Quantity will be set to input
 * Purpose: Set quantity
 *************************************************************************************************/
void Item::setQuantity(int quantity)
{
    mQuantity = quantity;
}

/*     Pre: Initialized
 *    Post: Will receive have values from istream
 * Purpose: Ge inputs from istream
 *************************************************************************************************/
istream &operator>>(istream &input, Item &item)
{
    getline(input, item.mCode);
    string temp;
    getline(input, temp);
    item.mPrice = stod(temp);
    getline(input, temp);
    item.mQuantity = stoi(temp);
    return input;
}

/*     Pre: Initialized
 *    Post: Will send values to ostream
 * Purpose: Send values to ostream (probably for printing to console)
 *************************************************************************************************/
ostream &operator<<(ostream &output, Item item)
{
    output << item.mCode << endl;
    output << item.mPrice << endl;
    output << item.mQuantity << endl;
    return output;
}
