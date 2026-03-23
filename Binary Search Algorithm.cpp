#include<iostream> 
using namespace std ;

int BinarySearch(int arr[], int size  , int target ,int mid){
    int start=0 , end = size-1 ;
    while (start<=end){
        int mid = start + (end-start)/2 ;
        if(arr[mid]<target){
            start = mid+1 ;
        }
        else if(arr[mid]>target){
            start = mid -1 ;
        }
        else{
            return mid ;
        }
    }
  return mid ;
}
int main(){
    int size , mid ;
    cout<< "Enter the size of the array : " << endl ;
    cin>> size ;
    int arr[size] ;
    cout<< "Enter " << size << " of the array : " << endl ;
    for(int i=0 ; i< size ; i++){
        cin >> arr[i] ;
    }
    int target ; 
    cout << "Enter the element to be searched : "  << " "; 
    cin >> target ;
    BinarySearch(arr, size, target , mid );
    return 0 ; 
}
