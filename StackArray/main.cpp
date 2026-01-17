#include <iostream>
#include "StackProb.h"
#include "StackProb.cpp"

#include <string>

using namespace std;

int main()
{
    StackProb<int> s1;

    if(s1.IsEmpty())
    {
        cout<< "Stack is Empty"<<endl;
    }
    else
    {
        cout<< "Stack is not Empty"<<endl;
    }

    s1.Push(5);
    s1.Push(7);
    s1.Push(4);
    s1.Push(2);

    if(s1.IsEmpty())
    {
        cout<< "Stack is Empty"<<endl;
    }
    else
    {
        cout<< "Stack is not Empty"<<endl;
    }

    if(s1.IsFull())
    {
        cout<< "Stack is Full"<<endl;
    }
    else
    {
        cout<< "Stack is not Full"<<endl;
    }

    StackProb<int> s2;

    while(!s1.IsEmpty())
    {
        s2.Push(s1.Top());
        s1.Pop();
    }
    /*
    s2.Push(s1.Top());
    s1.Pop();
    s2.Push(s1.Top());
    s1.Pop();
    s2.Push(s1.Top());
    s1.Pop();
    s2.Push(s1.Top());
    s1.Pop();
    */

    while(!s2.IsEmpty())
    {
        cout<<s2.Top()<<" ";

        s1.Push(s2.Top());
        s2.Pop();
    }

    cout<<"\n\n";

    /*
    s1.Push(s2.Top());
    s2.Pop();
    s1.Push(s2.Top());
    s2.Pop();
    s1.Push(s2.Top());
    s2.Pop();
    s1.Push(s2.Top());
    s2.Pop();
     */

    s1.Push(3);


    while(!s1.IsEmpty())
    {
        s2.Push(s1.Top());
        s1.Pop();
    }

    while(!s2.IsEmpty())
    {
        cout<<s2.Top()<<" ";

        s1.Push(s2.Top());
        s2.Pop();
    }

    cout<<"\n\n";

    if(s1.IsFull())
    {
        cout<< "Stack is Full"<<endl;
    }
    else
    {
        cout<< "Stack is not Full"<<endl;
    }

    s1.Pop();
    s1.Pop();

    s1.Top();

    StackProb<char> str;
    string s;

    cout << "Input a string of Parenthesis "<< endl;
    cin >> s;

    for(int i=0; i<s.length(); i++)
    {
        if(s[i]=='(')
        {
            str.Push('(');
        }
        else
        {
            if(str.IsEmpty())
            {
                cout<<"Not Balanced"<<endl;
                return 0;
            }
            str.Pop();
        }

    }
    //(())
    //))((

    if(str.IsEmpty())
    {
        cout<<"Balanced";
    }
    else
    {
        cout<<"Not Balanced";
    }



    return 0;
}
