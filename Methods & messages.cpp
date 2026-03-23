#include<iostream>
using namespace std;

class students{
    public :
    int marks ;
    void display(){ // Methode
      cout << "Marks of student is : " << marks << endl ;
    }
};
int main() {
    students S;
    S.marks=90;
    S.display(); // Calling methode
    return 0;
}