#include<iostream>
using namespace std ;
class Complex{
    int a,b ;
    public :
    Complex(void){  // Initializing the value to avoid the garbage value : Initialization inside the class !
        a = 110 ;
        b = 1200 ; 
    } 
    void printData(){
        cout << "Your number is : " << a << " + " << b << "i" << endl ; 
    }
};

int  main(){
   Complex c1 ,c2 , c3 ;
     c1.printData();
     c2.printData();
     c3.printData();

    return 0;
}