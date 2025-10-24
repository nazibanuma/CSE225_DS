#ifndef STUDENTINFO_H_INCLUDED
#define STUDENTINFO_H_INCLUDED

#include <iostream>
#include <string>
using namespace std;

class StudentInfo
{
private:
    int id;
    string name;
    float cgpa;

public:

    StudentInfo();
    StudentInfo(int id, string name, float cgpa);

    void SetStudent(int id, string name, float cgpa);

    int GetID() const;
    string GetName() const;
    float GetCGPA() const;
};

#endif // STUDENTINFO_H_INCLUDED
