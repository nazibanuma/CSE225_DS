#include "UnsortedType.h"
#include <iostream>
using namespace std;
template <class ItemType>
UnsortedType<ItemType>::UnsortedType()
{
    length = 0;
    currentPos = -1;
}
template <class ItemType>
void UnsortedType<ItemType>::MakeEmpty()
{
    length = 0;
}
template <class ItemType>
bool UnsortedType<ItemType>::IsFull()
{
    return (length == MAX_ITEMS);
}
template <class ItemType>
int UnsortedType<ItemType>::LengthIs()
{
    return length;
}
template <class ItemType>
void UnsortedType<ItemType>::ResetList()
{
    currentPos = -1;
}
template <class ItemType>
void
UnsortedType<ItemType>::GetNextItem(ItemType&
                                    item)
{
    currentPos++;
    item = info [currentPos] ;
}
template <class ItemType>
void
UnsortedType<ItemType>::RetrieveItem(ItemType&
                                     item, bool &found)
{
    int location = 0;
    found = false;
    for(location = 0; location<length; location++)
    {
        if(item == info[location])
        {
            found = true;
            item = info[location];
            break;
        }
    }
}
template <class ItemType>
void UnsortedType<ItemType>::InsertItem(ItemType
                                        item)
{
    info[length] = item;
    length++;
}
template <class ItemType>
void UnsortedType<ItemType>::DeleteItem(ItemType
                                        item)
{
    int i;
    for(i=0; i<length; i++)
    {
        if(item == info[i])
        {
            break;
        }
    }
    info[i] = info[length - 1];
    length--;
}

/*
template <class ItemType>
void UnsortedType<ItemType>::PrintList()
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
*/
