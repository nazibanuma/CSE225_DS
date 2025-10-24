#ifndef COMPLEXPLUS_H_INCLUDED
#define COMPLEXPLUS_H_INCLUDED

#include<iostream>

using namespace std;

class ComplexPlus
{
private:
    double real;
    double imaginary;
public:
    ComplexPlus()
    {
        real = 0;
        imaginary = 0;
    }
    ComplexPlus(double real,double imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    ComplexPlus operator+(ComplexPlus a)
    {
        ComplexPlus t;
        t.real = real + a.real;
        t.imaginary = imaginary + a.imaginary;
        return t;
    }

    void Print()
    {
        cout<<real<<"+"<<imaginary<<endl;
    }
};


#endif // COMPLEXPLUS_H_INCLUDED
