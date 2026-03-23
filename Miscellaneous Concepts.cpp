#include<iostream>
using namespace std ;

int main(){
    // Concept of Bitwise Operator :- 
  int a = 6 , b = 10 ;
       cout << (a & b) << endl ; // Bitwise AND (&) : Output Zero ;
       cout << (a | b) << endl ; // Bitwise OR (|) : Output 12 ;
       cout << (a^b) << endl ; // Bitwise XOR (^) : Output  12 ;
       cout << (10 << 2) << endl ; // Bitwise left shift (<<) ;
       cout << (10 >> 1) << endl ; // Bitwise Right shift (>>) ;


    // Data Type Modifiers :- 
      long long int x = 10000000000 ;  // Can run even Without the int :
      short y = 2 ;
      long int z = 100000 ;
      signed int s = -2500000 ;
      unsigned int t = 100000000000 ;

    cout << t << endl ;
    cout << s << endl ;
    cout << y << endl ;
    cout << x << endl ;
    cout << z << endl ;
    
    return 0;
}