#include<iostream>
using namespace std ;

class Dog{
  public :
      int sound;
      void bark(){
         cout << " Hello I'm a dog ! "<< sound << endl;
      }
};

int main(){
     Dog D;
     D.bark();
    return 0;
}