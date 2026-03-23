#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int main(){
    int size ;
      cout << "Enter the size of the array : " ;
      cin >> size ;
    vector<int> nums(size);
    cout<<"Enter " << size << " elements in the array : " << endl ; //Entering the array : 
    for(int i=0 ;i< size ;i++){
        cin >> nums[i] ;
    }
    // Printing the Array inserted :
    cout << "The entered array is : " << endl ;
    for(int i=0 ; i<size ;i++){
        cout << nums[i] << " " ;
    } 
    cout << endl ;
    // Sorting Array :
    for(int i =0 ;i< size ; i++){
        for(int j=0 ; j <size ;j++){
            if(nums[j]>nums[j+1]){
                swap(nums[j],nums[j+1]);
            }
        }
    }
     // Printing array after Sorting  : 
    cout << "The array after sorting elements is : " << endl ;
    for(int i=0 ; i<nums.size() ;i++){
        cout << nums[i] << " " ;
    } 

    // Pushing Zeros to back : 
    for(int i=0 ; i<nums.size() ;i++){
        if(nums[i]==0){
            swap(nums[i],nums[size]) ;
        }
    }
    // Printing array after Sorting  : 
    cout << "\nThe array after sorting elements is : " << endl ;
    for(int i=0 ; i<nums.size() ;i++){
        cout << nums[i] << " " ;
    } 
    return 0 ; 
}