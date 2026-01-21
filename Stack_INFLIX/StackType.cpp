#include <iostream>
#include "stacktype.h"
using namespace std;


template <class ItemType>
StackType<ItemType>::StackType()
{
    topPtr = NULL;
}

template <class ItemType>
bool StackType<ItemType>::IsEmpty()
{
    return (topPtr == NULL);
}
template <class ItemType>
ItemType StackType<ItemType>::Top()
{
    if (IsEmpty())
        throw EmptyStack();
    else
        return topPtr->info;
}

template <class ItemType>
bool StackType<ItemType>::IsFull()
{
    NodeType* location;
    try
    {
        location = new NodeType;
        delete location;
        return false;
    }
    catch(bad_alloc& exception)
    {
        return true;
    }
}
template <class ItemType>
void StackType<ItemType>::Push(ItemType newItem)
{
    if (IsFull())
        throw FullStack();
    else
    {
        NodeType* location;
        location = new NodeType;
        location->info = newItem;
        location->next = topPtr;
        topPtr = location;
    }
}
template <class ItemType>
void StackType<ItemType>::Pop()
{
    if (IsEmpty())
        throw EmptyStack();
    else
    {
        NodeType* tempPtr;
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}
template <class ItemType>
StackType<ItemType>::~StackType()
{
    NodeType* tempPtr;
    while (topPtr != NULL)
    {
        tempPtr = topPtr;
        topPtr = topPtr->next;
        delete tempPtr;
    }
}
/*
Read the expression from left to right.
1. If an operand (A-Z, 0-9) is encountered, add it directly to the output.
2. If an operator is encountered:
   1. Pop operators from the stack to the output if they have higher or equal precedence.
   2. Push the current operator onto the stack.
3. If an opening parenthesis ( is found, push it onto the stack.
4. If a closing parenthesis ) is found, pop operators from the stack to the output until an opening parenthesis is encountered.
5. After scanning the entire expression, pop any remaining operators from the stack
 to the output.

 */


 template <class ItemType>
void StackType<ItemType>::InfixToPost(ItemType newItem)
{

}


template <class ItemType>
void StackType<ItemType>::Evaluate()
{

}
