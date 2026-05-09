#include<iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

protected:
    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        if(amount <= balance)
            balance -= amount;
        else
            cout<<"Insufficient Balance\n";
    }

    void showBalance()
    {
        cout<<"Balance : "<<balance<<endl;
    }

public:
    BankAccount()
    {
        balance = 1000;
    }
};

class Customer : private BankAccount
{
public:
    void performTransaction()
    {
        deposit(500);
        withdraw(300);
        showBalance();
    }
};

int main()
{
    Customer c;
    c.performTransaction();

    return 0;
}