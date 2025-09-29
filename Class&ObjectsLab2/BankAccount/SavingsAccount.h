#ifndef SAVINGSACCOUNT_H_INCLUDED
#define SAVINGSACCOUNT_H_INCLUDED
#include "Account.h"

#include<iostream>

using namespace std;

class SavingsAccount : public Account
    {
    private:
        int interest;
    public:
        SavingsAccount(int acctNo,float balance,int interest):Account(acctNo,balance)
        {
            this->interest = interest;
        }
        void addInterest()
        {
            float interestAmount = balance * interest;
            balance = balance+ interestAmount;
        }



    };


#endif // SAVINGSACCOUNT_H_INCLUDED
