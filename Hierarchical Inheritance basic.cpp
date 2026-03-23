#include<iostream>
using namespace std ;

class parent{
  public :
  void ShowParents(){
    cout << "Hello ! We are parents of child 1 & child 2. " << endl ; 
  }
};
class child1 : public parent{
  public :
  void ShowChild1(){
    cout << "Hello ! I'm the child 1 of parents ! " << endl ;
  }
};
class child2 : public parent{
  public :
  void ShowChild2(){
    cout << "Hello ! I'm the child 2 of the parents !" << endl ;
  }
};
int main(){
    child1 c1 ;
    child2 c2 ;
    c1.ShowParents();
    c1.ShowChild1() ;
    c2.ShowParents() ;
    c2.ShowChild2() ;
    return 0;
}