#include<iostream>
using namespace std;

class Student{
protected:
    string name;
    int marks;

public:
    void getdata(string n,int m);
    void display();

    int result(int m1,int m2){
        return m1 + m2;
    }

    float result(float m1,float m2,float m3){
        return (m1+m2+m3)/3;
    }
};

void Student::getdata(string n,int m){
    name=n;
    marks=m;
}

void Student::display(){
    cout<<"Name: "<<name<<endl;
    cout<<"Marks: "<<marks<<endl;
}

class Topper : public Student{
public:
    void display(){
        cout<<"Topper Student"<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Marks: "<<marks<<endl;
    }
};

int main(){

    Student s;
    Topper t;

    s.getdata("Rahul",85);
    s.display();

    cout<<"Total Marks (Overloading int): "<<s.result(40,45)<<endl;
    cout<<"Average Marks (Overloading float): "<<s.result(70.5f,80.5f,90.0f)<<endl;

    t.getdata("Suryansh",95);
    t.display();

    return 0;
}