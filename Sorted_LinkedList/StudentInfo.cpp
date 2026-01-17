#include "StudentInfo.h"
#include <iostream>

using namespace std;

StudentInfo::StudentInfo()
{
    ID = 0;
    Name = "";
    CGPA = 0.0;
}

StudentInfo::StudentInfo(int id, string name, float cgpa)
{
    ID = id;
    Name = name;
    CGPA = cgpa;
}

void StudentInfo::Print()
{
    cout << ID << " " << Name << " " << CGPA << endl;
}

int StudentInfo::getID()
{
    return ID;
}

bool StudentInfo::operator== (StudentInfo temp)
{
    return ID==temp.getID();
}
