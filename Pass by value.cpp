#include<iostream>
using namespace std ;

int SUM(int a, int b){
    a += 10;
    b += 10;
    cout << "The sum of numbers  : " << a+b << endl;
    
    return a+b ;
}
int main(){
    int a ,b ;
    cout << "Enter the value of A : "  ;
    cin >> a ;
    cout << "Enter the value of B : "  ;
    cin >> b ;
    cout << "The sum of respective numbers is : " << SUM(a,b)<< endl ;
    cout << "Value of A : " << a  << endl ;
    cout << "Value of B : " << b  << endl ;
    return 0; 
}