#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
   int main() {
    int rows;

    cout << "Enter number of rows: ";
    cin >> rows;

    dynarr obj(rows);


    for (int i = 0; i < rows; i++) {
        int cols;
        cout << "Enter number of cols for row " << i << ": ";
        cin >> cols;
        obj.setRowSize(i, cols);


        for (int j = 0; j < cols; j++) {
            int val;
            cout << "arr[" << i << "][" << j << "] = ";
            cin >> val;
            obj.setValue(i, j, val);
        }
    }


    obj.printArray();

    return 0;
}
