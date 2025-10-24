#include <iostream>
#include "UnsortedType.h"
#include "UnsortedType.cpp"
#include "StudentInfo.h"
using namespace std;

int main()
{

    StudentInfo student1(10, "Numa", 3.59);
    StudentInfo student2(20, "Rabbi", 3.75);
    StudentInfo student3(15, "SRK", 4.00);
    StudentInfo student4(12, "Lucy", 3.5);
    StudentInfo temp;
    bool found;

    UnsortedType<StudentInfo> studentList; // Blank list
    studentList.InsertItem(student1);
    studentList.InsertItem(student2);
    studentList.InsertItem(student3);
    studentList.InsertItem(student4);

    cout << "Print all the data" << endl;

    for(int i=0; i<studentList.LengthIs(); i++)
    {
        studentList.GetNextItem(temp);
        temp.Print();
    }
    studentList.ResetList();

    for(int i=0; i<studentList.LengthIs(); i++)
    {
        studentList.GetNextItem(temp);
        if(temp.getID() == 2)
        {
            studentList.RetrieveItem(temp, found);
            break;
        }
    }
    if(found)
    {
        cout << "student with ID 5 found" << endl;
        temp.Print();
    }
    else
    {
        cout << "student with ID 2 is not found" << endl;
    }
    studentList.ResetList();


    for(int i=0; i<studentList.LengthIs(); i++)
    {
        studentList.GetNextItem(temp);
        if(temp.getID() == 2)
        {
            studentList.DeleteItem(temp);
            break;
        }
    }
    cout << "Print all the data after deletion" << endl;
    studentList.ResetList();
    for(int i=0; i<studentList.LengthIs(); i++)
    {
        studentList.GetNextItem(temp);
        temp.Print();
    }
    studentList.ResetList();

    return 0;
}
