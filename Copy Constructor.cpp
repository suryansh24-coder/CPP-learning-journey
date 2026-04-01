// Copy constructor in cpp : copies one object to another
#include<iostream>
using namespace std ;

class student{
      int roll ;
    public :
    student(int r) ; // default constructor :
    student(const student &s); // Copy constructor :
    void display(){
        cout << roll ;
    }
};
student :: student(int r){
    roll = r ;
}
student :: student(const student &s){
    roll = s.roll ;
}
int main(){
    student s1(200);
    student s2 = s1 ;
    s2.display();
    return 0 ;
}