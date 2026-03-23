#include<iostream>
using namespace std ;

bool checkPrime(int num){
    if(num<=1){
        return false ;
    }
    if(num==2){
        return true ;
    }
    for(int i=1 ; i*i<=num ; i++){
        if(num%i==0){
          return false ;
        }
    }
    return true ;
}
int main(){
    int N , num ;
    cout << "Enter the range : " ;
    cin >> N ;
    for(int i= 1 ; i<=N ; i++){
        if(checkPrime(i)){
           cout << i << endl ;
        }
    }
    return 0;
}