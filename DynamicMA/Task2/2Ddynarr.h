#ifndef 2DDYNARR_H_INCLUDED
#define 2DDYNARR_H_INCLUDED
#include <iostream>

using namespace
class 2Ddynarr
{
private:
    int **arr;
    int row;
    int col;
public:
    2Ddynarr(int row,int col)
    {
        this->row= row;
        this->col= col;

        arr = new int *[row];
        for(int i=0; i<row; i++)
        {
            arr[i] = new int[col];

        }
    }
    void setValue(int i, int j, char value)
    {
        arr[i][j] = value;
    }

    char getValue(int i, int j)
    {
        return arr[i][j];
    }

    ~dynchar2D()
    {
        for (int i = 0; i < rows; i++)
        {
            delete[] arr[i];
        }
        delete[] arr;
    }
};


#endif // 2DDYNARR_H_INCLUDED
