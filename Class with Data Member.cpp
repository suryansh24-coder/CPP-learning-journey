#include<iostream>
using namespace std ;

class Student{
    public :
    int rollno ;
    void displayRoll(){
        cout<< "The student's roll no. is : \t" << rollno << endl ;
    }
};

int main(){
    Student S;
    cout<< "Enter the roll number : \t" << endl ;
    cin >> S.rollno ;
    S.displayRoll();
    return 0;
}