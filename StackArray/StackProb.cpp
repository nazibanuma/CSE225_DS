#include "StackProb.h"
template <class ItemType>
StackProb<ItemType>::StackProb()
{
    top = -1;
}


template <class ItemType>
bool StackProb<ItemType>::IsEmpty()
{
    return (top == -1);
}


template <class ItemType>
bool StackProb<ItemType>::IsFull()
{
    return (top == MAX_ITEMS-1);
}


template <class ItemType>
void StackProb<ItemType>::Push(ItemType newItem)
{
    if( IsFull() ) throw FullStack();
    top++;
    items[top] = newItem;
}


template <class ItemType>
void StackProb<ItemType>::Pop()
{
    if( IsEmpty() ) throw EmptyStack();
    top--;
}


template <class ItemType>
ItemType StackProb<ItemType>::Top()
{
    if (IsEmpty()) throw EmptyStack();
    return items[top];
}
