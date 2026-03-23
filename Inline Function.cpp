#include<iostream>
using namespace std ;

inline int square(int x){
    cout << "Square of " << x << " is : " << x*x << endl ;  
    return x*x ;
}
int main(){
    int x ;
    cout << "Enter the value of x "  << " ";
    cin >> x ;
    square(x);
    return 0;
}