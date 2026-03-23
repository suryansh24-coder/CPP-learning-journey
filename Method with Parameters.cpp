#include<iostream>
using namespace std ;

class Calculator{
    public :
    int a,b;
    void sum(){
        cout << "The sum is : \t" << a+b << endl; 
    }
};

int main(){
    Calculator c;
    // c.a = 5;
    // c.b = 6 ;
    cout << "Enter 1st variable : " <<  endl ;
    cin >> c.a ; 
    cout << "Enter 2nd variable : " << endl ;
    cin >> c.b ; 
    c.sum();
    return 0;
}