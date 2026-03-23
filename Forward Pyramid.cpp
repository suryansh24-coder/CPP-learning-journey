#include<iostream>
using namespace std ;

int main(){
    // forward pyramid pattern : 
    int n;
    cout << "Enter the number : ";
    cin >> n;

    for(int i=0 ; i< n; i++){
      // Spaces :-(n-i-1)
      for(int j=0; j<n-i-1 ; j++){
         cout << " ";
      }
      //Num 1 :-(i+1) times ;
      for(int j=1; j<= i+1 ; j++){
         cout << j ;
      }
      //Num 2 :- 
      for(int j=i ; j>0 ; j--){
         cout<< j;
      }
      cout << endl ;
    }
    return 0;
   }
