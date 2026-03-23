#include<iostream>
using namespace std ;

int main(){
    // Floyed's triangle pattern ;
   int n ;
   cout << "Enter the number :  " ;
   cin >> n ;
   int num =1 ;
   for(int i =0; i< n ; i++){
      for(int j=0 ; j<i+1 ; j++){
         cout<< num << " ";
         num++ ;
      }
      cout << endl ;
   }

   // // Floyed's triangle pattern for backward triangle ;
     int n;
     cout << "Enter the number : ";
     cin >> n ;
     int num = 1;
     for (int i = 0; i < n ; i++)
     {
       for(int j= i+1 ; j>0 ; j-- )
       {
         cout << num << " ";
         num++;
       }
       cout << endl ;
     }
     
   // Floyed's triangle pattern charcater version ;
   int n;
   cout << "Enter the number :" ;
   cin >> n;
   char ch ='A';
   for(int i=0; i< n ; i++){
      for(int j=0 ;j <i+1 ; j++){
         cout<< ch << " ";
         ch++ ;
      }
      cout << endl ;
   }

   // Inverted traingle pattern : 
   int n;
   cout << "Enter the number : ";
   cin >> n ;
   for(int i=0 ; i<n ;i++){
      for(int j =0 ; j<i ; j++){
         cout << " ";
      }
         for(int  k = 0 ; k< n-i ; k++ ){
            cout << i+1 ;
         } 
      cout << endl;
   } 

   // Inverted Pyramind :    
   int n;
   cout << "Enter the number : ";
   cin >> n ;
   for(int i=0 ; i<n ;i++){
      for(int j =0 ; j<i ; j++){
         cout << " ";
      }
         for(int  k = 0 ; k< n-i ; k++ ){
            cout << i+1 << " " ;
         } 
      cout << endl;
   } 
   

return 0;
}