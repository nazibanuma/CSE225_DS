#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
    int size,value;

    cout<<"Enter array size: ";
    cin>>size;

    dynarr obj(size);

    for(int i=0; i<size; i++)
    {
        cout<<"arr["<<i<<"]= ";
        cin>>value;
        obj.setValue(i,value);
    }

    for(int i=0; i<size; i++)
    {
        cout<<"arr["<<i<<"]= ";
        cout<<obj.getValue(i)<<endl;
    }

}
