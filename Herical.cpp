#include<iostream>
using namespace std;

class Employee
{
protected:
    int id;
    string name;

public:
    void getEmployee()
    {
        cout<<"Enter Employee ID : ";
        cin>>id;

        cout<<"Enter Employee Name : ";
        cin>>name;
    }

    void showEmployee()
    {
        cout<<"\nEmployee ID : "<<id;
        cout<<"\nEmployee Name : "<<name;
    }
};

class Manager : public Employee
{
private:
    double salary;

public:
    void getManager()
    {
        getEmployee();

        cout<<"Enter Manager Salary : ";
        cin>>salary;
    }

    void showManager()
    {
        showEmployee();

        cout<<"\nManager Salary : "<<salary;
    }
};

class Developer : public Employee
{
private:
    string language;

public:
    void getDeveloper()
    {
        getEmployee();

        cout<<"Enter Programming Language : ";
        cin>>language;
    }

    void showDeveloper()
    {
        showEmployee();

        cout<<"\nProgramming Language : "<<language;
    }
};

class Tester : public Employee
{
private:
    int bugs;

public:
    void getTester()
    {
        getEmployee();

        cout<<"Enter Number of Bugs Found : ";
        cin>>bugs;
    }

    void showTester()
    {
        showEmployee();

        cout<<"\nBugs Found : "<<bugs;
    }
};

int main()
{
    Manager m;
    Developer d;
    Tester t;

    cout<<"\n----- Enter Manager Details -----\n";
    m.getManager();

    cout<<"\n----- Enter Developer Details -----\n";
    d.getDeveloper();

    cout<<"\n----- Enter Tester Details -----\n";
    t.getTester();

    cout<<"\n\n===== Manager Details =====\n";
    m.showManager();

    cout<<"\n\n===== Developer Details =====\n";
    d.showDeveloper();

    cout<<"\n\n===== Tester Details =====\n";
    t.showTester();

    return 0;
}