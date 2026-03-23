#include<iostream>
using namespace std ;

int Sum_Array(int arr[],int size  ){
    int sum =0 ;
    for(int i=0 ; i<size ;i++){
        sum = sum + arr[i];
    }
    cout << "The sum of of elements of array is  : " << sum << endl ;
    return sum ;
}
int main(){
    int size ;
    cout << "Enter the size of array : " ;
    cin >> size ;
    int arr[size] ;
    cout << "Enter " << size << " elements in the array : " << endl ;
    for(int i =0 ;i <size ;i++){
        cin >> arr[i] ;
    }
    Sum_Array(arr, size ) ;
    return 0;
}