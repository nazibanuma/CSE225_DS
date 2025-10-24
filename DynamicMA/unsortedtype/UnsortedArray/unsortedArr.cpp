#include "UnsortedArr.h"
#include <iostream>
using namespace std;


template <class ItemType>
UnsortedArr<ItemType>::UnsortedArr()
{
    length = 0;
    currentPos = -1;
}
template <class ItemType>
void UnsortedArr<ItemType>::MakeEmpty()
{
    length = 0;
}
template <class ItemType>
bool UnsortedArr<ItemType>::IsFull()
{
    return (length == MAX_ITEMS);
}
template <class ItemType>
int UnsortedArr<ItemType>::LengthIs()
{
    cout<<length;
    return length;
}
template <class ItemType>
void UnsortedArr<ItemType>::ResetList()
{
    currentPos = -1;
}
template <class ItemType>
void
UnsortedArr<ItemType>::GetNextItem(ItemType&
                                   item)
{
    if(IsFull())
    {
        cout<<"Array has ended";

    }
    else
    {
        currentPos++;
        item = info [currentPos] ;
    }
}

template <class ItemType>
void
UnsortedArr<ItemType>::RetrieveItem(ItemType&
                                    item, bool &found)
{
    int location = 0;
    bool moreToSearch = (location < length);
    found = false;
    while (moreToSearch && !found)
    {
        if(item == info[location])
        {
            found = true;
            item = info[location];
             cout<<"The number "<<item<<" is found"<<"\n";
        }
        else
        {
            location++;
            moreToSearch = (location < length);

        }
    }

}
template <class ItemType>
void UnsortedArr<ItemType>::InsertItem(ItemType
                                       item)
{
    if(IsFull())
    {
        cout<<"Array is full";

    }
    else
    {
        info[length] = item;
        length++;
    }

}
template <class ItemType>
void UnsortedArr<ItemType>::DeleteItem(ItemType
                                       item)
{
    for(int i=0; i<length; i++)
    {
        if(item == info[i])
        {
            break;
        }
        info[i] = info[length-1];
        length--;
    }

}

template <class ItemType>
void UnsortedArr<ItemType>:: PrintInfo()
{
    for (int i = 0; i < length; i++){
         cout << info[i] << " ";
    }

    cout << endl;
}
