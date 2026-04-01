// Default Constructor :-
#include<iostream>
using namespace std ;
// Note : that the name of class and constructors must be same !
class Complex{
    int a,b ;
    public :
    Complex(void); // Constructor declaration :  
    void printData(){
        cout << "Your number is : " << a << " + " << b << "i" << endl ; 
    }
};

Complex :: Complex(void){  // Initializing the value to avoid the garbage value :
   a = 110 ;
   b = 1200 ; 
}

int  main(){
   Complex c1 ,c2 , c3 ;
     c1.printData();
     c2.printData();
     c3.printData();

    return 0;
}