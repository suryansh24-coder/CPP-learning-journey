#include<iostream>
using namespace std ;

class parent{
    public :
    void display(){
    cout << "This is parent class ! " << endl ;
    }
};
class child : public parent{
  public :
  void show(){
    cout << "This is child class !" << endl ;
  }
};
int main(){
   child p ;
   p.display();
   p.show() ;
  return 0; 
}