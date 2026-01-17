#include <iostream>
#include "sortedtype.h"
#include "sortedtype.cpp"

#include "timeStamp.h"

using namespace std;

int main()
{
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

    timeList.DeleteItem(t6);

    timeStamp temp;
    cout << "Print all the data: " << endl;
    for (int i = 0; i < timeList.LengthIs(); i++)
    {
        timeList.GetNextItem(temp);
        temp.Print();
    }
    return 0;
}
