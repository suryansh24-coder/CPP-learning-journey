#include<iostream>
using namespace std ;

class Mobile{
   public :
   long long num; // using long long to store a large data type :
   int choose;
      void call(){
        cout << "Calling to this number : \t" << num << endl;
       }
      void message(){
        cout << "Messaging to this number : \t" << num << endl;
       } 
};

int main(){
    Mobile M ;
      cout << "Enter the 10 digit mobile number : \t";
      cin >>M.num ;
      cout << "Enter 1 for calling & 0 for messaging : \t";
      cin >> M.choose ;
      if(M.choose == 1){
        M.call();
      }
      else if(M.choose == 0){
        M.message();
      }
      else{
       cout << "Enter a valid Input !"<< endl ;
      }
    return 0;
}