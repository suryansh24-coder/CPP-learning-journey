#include<iostream>
using namespace std ;

class Student{
  int roll ; 
  static int count; 
  public :
  Student(){
    count++ ;
    roll = count ;
  }
  void display(){
    cout << "Roll Number : " << roll << endl ;
  }
  static void showCount(){
    cout << "Total Students : " << count << endl ;
  }
};

int Student :: count = 0 ;

int main(){
    Student s1,s2,s3 ;
    s1.display();
    s2.display();
    s3.display() ;
    return 0;
}