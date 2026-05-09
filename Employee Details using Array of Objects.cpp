#include<iostream>
using namespace std;

class Employee
{
private:
    int id;
    string name;
    float salary;

public:
    Employee()
    {
    }

    Employee(int i,string n,float s)
    {
        id = i;
        name = n;
        salary = s;
    }

    void display()
    {
        cout<<"ID : "<<id<<endl;
        cout<<"Name : "<<name<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};

int main()
{
    Employee e[2];
    int id;
    string name;
    float salary;

    for(int i=0;i<2;i++)
    {
        cout<<"Enter ID Name Salary : ";
        cin>>id>>name>>salary;

        e[i] = Employee(id,name,salary);
    }

    for(int i=0;i<2;i++)
    {
        e[i].display();
        cout<<endl;
    }

    return 0;
}