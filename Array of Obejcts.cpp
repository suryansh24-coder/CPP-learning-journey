#include<iostream>
using namespace std ;

class Student{
int roll ;
public :
Student(){
    cout << "Constructor called " << endl ;
}
void setData(int r){
    roll = r ;
}
void Display(){
    cout << "ROll : " << roll << endl ;
 }
};
int main(){
    Student S[5];
    for(int i=0 ; i<5 ;i++){
        S[i].setData(i+1);
    }

    for(int i=0 ;i<5 ; i++){
        S[i].Display();
    }
    return 0;
}