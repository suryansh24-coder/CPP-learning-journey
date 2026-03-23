#include<iostream>
using namespace std ;

int  main()
{
    int size ;
    cout << "Enter the size of the array  :" ;
    cin >> size ;
    int arr[size] ;
     cout << "Enter the " << size << " elements in the array : " << " " ;
    for(int i=0 ;i <size ; i++){ 
      cin >> arr [i] ; 
    }

    int largest = INT64_MIN ;
    for(int i =0 ;i<size ;i++){
    // Methode 01 : -
      /*  if(arr[i]>largest){
           largest = arr[i] ;
           }
         }
        */
    // Methode 02 : -
     largest =min(arr[i], largest);
    }
    cout << "The largest number of the array is  : " << largest ;
    cout << endl ;
    
  return 0;
}