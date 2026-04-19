#include<iostream>
using namespace std ; 

class area{
     public :
     float Area ;
     area(){
       Area = 55 ;
     }
     area(int a , float b){
        Area = a*b ;
     }
     void display(){
        cout << Area << endl ;
     }
};

int main(){
     area A( );
     area A1(5,10);
     A.display() ;
     A1.display() ;
    
    return 0 ;
}