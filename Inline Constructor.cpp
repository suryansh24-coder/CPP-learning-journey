#include<iostream>
using namespace std ;

class Demo{
  int x;
  public :
  // inline Demo(int a){}
  Demo(int a){
    x=a ;
  }
  void display(){
    cout << "Value of x : " << x << endl; 
  }
};

int main(){
    Demo d1(10);
    d1.display();
    return 0;
}