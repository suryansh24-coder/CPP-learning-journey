#include<iostream>
using namespace std ;

class A{
   public :
     void show(){
        cout << "I am Base" << endl ;
     }
};

class B : public A {
    public :
       void show(){
        cout << "I am derived " << endl ;
       }
};

int main(){
    B b1 ;
    B b2 ;
      b1.show();
      b2.A :: show();
    return 0;
}