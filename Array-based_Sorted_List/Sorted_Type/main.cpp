#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"
#include "timeStamp.h"

using namespace std;

int main()
{
    SortedType<int> list;


    cout<<"length is "<<list.LengthIs()<<endl;
    list.InsertItem(5);
    list.InsertItem(7);
    list.InsertItem(4);
    list.InsertItem(2);
    list.InsertItem(1);

    list.Print();

    bool found;
    int item =6;

    list.RetrieveItem(item,found);
    item =5;
    list.RetrieveItem(item,found);
    if(list.IsFull())
    {
        cout<<"list is full"<<endl;
    }
    else
    {
        cout<<"list is not full"<<endl;
    }

    list.DeleteItem(1);

    list.Print();
    if(list.IsFull())
    {
        cout<<"list is full"<<endl;
    }
    else
    {
        cout<<"list is not full"<<endl;
    }

    SortedType<timeStamp> timeList;

    timeStamp t1(15, 34, 23);
    timeStamp t2(13, 13, 2);
    timeStamp t3(43, 45, 12);
    timeStamp t4(25, 36, 17);
    timeStamp t5(52, 2, 20);
    timeStamp t6(25,36,17);


    timeList.InsertItem(t1);
    timeList.InsertItem(t2);
    timeList.InsertItem(t3);
    timeList.InsertItem(t4);
    timeList.InsertItem(t5);

    timeList.ResetList();

     cout << "Print all the data: " << endl;
    timeStamp temp;
    for (int i = 0; i < timeList.LengthIs(); i++)
    {
        timeList.GetNextItem(temp);
        temp.Print();

    }

    cout<<"\n\n";
    timeList.DeleteItem(t6);

    timeList.ResetList();
    for (int i = 0; i < timeList.LengthIs(); i++)
    {
        timeList.GetNextItem(temp);
        temp.Print();
    }
    return 0;
}
