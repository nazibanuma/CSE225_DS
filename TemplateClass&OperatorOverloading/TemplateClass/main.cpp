#include <iostream>
#include "dynarr.h"
#include "dynarr.cpp"

using namespace std;

int main()
{
    dynarr<int> obj(5);
    int value;

    for(int i =0; i<5; i++)
    {
        cout<<"Enter an value:";
        cin>>value;
        obj.setValue(i,value);
    }


    for(int i =0; i<5; i++)
    {
        cout<<"array["<<i<<"]="<<obj.getValue(i)<<endl;
    }

    return 0;
}
