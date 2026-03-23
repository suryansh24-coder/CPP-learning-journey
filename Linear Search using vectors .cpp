#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int main(){
    int size , Snum;
    cout << "Enter the size of the array : " ;
    cin >> size ;
    vector<int> num(size) ;
    cout << "Enter " << size << " elements in the array : " << endl ;
    for(int i= 0 ;i <size ;i++){
        cin >> num[i] ;
    }
    cout << "The entered array is : " << endl ;
    for(int i =0 ; i<size ;i++){
        cout << num[i] << "  "; 
    } 
    cout << "\nEnter the number to be searched : " ;
    cin >> Snum ;
    bool found = false ; 
    for(int i =0 ; i <size ;i++){
      if(Snum == num[i]){
        cout << "Element found at :  " << i << endl ; 
        found = true ;
        break ;
      }
    }
    if(!found){
         cout << "Element not found ! " << endl ; 
       }

    return 0;
}

