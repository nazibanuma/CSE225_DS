#include <iostream>
#include "dynarr.h"

using namespace std;

int main()
{
    dynarr c1(4,5),c2(3,2);

    //dynarr c3 = c1.multiplication(c2);
    dynarr c3 = c1*c2;
    c3.print();

    return 0;
}
