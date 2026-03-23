#include<iostream>
#include<vector>
using namespace std ;

int main(){
    int NewElement;
    vector<int > vec={1,2,3,4,5,7,6,8,9,10};
    cout << "Size of vector is : " << vec.size() << endl ; // size function : 
    for(int val : vec){
        cout << val << endl ;
    }
    cout << "Enter the element want to add to the vector : " ;
    cin >> NewElement ;
        vec.push_back(NewElement) ; // push_back function : 
        cout << "After changes  : " << endl ;
        for(int val : vec){
            cout << val << endl ;
        }
         cout << "Size of vector is : " << vec.size() << endl ;
        vec.pop_back() ; // Pop_back function : 
         for(int val : vec){
            cout << val << endl ;
        }
        cout << "After poping " << endl ;
        cout << vec.front() << endl ;
        cout << vec.back()  << endl ;
        cout << vec.at(0) << endl ;
    return 0 ;
}