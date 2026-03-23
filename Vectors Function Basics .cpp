#include<iostream>
#include<vector>
// #include<bits/c++.h>
using namespace std ;

int main(){
    vector<int> vec ; // [Methode 01 for function declaration ]
     cout << vec[0] ;  
    vector<int> vec ={1,2,3,4,5,6} ; // [Methode 02 for function declaration ]
     for(int i=0 ;i <6 ;i ++){
        cout << "Vector : " << vec[i] << endl ;
     }
    vector<int> vec(6,0) ; // [Methode 03 for Vectors function declaration ]
    for(int i : vec){
       cout <<"Vector elements : " << i << endl ; 
      }
     return 0 ;
}