#include<iostream>
using namespace std ;

class Demo{
     public :
     void greet();
};
 // (::) -> Scope Resolution Operator ! 
void Demo :: greet(){
    cout << "Hello ! greeting from this side !" << endl ;
}

int main(){
    Demo D1 ;
    D1.greet();
    return 0 ;
}