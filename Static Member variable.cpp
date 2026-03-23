#include<iostream>
using namespace std ;

class test{
    public :
      static int count ;
};
int test :: count = 123456789 ;
int  main(){
    cout << test:: count << endl ;
} 