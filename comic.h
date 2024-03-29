//
// Created by andrew.genualdo on 3/29/2024.
//

#ifndef LAB6_COMIC_H
#define LAB6_COMIC_H


#include "book.h"

class Comic : public Book
{
    int mVolume, mSeries;

    Comic();
    Comic(string code, string title, string author, double price, int quantity, int volume, int series);
    ~Comic();

    int getSeries();
    int getVolume();

    void setSeries(int series);
    void setVolume(int volume);

    friend istream& operator>>(istream& input, Comic& comic);
    friend ostream& operator<<(ostream& output, Comic comic);
};


#endif //LAB6_COMIC_H
