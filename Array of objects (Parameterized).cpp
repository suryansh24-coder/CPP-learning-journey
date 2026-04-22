#include<iostream>
using namespace std ;

class Student{
    int roll ;
    public :
    Student(int r){
        roll = r ;
    }
    void display(){
        cout << "Roll : " << roll << endl ;
    }
};
int main(){
    Student s[3] = {Student(1),Student(2),Student(3)} ;
    for(int i=0 ; i<3 ; i++){
        s[i].display();
    }
    return 0;
}