#include<iostream>
using namespace std ;

int decToBin(int decNum){
  int ans = 0,pow = 1 ;
  while(decNum>0){
    int rem = decNum % 2 ;
    decNum /= 2 ;
    ans += (pow*rem);
    pow*=10;
  }
  return ans ; //Binary form :-
}
int main(){
    int decNum ;
    cout << "Enter the number : ";
    cin >> decNum ;
    cout << decToBin(decNum) << endl ;
    return 0 ;
}