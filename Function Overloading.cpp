#include<iostream>
using namespace std ;

class Print{
     public :
         void display(int x){
         cout << x << endl ;
         }
         void display(double y){
            cout << y << endl ;
         }
         void display(int s ,int z){
            cout << s  << z << endl ;
         }
};

int main(){
    Print Obj ;
    Obj.display(10);
    Obj.display(12.99) ;
    Obj.display(15,30) ;
    return 0;
}