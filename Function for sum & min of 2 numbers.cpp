#include<iostream>
using namespace std ;

int SumNum(int a , int b){
    cout << "The sum of numbers are  :"<< a+b << endl;
  return a+b ;
}
int minNum(int a, int b){
    if(a>b){
        cout << "B is minimum : "<< b << endl ;
    }
    else{
        cout<< "A is minimum with value : "<< a << endl ;
    }
}

int main(){
    int a,b ;
         cout << "Enter the value of A : " ;
         cin >> a ;
         cout << "Enter the value of B : " ;
         cin >> b;
    SumNum(a,b);
    minNum(a,b);

    return 0;
}