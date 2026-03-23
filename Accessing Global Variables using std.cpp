#include<iostream>
using namespace std ;

int x=10 ;

int main(){
    int x = 5 ;
    std :: cout << "Local X !"<< x << endl ;
    std :: cout << "Global X !" << :: x << endl ;
    return 0;
}