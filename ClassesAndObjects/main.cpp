#include <iostream>
#include "dynArr.h"

using namespace std;

int main()
{
    int size, value;
    cout << "Enter the size of the array: ";
    cin >> size;

    dynArr obj1(size);

    for(int i = 0; i<5; i++)
    {
        cout << "Enter value of obj[" << i << "]: ";
        cin >> value;
        obj1.setValue(i, value);
    }

    cout << "\n\n";

    for(int i = 0; i<5; i++)
    {
        cout << "obj[" << i << "]: " << obj1.getValue(i) << endl;

    }

    return 0000;
}
