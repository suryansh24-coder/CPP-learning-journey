#include<iostream>
#include<vector>
using namespace std ;

int main(){
    int size ;
    cout <<"Enter the size of the array : " ;
    cin >> size ;

    vector<int> nums(size) ;
    cout << "Enter " << size << " elements in the array : " << endl ;
    for(int i=0 ; i< size ; i++){
        cin >> nums[i] ;
    }

    cout << "The entered array is : " << endl ;
    for(int val : nums) {
        cout << val << " " ;
    }
    int product = 1 ;
    cout << "\nThe product of all the elements of the array is : " << endl ;
    for(int i=0 ;i <size ; i++){
        product*=nums[i] ;
    }
    cout << product << endl ;
    return 0;
}