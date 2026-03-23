#include<iostream>
using namespace std ;

int main(){
    int n ;
    cout << "Enter the size of array : " << endl ;
    cin >> n ;
    int arr[n] ;
    cout << "Enter " << n << "elements in the array : "  ;
    for(int i=0 ; i< n ; i++){
        cin >> arr[i] ;
    }
    int smallest =INT16_MAX ;
    for(int i =0 ;i< n ; i++){
       if(arr[i]<smallest){
         smallest = arr[i] ; 
      } 
    }
    cout << "Smallest = " << smallest << endl ;
    return 0;
}