#include<iostream>
using namespace std ;

class Test{
     int *p ;
     public :
    Test(){
        p = new int ; // Allocate Memory
        *p = 100 ; 
    }
    void show(){
        cout << "Value :" << *p << endl ;
    }
 ~Test(){
    delete p ; // Free Memory :
  }
};
int main(){
Test T;
T.show() ;
    return 0;
}