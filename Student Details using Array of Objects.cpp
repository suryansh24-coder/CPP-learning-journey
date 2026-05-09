#include<iostream>
using namespace std;

class Student
{
private:
    int rollno;
    int marks;

public:
    Student()
    {
    }

    Student(int r,int m)
    {
        rollno = r;
        marks = m;
    }

    void display()
    {
        cout<<"Roll No : "<<rollno<<endl;
        cout<<"Marks : "<<marks<<endl;
    }
};

int main()
{
    Student s[3] = {
        Student(1,85),
        Student(2,90),
        Student(3,78)
    };

    for(int i=0;i<3;i++)
    {
        s[i].display();
        cout<<endl;
    }

    return 0;
}