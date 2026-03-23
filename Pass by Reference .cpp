#include<iostream>
using namespace std ;

void Change_Array(int arr[] , int size){
 cout << "In the Function :- " << endl ;    
    for(int i =0 ; i< size ; i++ ){
        arr[i]*= 2 ;
    }
}

int main(){
    int size ;
        cout << "Enter the size of the array : " << endl ;
        cin >> size ;
    int arr[size] ;
        cout << "Enter " << size << " elements in the array  :" ;
        for(int i=0 ; i< size ; i++){
            cin >> arr[i] ;
        }
        Change_Array(arr ,size);
        cout << "The chnages array is  : " << endl ;
        for(int i =0 ;i<size ;i++ ){
            cout << arr[i] << " " ;
        }
        cout << endl ;
    return 0;
}