#include<iostream>
using namespace std ;
int smallest = INT16_MAX    ;
int largest = INT16_MIN ;

int Min_Fun(int arr[], int size){
    for(int i=0 ;i < size ; i++){
        if(arr[i]<smallest){
            smallest = arr[i] ;
        }
    }
    cout << "The smallest value is  : " << smallest  << endl ;
    return smallest ;
}
int Max_Fun(int arr[] , int size ){
   for(int i=0 ;i <size ; i++){
     if(arr[i]>largest){
        largest = arr[i] ;
       }
     }
   cout << "The largest value is  : " << largest << endl ;
   return largest ;
}

int main(){
    int size ;
    cout <<" Enter the size of the array : " << endl ;
    cin >> size ;
    int arr[size] ;
    cout << "Enter " << size << " elements in the array : " << endl ;
    for(int i=0 ; i< size ;i++){
        cin >> arr[i] ;
    }
    Min_Fun(arr , size) ;
    Max_Fun(arr , size) ;
    
    return 0;
}
