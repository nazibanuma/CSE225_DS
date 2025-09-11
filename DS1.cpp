#include<iostream>

using namespace std;

int main()
{
    int num,element;

    cout <<"Enter array size: ";
    cin >> num;

    int *a;
    a = new int[num];

    for(int i=0; i<num; i++)
    {
        cout <<"a["<<i<<"] = ";
        cin >>element;
        a[i] = element;
    }

     for(int i=0; i<num; i++)
    {
        cout <<"a["<<i<<"] = "<<a[i]<<endl;

    }

    delete [] a;
    return 0;

}

