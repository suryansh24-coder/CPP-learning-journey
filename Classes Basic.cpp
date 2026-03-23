#include<iostream>
using namespace std;

class Hello{
public :
  void sayHello(){
    cout << " \t Hello ! \n \t How are you ? \n" << endl ;
  }
};
int main(){
    Hello H ;
      H.sayHello();
    return 0;
}