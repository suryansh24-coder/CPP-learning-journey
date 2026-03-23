#include<iostream>
using namespace std ;

class Animal{
  public : 
   void eat(){
    cout << "--------------------------------------------" << endl ;
    cout << "Animal eats food." << endl ;
    cout << "--------------------------------------------" << endl ;
   }
};
class Mammal : public Animal{
  public :
  void breath(){
    cout << "Mammal Breaths air." << endl ;
    cout << "--------------------------------------------" << endl ;
  }
};
class Dog : public Mammal{
 public :
 void bark(){
    cout << "Dogs use to bark." << endl ; 
    cout << "--------------------------------------------" << endl ;
  }
};
int main(){
    Dog D ;
    D.eat();
    D.breath();
    D.bark();

    return 0 ;
}