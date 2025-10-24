#include "studentInfo.h"
#include <iostream>
using namespace std;


StudentInfo::StudentInfo()
{
    id = 0;
    name = "";
    cgpa = 0.0;
}


StudentInfo::StudentInfo(int id, string name, float cgpa)
{
    this->id = id;
    this->name = name;
    this->cgpa = cgpa;
}


void StudentInfo::SetStudent(int id, string name, float cgpa)
{
    this->id = id;
    this->name = name;
    this->cgpa = cgpa;
}


int StudentInfo::GetID()
{
    return id;
}
string StudentInfo::GetName()
{
    return name;
}
float StudentInfo::GetCGPA()
{
    return cgpa;
}
