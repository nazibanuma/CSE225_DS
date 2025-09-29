#ifndef LIBRARY_H_INCLUDED
#define LIBRARY_H_INCLUDED
#include "Book.h"

#include <iostream>

using namespace std;

class Book:: class Library
{
private:
    string name;
    Book book[100];
    int bookcount;

public:
    Library(string name)
    {
        this->name = name;
        bookcount =0;
    }

    void addBook(Book b)
    {
        if(bookcount<100)
        {
            book[bookcount] = b;
            bookcount++;
        }
        else
        {
            cout<<"library is full";
        }
    }

    void showBooks()
    {

        for(int i=0; i<bookcount; i++)
        {
            book[i].getDetails();
        }
    }



};

#endif // LIBRARY_H_INCLUDED
