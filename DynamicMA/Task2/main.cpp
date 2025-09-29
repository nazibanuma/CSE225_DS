#include <iostream>
#include "2Ddynarr.h"

using namespace std;

int main()
{
    int row, cols;
    char ch;

    cout << "Enter number of rows: ";
    cin >> row;
    cout << "Enter number of columns: ";
    cin >> cols;

    dynchar2D obj(row, cols);

    cout << "Enter characters for the array:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> ch;
            obj.setValue(i, j, ch);
        }
    }

    cout<<"Outputs:";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < cols; j++) {
            cout << "arr[" << i << "][" << j << "] = ";
            cout<<obj.getValue(i, j)<<endl;
        }
    }

}
