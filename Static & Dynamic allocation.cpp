#include<iostream>
#include<vector>
using namespace std ;

int main(){
    vector<int> vec ;
     vec.push_back(25)  ;
     vec.push_back(105) ;
     vec.push_back(205) ;
     vec.push_back(99)  ;
     vec.push_back(111) ;
     vec.push_back(2)   ;
     cout << "The size is : " << vec.size() << endl ;
     cout << "The capacity is : " << vec.capacity() << endl ;
     return 0 ;
}