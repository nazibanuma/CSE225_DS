#ifndef CHECKINGACCOUNT_H_INCLUDED
#define CHECKINGACCOUNT_H_INCLUDED
#include<iostream>
#include "Account.h"

using namespace std;


class CheckingAccount : public Account
    {
    private:
        int overdraft;
    public:
        CheckingAccount(int acctNo,float balance,int overdraft):Account(acctNo,balance)
        {
            this->overdraft = overdraft;
        }

        void withdraw(float amount) override
        {
            if (balance - amount >= -overdraftLimit)
            {
                balance -= amount;
                cout << "Withdrew: " << amount << ", Balance: " << balance << endl;
            }
        }



    };

#endif // CHECKINGACCOUNT_H_INCLUDED
