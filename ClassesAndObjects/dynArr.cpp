#include "dynArr.h"
#include <iostream>

using namespace std;

dynArr::dynArr()
{
    data = NULL;
    size = 0;
}
dynArr::dynArr(int size)
{
    data = new int[size];
    this->size = size;
}
dynArr::~dynArr()
{
    delete [] data;
}
void dynArr::setValue(int index, int value)
{
    data[index] = value;
}
int dynArr::getValue(int index)
{
    return data[index];
}

