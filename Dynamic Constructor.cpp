// Used when we initialze the obj with dynamic memory allocation :-
#include<iostream>
using namespace std ;

class Array{
  int *p ;
  int size ;
  public:
  Array(int s){
    size = s ;
    p = new int[size] ; // Dynamic memory allocation :
  }
  void getData(){
    for(int i=0 ; i < size ; i++ ){
        cin >> p[i] ;
    }
  }
  void display(){
    for(int i=0 ; i< size ;i++){
        cout << p[i] << " " ;
    }
  }

// Destructor to free memory :-
~Array(){
   delete []p;
 }
};

int main(){
    int n ;
    cout << "Enter the size : \t" ;
    cin >> n ;
    Array a(n) ; // Dynamic constructor called
    a.getData();
    a.display();
    a.~Array(); 
   return 0;
}