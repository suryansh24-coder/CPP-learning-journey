#include<iostream>
using namespace std ;

class Shape{
  public :
  void show(){
    cout<< "------------------------------" << endl ;
    cout<< "This is a shape." << endl ;
    cout<< "------------------------------" << endl ;
  }
};
class circle : public Shape{
  public :
  void show_shape1(){
    cout<< "This shape is circle." << endl ;
    cout<< "------------------------------" << endl ;
  } 
};
class rectangle : public Shape{ 
    public :
    void show_shape2(){
    cout << "This shape is rectangle." << endl ;
     cout<< "------------------------------" << endl ;
    }
};
int main(){
    circle c ;
    rectangle R ;
    c.show() ;
    c.show_shape1(); 
    R.show();
    R.show_shape2();
    
    return 0;
}