#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int main(){
    int size ;
    cout << "Enter the size of the array : " ;
    cin >> size ;

    vector<int> nums(size);
    cout << "Enter the " << size << " elements in the array :  " << endl ;
    for(int i =0 ; i< size ; i++){
        cin >> nums[i] ;
    }

    cout << "The entered array is before reversing : " << endl ;
    for(int val : nums){
        cout << val << " " ;
    }
    int start =0 , end = size-1 ;
    while ( start < end){
        swap(nums[start] , nums[end]);
        start++ ;
        end-- ;
    }
    cout << "\nThe array after reversing using vector methode : " << endl ;
    for(int i=0 ; i<size ; i++){
        cout << nums[i] << " " ;
    }
    return 0;
}
