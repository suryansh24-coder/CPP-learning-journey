#include<iostream>
using namespace std ;

int main(){
// // Inverted triangle pyramid character : 
   int n;
   cout<<"Enter the number :" ;
   cin >> n;
   char ch = 'A';
   for(int i=0; i<n ;i++){
      for(int j=0 ; j< i+1 ;  j++){
         cout<< " ";
      }
      for(int k=0 ; k< n-i ; k++){
         cout << ch ;
      }
         ch ++;
      cout << endl ;
   }
   
   
// // Inveretd Traingle pyramid pattern :-
   int n;
   cout<<"Enter the number :" ;
   cin >> n;
   char ch = 'A';
   for(int i=0; i<n ;i++){
      for(int j=0 ; j< i+1 ;  j++){
         cout<< " ";
      }
      for(int k=0 ; k< n-i ; k++){
         cout << ch ;
         ch ++;
      }
      cout << endl ;
   }
   return 0;
}




  
