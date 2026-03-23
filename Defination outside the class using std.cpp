#include<iostream>
using namespace std ;
class car{
  public :
  void drive();
};

void car :: drive(){
  cout <<  "I'm Driving the car ! " << endl ;
  }

  int main(){
    car C ;
    C.drive() ;
    return  0 ;
  }