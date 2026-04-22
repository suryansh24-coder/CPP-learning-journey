#include<iostream>
using namespace std ;

class Demo{
 int x ;
 public :
 Demo(int a){
    x = a;
 }
 void display(){
    cout << "Value of X :" << x << endl ;
 }
};
int main(){
    Demo d1(10);
    d1.display();
    return 0;
}