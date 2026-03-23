#include<iostream>
#include<vector>
using namespace std ;

int smallest = INT16_MAX ;
int largest  = INT16_MIN ;

int main(){
    int size , MinIndex = 0, MaxIndex = 0 ;
      cout << "Enter the size of the array : " ;
      cin >> size ;
    vector<int> vec(size) ;
      cout << "Enter " << size <<" elements in the array : " ;
    for(int i=0 ; i<size ; i++){
        cin >> vec[i] ;
    }
    cout << "The entered array is : " ;
    for(int val : vec){
        cout << val << " " ;
    }
     for(int i =0 ; i < size ; i++){
       if(smallest > vec[i]){
          smallest = vec[i] ;
          MinIndex = i ; 
       }
       if(largest < vec[i]){
          largest = vec [i];
          MaxIndex = i ;
        }
    }
    
        cout << "\n The smallest value is : " << smallest << " at : " << MinIndex << endl ;
        cout << "\n The largest value is : " << largest  << " at : " << MaxIndex << endl ;
    
    swap(vec[MinIndex], vec[MaxIndex]) ;
    cout << "\n After swapping the values : " << endl ;

    for(int val : vec){
        cout << val << " " ;
    }
    return 0 ;
}