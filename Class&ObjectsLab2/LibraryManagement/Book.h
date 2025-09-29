#ifndef BOOK_H_INCLUDED
#define BOOK_H_INCLUDED
#include <iostream>
using namespace std;


class Book
{
private:
    string title;
    string author;
    string isbn;

public:
     Book() {
        title = "";
        author = "";
        isbn = "";
    }

    Book(string title,string author,string isbn)
    {
        this->title = title;
        this->author = author;
        this->isbn = isbn;
    }


    void setTitle(string title)
    {
        this->title = title;
    }
    void setAuthor(string author)
    {
        this->author = author;
    }
    void setISBN(string isbn)
    {
        this->isbn = isbn;
    }
    string getTitle()
    {

        return title;
    }
    string getAuthor()
    {

        return author;
    }
    string getISBN()
    {

        return isbn;
    }

    void getDetails()
    {
        cout<<"Book title: "<<getTitle()<<endl;
        cout<<"Book author: "<<getAuthor()<<endl;
        cout<<"Book isbn: "<<getISBN()<<endl;
    }
};


#endif // BOOK_H_INCLUDED
