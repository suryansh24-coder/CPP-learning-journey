#include<iostream>
using namespace std ;

class Light {
  public :
    void TurnOn(){
        cout << "Light is ON !" << endl ;
    }
    void TurnOff(){
        cout << "Light is OFF !" << endl ;
    }
};

int main(){
    Light L1; // Object 1 :
    Light L2; // Object 2 :

    L1.TurnOn(); // Message to L1 :
    L2.TurnOff(); // Message to L2 :
    return 0;
}