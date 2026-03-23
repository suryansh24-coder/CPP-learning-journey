#include<iostream>
using namespace std ;

int Factorial(int n){
    int fact = 1;
    for(int i =1 ; i<= n ; i++){
        fact*=i ;
    }
    return fact ;
}

int nCr(int n ,int r){
    int fact_n =Factorial(n);
    int fact_r=Factorial(r) ;
    int fact_nr= Factorial(n-r);

    int BiCoeff = fact_n/ (fact_nr*fact_r) ;
    return  BiCoeff ;
}
int main(){
    int n,r ;
    cout << "Enter the value of n : "  << endl ;
    cin >> n ;
    cout << "Enter the value of r : "  << endl ;
    cin >> r ;
    cout << "The Binomial Coeffcient for the enetered value is : " << nCr(n,r) <<  endl ;
    
    return 0;
}