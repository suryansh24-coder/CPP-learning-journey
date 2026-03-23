// Majority Elements Problem : Solving by Optimal approch : -
#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std ;

int Majority_Elements(vector<int> nums) {
  int n = nums.size() ;
  
  sort(nums.begin(), nums.end()) ;
  int freq = 1 , ans = nums[0] ;
  
  for(int i=0 ;i<n ; i++){
    if(nums[i] == nums[i-1]){
        freq++ ;
    }
    else{
        freq =1 ;
        ans = nums[i];
    }
    if(freq>n/2){
        return ans ;
    }
  }
 return ans ;
}

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
    int majority = Majority_Elements(nums) ;
    cout << "\nMajority element in array : " << majority << endl ;
    return 0 ;
}