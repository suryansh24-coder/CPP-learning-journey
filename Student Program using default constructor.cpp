// Programe for student entry using default constructors :-
#include<iostream>
using namespace std ;

class student{
    int roll ;
    public :
    student(); // default constructor declaration :
};
student :: student(){
    cout<<"Enter the roll number : " << " " ;
    cin >> roll ;
    cout << "Roll number : " << roll << endl ;
}
int main(){
    student s1 ;

    return 0;
}