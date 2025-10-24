#include <iostream>

using namespace std;

int main() {


    UnsortedType<int> intList;

    intList.InsertItem(5);
    intList.InsertItem(7);
    intList.InsertItem(6);
    intList.InsertItem(9);

    cout << "List: ";
    PrintList(intList);

    cout << "list length: " << intList.LengthIs() << endl;

    intList.InsertItem(1);
    cout << "List after inserting 1: ";
    PrintList(intList);

    if (intList.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;

    intList.DeleteItem(5);
    if (intList.IsFull())
        cout << "List is full" << endl;
    else
        cout << "List is not full" << endl;

    intList.DeleteItem(1);
    cout << "List after deleting 1: ";
    PrintList(intList);

    intList.DeleteItem(6);
    cout << "List after deleting 6: ";
    PrintList(intList);



    return 0;
}
