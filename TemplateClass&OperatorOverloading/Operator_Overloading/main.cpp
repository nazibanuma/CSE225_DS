#include <iostream>
#include "ComplexPlus.h"

using namespace std;

int main()
{
    ComplexPlus c1(4,5),c2(3,2);

    ComplexPlus c3 = c1+c2;
    c3.Print();
    return 0;
}
