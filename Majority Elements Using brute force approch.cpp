// Majority Elements Problem : Solving by brute force approch : -
#include<iostream>
#include<vector>
#include<algorithm> 
using namespace std ;

int Majority_Elements(vector<int> nums ) {
    int n = nums.size() ;
    for(int val : nums){
        int frequency = 0 ;
        for(int elements : nums){
            if(elements == val){
                frequency++ ; 
            }
         }
        if(frequency>n/2){
            return val ;
          }
        }
    return -1 ;
}
int main(){
    vector<int> nums={1,2,5,1,1,2,1,5,1} ;
    int majority = Majority_Elements(nums);

    if (majority != -1) {
        cout << "Majority element is: " << majority << endl;
    } else {
        cout << "No majority element found." << endl;
    }

    return 0 ;
}