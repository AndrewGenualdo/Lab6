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

#include "book.h"


/*     Pre: None
 *    Post: Default values will be initialized
 * Purpose: Default constructor
 *************************************************************************************************/
Book::Book()
{
    mCode = "Book Code";
    mTitle = "Book Title";
    mAuthor = "Book Author";
    mPrice = 1.0;
    mQuantity = 1;
}

/*     Pre: None
 *    Post: Custom values will be initialized
 * Purpose: Custom constructor
 *************************************************************************************************/
Book::Book(string code, string title, string author, double price, int quantity)
{
    mCode = code;
    mTitle = title;
    mAuthor = author;
    mPrice = price;
    mQuantity = quantity;
}

/*     Pre: Initialized
 *    Post: This object will be destroyed
 * Purpose: Default destructor
 *************************************************************************************************/
Book::~Book()
{
    //cout << "Book Destructed (Here to prove it works)!" << endl;
}

/*     Pre: Initialized
 *    Post: None
 * Purpose: Get author
 *************************************************************************************************/
string Book::getAuthor()
{
    return mAuthor;
}

/*     Pre: Initialized
 *    Post: None
 * Purpose: Get title
 *************************************************************************************************/
string Book::getTitle()
{
    return mTitle;
}

/*     Pre: Initialized
 *    Post: Author will be set to input
 * Purpose: Set author
 *************************************************************************************************/
void Book::setAuthor(string author)
{
    mAuthor = author;
}

/*     Pre: Initialized
 *    Post: Title will be set to input
 * Purpose: Set title
 *************************************************************************************************/
void Book::setTitle(string title)
{
    mTitle = title;
}

/*     Pre: Initialized
 *    Post: Will receive have values from istream
 * Purpose: Ge inputs from istream
 *************************************************************************************************/
istream &operator>>(istream &input, Book &book)
{
    getline(input, book.mCode);
    getline(input, book.mTitle);
    getline(input, book.mAuthor);
    string temp;
    getline(input, temp);
    book.mPrice = stod(temp);
    getline(input, temp);
    book.mQuantity = stoi(temp);

    return input;
}

/*     Pre: Initialized
 *    Post: Will send values to ostream
 * Purpose: Send values to ostream (probably for printing to console)
 *************************************************************************************************/
ostream &operator<<(ostream &output, Book book)
{
    output << book.mCode << endl;
    output << book.mTitle << endl;
    output << book.mAuthor << endl;
    output << book.mPrice << endl;
    output << book.mQuantity << endl;
    return output;
}
