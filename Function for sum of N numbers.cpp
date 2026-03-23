#include<iostream>
using namespace std ;

int sumNnums(int n){
  int sum = 0;
  for(int i=1 ; i<=n ; i++){
    sum+=i;
  }
  return sum ;
}
 int main(){
    int n;
       cout << "Enter the value of N  : " ;
       cin >> n ;
    cout << "Sum of N numbers are : " << sumNnums(n) << endl ;
    return 0;
 }