#include<iostream>
using namespace std ;

int main(){
// Triangle Pattern :-
   int n;
   cout<<"Enter the value of n :";
   cin>> n;
   for(int i=0;i<n ;i++){
      for (int j=0; j<i+1 ; j++){
         cout<<"*"<<"";
      }
      cout<<endl;
   }
   
 // triangular shape with numbers :
   int n;
   cout << "Enter the number : " ;
   cin >> n ;
   for(int i = 0 ; i<n ;i++){
      for(int j= 0 ; j < i+1 ; j++){
         cout << (i+1) << " "; 
      }
      cout << endl ;
   }

  // For character pattern ;
  int n;
  cout << "Enter the number :  " ;
  cin >> n;
  char ch ='A';
  for(int i=0 ; i<n ; i++){
   for(int j=0 ; j<(i+1) ; j++){
      cout << ch << " " ;
   }
   ch++;
   cout << endl ;
  }
// smaller triangle with space : 
  int n; 
  cout << "Enter the number : " ;
  cin >> n;
  for(int i =0 ;i< n ; i++){
   for(int j= 1 ; j<i+1 ;j++){
      cout << j  << " " ;
   }
    cout << endl ;
  }

 // Reverse triangle pattern ;
   int n;
   cout << "Enter the number :";
   cin >> n;
   for(int i=0; i<n ;i++){
      for(int j = i+1 ;j > 0; j--){
         cout << j << " " ;
      }
      cout << endl ;
   }
  return 0;
}

   