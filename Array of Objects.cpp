#include<iostream>
using namespace std ;

class Student{
    int roll ;
    public :
    Student(){
        cout <<"Constructor called" << endl ;
    }
    void SetData(int r){
        roll = r ;
    }
    void Display(){
        cout <<"Roll :" << roll << endl ;
    }
};
int main(){
    int size ;
    cout <<"Input the size : " << endl ;
    cin >> size ;
    Student s[size] ;
    for(int i = 0 ;i < size; i++){
        s[i].SetData(i+1) ;
    }
    for(int i =0 ; i <size ;i++){
        s[i].Display() ;
    }
    return 0;
}