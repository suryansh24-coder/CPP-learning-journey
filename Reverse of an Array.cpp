#include<iostream>
using namespace std ;

void Reverse_array(int arr[] ,int size){
    int start = 0 , end = size-1 ;
      while(start < end){
        swap(arr[start],arr[end]) ;
        start ++ , end -- ;
      }
}

int main(){
    int size , start = 0 , end = size -1 ;
    cout << "Enter the size of the array  : " ;
    cin >> size ;
    int arr[size];
    cout << "Enter " << size << " elements of the array : " << endl ;
    for(int i=0 ; i<size ; i++){
        cin >> arr[i] ;
    }
    Reverse_array(arr,size) ;
    cout << "--------\n";
    for(int i = 0 ; i < size ; i++){
        cout << arr[i] << " " ;
    }
    cout << endl ;

  return 0;
}