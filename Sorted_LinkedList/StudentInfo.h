#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED

#include <iostream>

using namespace std;
class StudentInfo
{
private:
    int ID;
    string Name;
    float CGPA;

public:
    StudentInfo();
    StudentInfo(int, string, float);
    void Print();
    int getID();
    bool operator==(StudentInfo);
};
#endif // STUDENTINFO_H_INCLUDED
