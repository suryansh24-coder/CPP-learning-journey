#include<iostream>
#include<vector>
#include<Algorithm>
using namespace std ;

int main(){
    int size ;
    cout << "Enter the size of the array : " ;
    cin >> size ;
    vector<int> num(size) ;
    cout << "Enter " << size << " elements in the array : " << endl ;
    for(int i=0 ;i<size; i++){
        cin >> num[i] ;
    }
    cout << "The entered array is : " << endl ;
    for(int i=0 ;i <size ;i++){
        cout << num[i] << " " ;
    }
    cout << endl ;
    for(int st =0 ; st < size ;st++){
        for(int end =st ; end<size ; end++){
            for(int i = 0 ; i<=end ;i++){
                cout << num[i] ;
            }
            cout << " " ;
        }
        cout << endl ;
    }
    return 0;
}