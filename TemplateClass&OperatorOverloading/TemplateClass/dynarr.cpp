#include<iostream>
#include "dynarr.h"

using namespace std;

template <typename T>
dynarr<T>::dynarr()
{
    data = nullptr;
    size = 0;
}
template <typename T>
dynarr<T>::dynarr(int size)
{
    data = new T[size];
    this->size = size;
}
template <typename T>
dynarr<T>::~dynarr()
{
    delete [] data;
}
template <typename T>
void dynarr<T>:: setValue(int index, T value)
{
    data[index] = value;
}
template <typename T>
T dynarr<T>:: getValue(int index)
{
    return data[index];
}

