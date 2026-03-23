#include<iostream>
using namespace std ;
  
int main(){
    int n ; 
    cout << "Enter the size of pattern : " << endl ;
    cin >> n ;
    // Upper part :-
    for(int i =0 ; i< n ; i++){
        // right angle triangle :-
        for(int j=0 ;  j< i+1  ; j++){
            cout << "*"  ;
        }
        // First upper space :-
        for(int j=0 ; j < n-i-1  ;j++){
            cout << " " ;
        }
        // Second upper space :-
        for(int j=0 ; j < n-i-1 ; j++){
            cout << " " ;
        }
        // 2nd Right angled triangle :-
        for(int j=0 ; j<i+1 ; j++){
            cout << "*" ;
        }
        cout << endl ;
    }
    // Lower Part :-
    for(int i= n-1  ; i>=0 ; i--){
      // Lower Triangle :-
      for( int j=0 ; j < i+1 ; j++){
        cout << "*" ;
      }
      // Lower space 01 ;
      for(int j=0 ; j < n-i-1 ; j++){
        cout << " " ;
      }
      // Lower space 02 :-
     for(int j=0 ; j<n-i-1 ; j++){
        cout<< " " ;
     }
     for(int j=0 ; j < i+1 ; j++){
        cout << "*" ;
     }
     cout << endl ;
    }
    return 0 ;
}