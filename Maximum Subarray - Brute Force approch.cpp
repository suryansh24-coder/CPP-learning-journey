// Finding Sum of maximum subarray using brute force approch . So complexity will be very poor.
#include<iostream>
#include<vector>
using namespace std ;

int main(){
    int MaxSum = INT16_MIN ;
    int size ;
    cout << "Enter the size of the array : " ;
    cin >> size ;
    vector<int> nums(size);
    cout << "Enter " << size << " elements in the array : " << endl ;
    for(int i=0 ; i<size ;i++){
        cin >> nums[i] ;
    }
    cout << "The entered array is : " << endl; 
    for(int i=0 ; i < size  ; i++){
        cout << nums[i] << " " ;
    }
    cout << endl ;
    for(int st =0 ; st < size ; st++){
       int CurrSum = 0 ;
        for(int end =st ; end < size ; end++){
            CurrSum+= nums[end] ;
            MaxSum = max(nums[st],nums[end]);
        } 
    } 
    cout << "The maximum sum is : " << MaxSum  << endl ;
    return 0;
}