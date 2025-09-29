#include <iostream>

using namespace std;

int main()
{
    int first;
    int second;
    int third;

    cout<<"Enter first integer: ";
    cin>>first;
    cout<<"Enter second integer: ";
    cin>>second;
    cout<<"Enter third integer: ";
    cin>>third;

    int largest;

    if(first>second && first>third)
    {
        largest = first;
    }
    else if(second>first && second>third)
    {
        largest = second;
    }
    else
    {
        largest = third;
    }

    cout<<"Largest digit out of 3: "<<largest;
    return 0;
}
