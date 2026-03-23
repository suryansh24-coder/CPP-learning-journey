#include<iostream>
using namespace std ;

class ATM{
   private :
     int pin ;
     
   public :
     void setPin(int p){
       pin = p ;
     }

   public :
    void verifyPin(int enteredPin){
        if(enteredPin == pin){
            cout << "Access Granted !" << endl ;
        }
        else{
            cout << "Access Denied !" << endl ;
        }
    }
};

int main(){
  ATM A;
      int setPin ,enteredPin;
      
      cout << "Set your ATM PIN :" ;
      cin >> setPin ;
      A.setPin(setPin); // user input :

      cout << "Enter your PIN to verify :" ;
      cin >> enteredPin ;

      A.verifyPin(enteredPin); // message

      return 0;
}