#include<iostream>
#include<string>
using namespace std ;

class Person{
  public :
   string name ;
   void get_name(){
    cout << "Enter the persons name : " << " " ;
    getline(cin,name);
   } 
};
class Student : public Person {
   public :
   string roll_no ;
   void Get_Rollno(){
    cout << "Enter the roll number : " << " " ;
    cin >> roll_no ;
   }
   void Display(){
    cout << "---------------------------------------" << endl ;
    cout << "The Entered name is : " << name << endl ;
    cout << "The Entered Roll no : " << roll_no << endl ;
    cout << "---------------------------------------" << endl ;
   }
};
int main(){
    Student s ;
    s.get_name() ;
    s.Get_Rollno() ;
    s.Display() ;

    return 0;
}