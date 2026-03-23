#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      sort(nums.begin(),nums.end()) ;
      auto it = unique(nums.begin(),nums.end());
      nums.erase(it, nums.end());
        
        return nums.size() ;
    }
};
 int main(){
    int size;
    cout << "Enter the size of elements : " ;
    cin >> size;
    vector<int> vec(size) ;
    cout << " Enter " << size << " elements in the array : " ;
    for(int i=0 ; i<size ; i++){
        cin >> vec[i] ;
    }
    Solution S1 ;
    S1.removeDuplicates(vec)  ;
    cout << "The elements are : " ;
    for(int val : vec){
        cout << val << endl ;
    }
  return 0;
}