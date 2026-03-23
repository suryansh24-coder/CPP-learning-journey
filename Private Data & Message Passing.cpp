#include<iostream>
using namespace std ;

class Account {
  private :
     int balance ; //private data 

  public :
     void setBalance (int amt){
        balance = amt;
     }

     int getbalance(){
        return balance ;
     }
};

int main(){
    Account A ;
    A.setBalance(1000);
    cout << "Balance is : " << A.getbalance() << endl ;
    
    return 0;
}