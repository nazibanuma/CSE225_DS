#include <iostream>
#include "UnsortedArr.h"
#include "UnsortedArr.cpp"
#include "studentInfo.h"

using namespace std;

int main()
{
    UnsortedArr<int> list;

    list.InsertItem(5);
    list.InsertItem(7);
    list.InsertItem(6);
    list.InsertItem(9);

    list.PrintInfo();
    list.LengthIs();
    cout<<"\n";

    list.InsertItem(1);
    list.PrintInfo();

    bool found;
    int temp1 =4;
    list.RetrieveItem(temp1,found);

    int temp2 =5;
    list.RetrieveItem(temp2,found);

    int temp3 =9;
    list.RetrieveItem(temp3,found);

    int temp4 =10;
    list.RetrieveItem(temp4,found);

    UnsortedArr<StudentInfo> studentList;

    studentList.InsertItem(StudentInfo(15234, "Jon", 2.6));
    studentList.InsertItem(StudentInfo(13732, "Tyrion", 3.9));
    studentList.InsertItem(StudentInfo(13569, "Sandor", 1.2));
    studentList.InsertItem(StudentInfo(15467, "Ramsey", 3.1));
    studentList.InsertItem(StudentInfo(16285, "Arya", 3.1));

}
