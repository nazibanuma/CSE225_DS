#ifndef DYNARR_H_INCLUDED
#define DYNARR_H_INCLUDED
#include<iostream>

using namespace std;

class dynarr
{
private:
    int real;
    int imaginary;

public:
    dynarr()
    {
        real = 0;
        imaginary = 0;
    }
    dynarr(int real,int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    dynarr operator*(dynarr a)
    {
        dynarr p;
        p.real = (real*a.real)-(imaginary*a.imaginary);
        p.imaginary =(real*a.imaginary)+(a.real*imaginary);
        return p;
    }

    void print()
    {
        cout<<real <<"+"<<imaginary<<"i"<<endl;
    }

};

#endif // DYNARR_H_INCLUDED
