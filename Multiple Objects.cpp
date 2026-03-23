#include<iostream>
using namespace std ;

class Car{
    public :
    int speed ;
    void showSpeed(){
      cout << "The speed is : "<< speed << endl ;
    }
};

int main(){
    Car C;
    C.speed = 128;
    C.showSpeed();
    return 0;
}