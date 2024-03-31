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

#ifndef LAB6_COMIC_H
#define LAB6_COMIC_H


#include "book.h"

class Comic : public Book
{
    int mVolume, mSeries;

public:
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
