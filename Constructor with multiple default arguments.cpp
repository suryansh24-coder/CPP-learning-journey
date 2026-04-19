#include<iostream>
using namespace std ;

class Box {
  public :
  int length , breadth , Height ;
  Box(int l=5 , int w=6 , int h = 7){
    length =l ;
    breadth = w ;
    Height =  h ;
  }
  void display(){
    cout << "Lenght : " << length <<endl ;
    cout << "Breadth : " << breadth <<endl ;
    cout << "Height : " << Height << endl ;
    cout << "---------------------------" << endl ;
  }
};

int main(){
    Box box1 ;
    Box box2(5,6) ;
    Box box3(1,2,30) ;
    box1.display();
    box2.display();
    box3.display() ;
    return 0 ;
}