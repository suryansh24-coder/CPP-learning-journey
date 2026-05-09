#include<iostream>
using namespace std;

class Bank
{
private:
    int balance;

public:
    Bank(int b)
    {
        balance = b;
    }

    friend void transfer(Bank &,Bank &,int);

    void display()
    {
        cout<<"Balance : "<<balance<<endl;
    }
};

void transfer(Bank &a,Bank &b,int amount)
{
    a.balance -= amount;
    b.balance += amount;
}

int main()
{
    Bank acc1(5000), acc2(3000);

    transfer(acc1,acc2,1000);

    acc1.display();
    acc2.display();

    return 0;
}