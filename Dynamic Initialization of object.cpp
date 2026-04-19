#include<iostream>
using namespace std ;

class Student{
  int roll ;
  float marks ;
  public :
  Student(int r , int m){
     roll = r ;
     marks = m ; 
  }
  void display(){
    cout <<"ROll : " << roll << endl ;
    cout << "MARKS : " << marks <<endl ;
  }
};

int main(){
    Student s1(101 , 89.5);
    s1.display();
    return 0;
}