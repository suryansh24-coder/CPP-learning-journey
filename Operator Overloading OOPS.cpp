#include<iostream>
using namespace std ;

class complex{
    public :
    int real ,imag ;
    complex(int r, int i){
        real = r ;
        imag = i ; 
    }
    complex operator + (complex c ){
        return complex(real + c.real , imag + c.imag) ;
    }
    void  display(){
        cout << real << "+" << imag << "i" ; 
    }
};
int main(){
    int j,k,l,m ;
    cout << "Enter the 1st values : " << " " ;
    cin >> j ;
    cout << "Enter the 2nd values : " << " " ;
    cin >> k ;
    cout << "Enter the 3rd values : " << " " ;
    cin >> l ;
    cout << "Enter the 4th values : " << " " ;
    cin >> m ;
    complex c1 (j,k) ;
    complex c2 (l,m) ;
    complex c3 = c1 + c2 ;
    c3.display() ;
    return 0;
}