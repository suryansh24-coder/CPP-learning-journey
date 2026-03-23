#include<iostream>
using namespace std ;

int main(){
    int rows ,coloums ;
    cout << "Enter the rows of the matrix : " ;
    cin >> rows ;
    cout << "Enter the coloums of the matrix : " ;
    cin >> coloums ;
    
    int nums[rows][coloums] ;
    cout << "Enter " << rows << " & " << coloums << " in the array : " <<endl ;
    for(int i=0 ; i <rows;i++){
        for(int j =0 ; j < coloums ; j++){
         cin >> nums[i][j] ;
        }
    }
     cout << "The entered array is : " << endl ;
     for(int i=0 ; i<rows ; i++){
        for(int j =0 ; j <coloums ; j++){
        cout << nums[i][j] << "  "  ;
        }
        cout << endl ;
     } 
    int count=0 ;
       for(int i=0 ; i<rows ; i++){
        for(int j =0 ; j <coloums ; j++){
          if(nums[i][j]!=0){
            count++ ;
          }
        }
     } 
      cout<< "-------------------" << endl ;
      cout << rows << " " << coloums << " " << count << " " << endl ;
      cout<< "-------------------" << endl ;

      for(int i=0 ; i<rows ; i++){
        for(int j =0 ; j <coloums ; j++){
          if(nums[i][j]!=0){
            cout << i << " " << j << " " << nums[i][j] << " "  << endl ;
          }
        }
     } 
    return 0;
}