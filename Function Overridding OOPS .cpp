#include<iostream>
using namespace std ;

class animal{
  public :
  void sound(){
    cout << "Animal Bark !!" << endl ; 
  }
};

class cat : public animal{
   public :
   void sound(){
    cout << "Cat meowee !! " << endl ;
   }
};

int main(){
  cat c ;
  animal a ;
  c.sound() ;
  a.sound() ;
    return 0;
}