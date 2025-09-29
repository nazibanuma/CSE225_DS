#include <iostream>
#include "SavingsAccount.h"
#include "CheckingAccount.h"

using namespace std;

int main()
{
    SavingsAccount s1(101, 1000, 0.05);
    CheckingAccount c1(201, 500, 200);

    s1.showDetails();
    s1.addInterest();

    c1.showDetails();
    c1.withdraw(600); // allowed (balance = -100)
    c1.withdraw(200); // deni
    return 0;
}
