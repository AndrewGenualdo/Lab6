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

#include <iostream>

#include "comic.h" //comic includes book, which includes item

int main()
{
    bool testItem = true;
    bool testBook = true;
    bool testComic = true;

    //you can uncomment the print lines in the destructors of the item, book, and comic if you want, I found them really annoying when trying to test everything else


    if(testItem) {
        cout << "------------ITEM------------" << endl;
        Item item;
        cin >> item; //order is: code, price, quantity
        cout << item.getCode() << endl; //should be whatever code you typed
        cout << item.getPrice() << endl; //should be whatever price you typed
        cout << item.getQuantity() << endl; //should be whatever quantity you typed
        item = Item("COOL ITEM CODE", 10.99, 4);
        cout << item; //should print "COOL ITEM CODE", 10.99, 4
        item.setCode("COOLER ITEM CODE");
        item.setPrice(9.99);
        item.setQuantity(10);
        cout << item; //should print "COOLER ITEM CODE", 9.99, 10*
    }

    if(testBook) {
        cout << "------------BOOK------------" << endl;
        Book book;
        cin >> book; //order is: code, title, author, price, quantity
        cout << book.getCode() << endl; //should be whatever code you typed
        cout << book.getTitle() << endl; //should be whatever title you typed
        cout << book.getAuthor() << endl; //should be whatever author you typed
        cout << book.getPrice() << endl; //should be whatever price you typed
        cout << book.getQuantity() << endl; //should be whatever quantity you typed

        book = Book("COOL BOOK CODE", "BOOK TITLE", "BOOK AUTHOR", 12.99, 7);
        cout << book; //should print "COOL BOOK CODE", "BOOK TITLE", "BOOK AUTHOR", 12.99, 7
        book.setCode("COOLER BOOK CODE");
        book.setTitle("BOOK TITLE :D");
        book.setAuthor("BOOK AUTHOR :D");
        book.setPrice(3.99);
        book.setQuantity(12);
        cout << book; //should print "COOLER BOOK CODE", "BOOK TITLE :D", "BOOK AUTHOR :D", 3.99, 12
    }

    if(testComic) {
        cout << "------------COMIC------------" << endl;
        Comic comic;
        cin >> comic; //order is: code, title, author, price, quantity, volume, series
        cout << comic.getCode() << endl; //should be whatever code you typed
        cout << comic.getTitle() << endl; //should be whatever title you typed
        cout << comic.getAuthor() << endl; //should be whatever author you typed
        cout << comic.getPrice() << endl; //should be whatever price you typed
        cout << comic.getQuantity() << endl; //should be whatever quantity you typed
        cout << comic.getVolume() << endl; //should be whatever volume you typed
        cout << comic.getSeries() << endl; //should be whatever series you typed

        comic = Comic("COOL COMIC CODE", "COMIC TITLE", "COMIC AUTHOR", 12.99, 7, 10, 4);
        cout << comic; //should print "COOL COMIC CODE", "COMIC TITLE", "COMIC AUTHOR", 12.99, 7, 10, 4
        comic.setCode("COOLER COMIC CODE");
        comic.setTitle("COMIC TITLE :D");
        comic.setAuthor("COMIC AUTHOR :D");
        comic.setPrice(3.99);
        comic.setQuantity(12);
        comic.setVolume(5);
        comic.setSeries(6);
        cout << comic; //should print "COOLER COMIC CODE", "COMIC TITLE :D", "COMIC AUTHOR :D", 3.99, 12, 5, 6
    }
    return 0;
}
