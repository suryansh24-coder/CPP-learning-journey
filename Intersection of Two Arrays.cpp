#include<iostream>
#include<vector>
#include<algorithm>
using namespace std ;

int main(){
    int Sn1, Sn2 ;
    
    cout<< "Enter the size of first array : " ; // Size of First array  :
    cin >> Sn1;

    cout << "\nEnter the size of the second array : " ; // Size of second array : 
    cin >> Sn2 ;

  vector<int> nums1(Sn1) ; 
  vector<int> nums2(Sn2) ;

  cout << "Enter " << Sn1 << " elements in the first array : " << endl ;

  for(int i= 0 ; i<Sn1 ; i++){  // Initializing first array : 
    cin >> nums1[i] ;
    }  
  cout << "\nThe entered elements of array 01 are : " << endl ;
  for(int i= 0 ;i< Sn1  ; i++){ // Printing Frist array : 
    cout << nums1[i] << " " ;
    }
 
  cout << "\nEnter " << Sn2 << " elements in the first array : " << endl ;
  for(int i= 0 ; i<Sn2 ; i++){  // Intitializing second array :
    cin >> nums2[i] ;
    }  
  cout << "\nThe entered elements of array 02 are : " << endl ;
  for(int i= 0 ;i< Sn2 ; i++){ // Printing Second array : 
    cout << nums2[i] << " " ;
   }
 vector<int> Common ; // Finding intersection of arrays and storing in 3 array called common
 
 for(int i= 0 ; i <Sn1 ;i++){

    bool foundInsecond = false ;

    for(int j =0 ; j <Sn2 ; j++){
        for(int k=0 ; k <Common.size() ; k++){
           if(nums1[i] == nums2[j]){
              foundInsecond = true ;
              break ;
            }
        }

        if(!foundInsecond){
            bool  alreadyPresent = false ;
            for(int k =0 ; k<Common.size() ; k++){
               if(Common[k] == nums1[i]){
                alreadyPresent =true ;
                break;
               }
            }

            if(!alreadyPresent){
             Common.push_back(nums1[i]);
            }
          }
        break ;
      }  
   }
 cout << "\nThe Interesection of respective arrays are : " << endl ; // Printing the intersection of respective arrays :
    for(int val : Common){
      cout << val << " " ;
     }

     cout << endl ;
    
     return 0;
}