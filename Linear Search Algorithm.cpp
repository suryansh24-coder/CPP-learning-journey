#include<iostream>
using namespace std ;

int linearSearch(int arr[] , int size ,int target ){
    for(int i =0 ;i <size ; i++ ){
        if(arr[i] == target){
            cout << "Element founded at index  : " << i << " \n Element is : " << target << endl ;
            return i ; // found :
        }
    }
    cout <<" Element not found !! " << endl ;
    return -1 ; // Not found :
}
int main(){
    int size , target;
    cout << "Enter the size of the array : " ;
    cin >> size ;
    int arr[size] ;
    cout <<"Enter " << size << " elements in the array : " ;
     for (int i = 0; i < size ; i++)
     {
        cin >> arr[i] ;
     }
     cout << "Enter the target element : " ;
     cin >> target ;
      linearSearch(arr ,size ,target) ;
    return 0;
}
