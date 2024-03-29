//
// Created by andrew.genualdo on 3/29/2024.
//

#ifndef LAB6_BOOK_H
#define LAB6_BOOK_H


#include "item.h"

class Book : public Item
{
    string mTitle, mAuthor;

    Book();
    Book(string code, string title, string author, double price, int quantity);
    ~Book();

    string getAuthor();
    string getTitle();

    void setAuthor(string author);
    void setTitle(string title);

    friend istream& operator>>(istream& input, Book& book);
    friend ostream& operator<<(ostream& output, Book book);
};


#endif //LAB6_BOOK_H
