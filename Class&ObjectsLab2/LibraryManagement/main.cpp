#include <iostream>
#include "Book.h"
#include "Library.h"

using namespace std;

int main()
{
    Book b1("The Alchemist", "Paulo Coelho", "12345");
    Book b2("1984", "George Orwell", "67890");
    Book b3("Clean Code", "Robert Martin", "11223");

    Library L("City Library");

    L.addBook(b1);
    L.addBook(b2);
    L.addBook(b3);

    L.showBooks();
    return 0;
}
