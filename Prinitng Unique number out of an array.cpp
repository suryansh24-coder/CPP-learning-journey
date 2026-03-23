#include<iostream>
#include<vector>
using namespace std;

int main(){
    int size ;
    cout<< "Enter the size of the vector : " ;
    cin >> size ;
    vector<int> nums(size) ;
    cout << "Enter " << size << " elements in the array : " << endl ;
    for(int i=0 ; i<size ; i++){
        cin >> nums[i] ;
    } 
    cout << "The entered array is : " << " " ;
    for(int i : nums ){
        cout << i << "  " ;
    }
    int unique = 0 ;
    for(int val : nums){
        unique = unique ^ val ;
    }
    cout << "\nThe Unique number out of array is : " << unique << endl ;
    return 0;
}