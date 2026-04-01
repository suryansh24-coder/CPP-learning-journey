// Takes parameter & initialzed the value :-
#include<iostream>
using namespace std ;

class student{
  int roll ;
  public :
  student(int r); // Paratemeterized constructors :
  void display(){
    cout<< roll ;
  }
};
student :: student(int r){
    roll = r ;
}
int main(){
    student s1(1658);
    s1.display();
    return 0;
}