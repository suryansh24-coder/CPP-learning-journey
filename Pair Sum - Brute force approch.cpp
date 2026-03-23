// Pair sum : Brute force approch :-
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

vector<int> Pair_sum(vector<int> nums ,int target){
  vector<int> ans ;
  int n =nums.size() ;
  for(int i= 0 ; i<n ;i++){
    for(int j= i +1  ; j<n ; j++){
        if(nums[i]+ nums[j] == target){
            ans.push_back(i);
            ans.push_back(j);
            return ans ;
        }
    }
  }
  return ans ;
}
int main(){
    int n ;
    cout<< "Enter the size of the array : " ;
    cin >> n;
    vector<int> nums(n) ;
    cout << "Enter " << n << " elements in the array : "<< endl ;
    for(int i=0 ; i<n ;i++){
        cin >> nums[i] ;
    }
    int target ;
    cout << "Enter the target element : " <<  "  " ;
    cin >> target ;
    vector<int> ans = Pair_sum(nums ,target) ;
      if(!ans.empty()){
        cout << ans[0] << " " << ans[1] << endl ;
      }
      else{
        cout << "No such pair exist ! " << endl ;
      }
    return 0;
}