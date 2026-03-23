// Finding Maximum subarray using kadanes's algorithum :
#include<iostream>
#include<vector>
#include<Algorithm>
using namespace std ;

int main(){
  int MaxSum = INT16_MIN ;
  int size ;
 cout<< "Enter the size of the array : " << endl ;
 cin >> size ;
vector<int> num(size) ;
  cout << "Enter " << size <<" elements of the array : " << endl ;
  for(int i = 0 ; i<size ;i++){
    cin >> num[i] ;
  }
  cout <<"\nThe entered array is : " << endl ;
  for(int i = 0 ;i< size ;i++){
    cout << num[i] << " " ;
  }
  cout << endl ;
  // Kadane's Algorithm : 
    int CurrSum =0 ;
     for(int val : num){
        CurrSum += val;
        MaxSum = max(CurrSum , MaxSum) ;
        if(CurrSum<0){
            CurrSum = 0 ;
        }
  }
  cout << "Max sum is : " << MaxSum << endl ;
    return 0;
}