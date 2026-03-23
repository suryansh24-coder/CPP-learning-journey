#include<iostream>
using namespace std ;

int FactN(int n){
    int fact=1 ;
    for(int i=1 ; i<=n ; i++){
        fact*=i;
    }
    return fact ;
}
int main(){
    int n;
      cout << "Enter the value of N : " << endl ; 
      cin >> n ;
      cout << "The factorial of number entered is : " << FactN(n) << endl ;
    return 0;
}