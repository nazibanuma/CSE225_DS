#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED

#include <iostream>
using namespace std;

class dynarr
{
    dynarr(int r)
    {
        rows = r;
        arr = new int*[rows];
        colSize = new int[rows];
        for (int i = 0; i < rows; i++)
        {
            arr[i] = nullptr;
            /
            colSize[i] = 0;
        }
    }


    void setRowSize(int row, int cols)
    {
        if (row >= 0 && row < rows)
        {
            arr[row] = new int[cols];
            colSize[row] = cols;
        }
    }


    void setValue(int i, int j, int val)
    {
        if (i >= 0 && i < rows && j >= 0 && j < colSize[i])
        {
            arr[i][j] = val;
        }
    }


    int getValue(int i, int j)
    {
        return arr[i][j];
    }


    void printArray()
    {

        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < colSize[i]; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }

    ~dynarr()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] arr[i];
        }
        delete[] arr;
        delete[] colSize;
    }
};


#endif // DYNARR_H_INCLUDED
