#include<iostream>
using namespace std;

class base{
public:
    void show(){
        cout << "Base class !" << endl;
    }
};

class derived : public base{
public:
    void show(){
        cout << "Derived class !" << endl;
    }
};

void display(){
    base b;     
    b.show();    
}

int main(){
    display();
    return 0;
}