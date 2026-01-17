#include <iostream>
#include "UnsortedType.h"
#include "UnsortedType.cpp"

using namespace std;

int main()
{
    UnsortedType<int> obj1;
    UnsortedType<int> obj2;
    UnsortedType<int> obj3;

    int m =10;
    int n =12;
    obj1.InsertItem(1);
    obj1.InsertItem(5);
    obj1.InsertItem(6);
    obj1.InsertItem(10);
    obj1.InsertItem(14);
    obj1.InsertItem(20);
    obj1.InsertItem(25);
    obj1.InsertItem(31);
    obj1.InsertItem(38);
    obj1.InsertItem(40);

    obj2.InsertItem(2);
    obj2.InsertItem(4);
    obj2.InsertItem(7);
    obj2.InsertItem(9);
    obj2.InsertItem(16);
    obj2.InsertItem(19);
    obj2.InsertItem(23);
    obj2.InsertItem(24);
    obj2.InsertItem(32);
    obj2.InsertItem(35);
    obj2.InsertItem(36);
    obj2.InsertItem(42);

    obj1.ResetList();
    obj2.ResetList();

    int item1,item2,i=1,j=1;

    obj1.GetNextItem(item1);
    obj2.GetNextItem(item2);

    while(i<=m && j<=n)
    {
        if(item1>item2)
        {
            obj3.InsertItem(item1);
            i++;
            if(i<=m){
                 obj1.GetNextItem(item1);
            }
        }
        else
        {
            obj3.InsertItem(item2);
            j++;
            if(j<=n){
                obj2.GetNextItem(item2);
            }
        }

    }

    while(i<=m)
    {
        obj3.InsertItem(item1);
        i++;
        if(i<=m){
              obj1.GetNextItem(item1);
        }

    }

    while(j<=n)
    {
        obj3.InsertItem(item2);
        j++;
        if(j<=n){
        obj2.GetNextItem(item2);
        }
    }

    for(i=1;i<=m+n;i++){
            int item;
        obj3.GetNextItem(item);
        cout<<item <<" ";
    }




    /* for(i=0; i<(m+n); i++)
     {
         obj1.GetNextItem(item1);
         obj2.GetNextItem(item2);
         if(item1 != NULL || item2 != NULL)
         {
             if(item1<item2)
             {
                 obj3.InsertItem(item1);
             }
             else
             {
                 obj3.InsertItem(item2);
             }
         }
     }
     */
}
