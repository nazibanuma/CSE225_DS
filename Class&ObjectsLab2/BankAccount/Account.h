#ifndef ACCOUNT_H_INCLUDED
#define ACCOUNT_H_INCLUDED

#include<iostream>

using namespace std;

class Account
{
private:
    int acctNo;
    float balance;
public:
    Account(int acctNo,float balance)
    {
        this->acctNo = acctNo;
        this->balance = balance;
    }
    void deposit(int amount)
    {
        balance = balance + amount;
    }

    void withdraw(int amount)
    {
        balance = balance - amount;
    }

    void showDetails()
    {
        cout<<"Account number: "<<acctNo<<endl;
        cout<<"Balace: "<<balance;

    }


};

#endif // ACCOUNT_H_INCLUDED
