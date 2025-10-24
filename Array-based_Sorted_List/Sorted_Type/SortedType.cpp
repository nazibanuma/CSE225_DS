#include "sortedtype.h"
#include<iostream>

using namespace std;

template <class ItemType>

SortedType<ItemType>::SortedType()
{
    length = 0;
    currentPos = - 1;
}
template <class ItemType>
void SortedType<ItemType>::MakeEmpty()
{
    length = 0;
}
template <class ItemType>
bool SortedType<ItemType>::IsFull()
{
    return (length == MAX_ITEMS);
}
template <class ItemType>
bool SortedType<ItemType>::IsEmpty()
{
    return (length <= 0);
}
template <class ItemType>
int SortedType<ItemType>::LengthIs()
{

    return length;
}
template <class ItemType>
void SortedType<ItemType>::ResetList()
{
    currentPos = - 1;
}
template <class ItemType>
void SortedType<ItemType>::GetNextItem(ItemType& item)
{
    currentPos++;
    item = info [currentPos];
}

template <class ItemType>
void SortedType<ItemType>::InsertItem(ItemType item)
{
    if(IsFull())
    {
        cout<<"array full";
    }
    else
    {
        int i,j;

        for(i=0; i<length; i++)
        {
            if(info[i]>item)
            {
                break;
            }

        }
        for(j=length-1; j>=i; j--)
        {
            info[j+1] = info[j];
        }
        info[i] = item;
        length++;
    }
}

template <class ItemType>
void SortedType<ItemType>::DeleteItem(ItemType item)
{
    if(IsEmpty())
    {
        cout<<"Array is Empty";
    }
    else
    {
        int i, j;
        for (i = 0; i < length; i++)
        {
            if (info[i] == item)
            {

                for (j = i + 1; j < length; j++)
                {
                    info[j - 1] = info[j];
                }
                length--;
                break;
            }
        }
    }
}
/*
template <class ItemType>
void SortedType<ItemType>::DeleteItem(ItemType item)
{
    if(IsEmpty())
    {
        cout<<"Array is Empty";
    }
    else
    {
        int mid, first = 0, last = length - 1;
        found = false;
        while (first <= last && !found)
        {
            mid = (first + last) / 2;
            if(item < info[mid])
            {
                last = mid- 1;
                first <= last;
            }
            else if(item > info[mid])
            {
                first = mid + 1;
                first <= last;
            }
            else
            {
                found = true;
                for(int j=mid+1; j<=length; j++)
                {
                    info[j-1] = info[j];
                }
                length--;
                item = info[mid];
            }
        }


    }
}
*/
template <class ItemType>
void SortedType<ItemType>::RetrieveItem(ItemType& item, bool& found)
{
    int mid, first = 0, last = length - 1;
    found = false;
    while (first <= last)
    {
        mid = (first + last) / 2;
        if(item < info[mid])
        {
            last = mid- 1;
        }
        else if(item > info[mid])
        {
            first = mid + 1;
        }
        else
        {
            found = true;
            item = info[mid];
            break;
        }

    }
    if(found==true)
    {
        cout<<"item has been found"<<endl;
    }
    else
    {
        cout<<"item has not been found"<<endl;
    }
}

template <class ItemType>
void SortedType<ItemType>::Print()
{
    int temp;
    for(int i=0; i<LengthIs(); i++)
    {
        GetNextItem(temp);
        cout << temp << " ";
    }
    cout << endl;
    ResetList();
}

