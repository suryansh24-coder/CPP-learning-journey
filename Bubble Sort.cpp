#include<iostream>
#include<vector>
#include<Algorithm>
using namespace std ;

int main(){
    int size ;
    cout << "Enter the size : " << " " ;
    cin >> size ;
    vector<int> num(size) ;
    cout << "Enter " << size << " elements in the vector : " << endl ;
    for(int i = 0 ; i < size ; i++ ){
        cin >> num[i] ;
    }
      cout << "The entered array is : " << endl ;
    for(int i=0 ; i < size ; i++){
        cout << num[i] << " " ;
    }
    for(int i = 0 ; i< size ; i++ ){
        for(int j=0 ; j < size - i -1 ; j++){
            if(num[j] > num[j+1]){
                swap(num[j],num[j+1]);
            }
        }
    }
    cout << " \nThe sorted array is : " << endl ;
    for(int i=0 ; i< size ;i++){
        cout << num[i] << " " ; 
    }
    return 0 ;
}
