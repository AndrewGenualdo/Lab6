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

#include "comic.h"


/*     Pre: None
 *    Post: Default values will be initialized
 * Purpose: Default constructor
 *************************************************************************************************/
Comic::Comic()
{
    mCode = "Comic Code";
    mTitle = "Comic Title";
    mAuthor = "Comic Author";
    mPrice = 2.0;
    mQuantity = 2;
    mVolume = 2;
    mSeries = 2;
}

/*     Pre: None
 *    Post: Custom values will be initialized
 * Purpose: Custom constructor
 *************************************************************************************************/
Comic::Comic(string code, string title, string author, double price, int quantity, int volume, int series)
{
    mCode = code;
    mTitle = title;
    mAuthor = author;
    mPrice = price;
    mQuantity = quantity;
    mVolume = volume;
    mSeries = series;
}

/*     Pre: Initialized
 *    Post: This object will be destroyed
 * Purpose: Default destructor
 *************************************************************************************************/
Comic::~Comic()
{
    //cout << "Comic Destructed (Here to prove it works)!" << endl;
}

/*     Pre: Initialized
 *    Post: None
 * Purpose: Get series
 *************************************************************************************************/
int Comic::getSeries()
{
    return mSeries;
}

/*     Pre: Initialized
 *    Post: None
 * Purpose: Get volume
 *************************************************************************************************/
int Comic::getVolume()
{
    return mVolume;
}

/*     Pre: Initialized
 *    Post: Series will be set to input
 * Purpose: Set series
 *************************************************************************************************/
void Comic::setSeries(int series)
{
    mSeries = series;
}

/*     Pre: Initialized
 *    Post: Volume will be set to input
 * Purpose: Set volume
 *************************************************************************************************/
void Comic::setVolume(int volume)
{
    mVolume = volume;
}

/*     Pre: Initialized
 *    Post: Will receive have values from istream
 * Purpose: Ge inputs from istream
 *************************************************************************************************/
istream &operator>>(istream &input, Comic &comic)
{
    getline(input, comic.mCode);
    getline(input, comic.mTitle);
    getline(input, comic.mAuthor);
    string temp;
    getline(input, temp);
    comic.mPrice = stod(temp);
    getline(input, temp);
    comic.mQuantity = stoi(temp);
    getline(input, temp);
    comic.mVolume = stoi(temp);
    getline(input, temp);
    comic.mSeries = stoi(temp);
    return input;
}

/*     Pre: Initialized
 *    Post: Will send values to ostream
 * Purpose: Send values to ostream (probably for printing to console)
 *************************************************************************************************/
ostream &operator<<(ostream &output, Comic comic)
{
    output << comic.mCode << endl;
    output << comic.mTitle << endl;
    output << comic.mAuthor << endl;
    output << comic.mPrice << endl;
    output << comic.mQuantity << endl;
    output << comic.mVolume << endl;
    output << comic.mSeries << endl;
    return output;
}
