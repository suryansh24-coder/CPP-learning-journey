#include<iostream>
using namespace std ;

class Test{
    public :
    Test(){
        cout << "Constructor Called" << endl ;
    }
};

int main(){
    Test *ptr ;
    ptr = new Test[3]; // Dynamic Array of object 
    delete[] ptr ;
    return 0;
}