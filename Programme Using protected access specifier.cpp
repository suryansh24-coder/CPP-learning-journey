#include<iostream>
#include<string>
using namespace std ;

class student{
  protected :
  string roll_no ;
  string name ;

  public :
  void setDeails_person(){
    cout << "Enter the candiates name : " << endl; 
    getline(cin ,name) ;
    cout << "Enter the candidates roll number : " << endl ; 
    getline(cin , roll_no) ;
  }
};
class Engineering_Student : public student{
   private :
   string branch ;

   public :
   void setbranch(){
    cout << "Enter the candidates branch : " << endl ;
    getline(cin,branch) ;
   }
   void Display(){
    cout << "--------------------------------------------"<< endl ;
    cout << "The entered roll number is : " << roll_no << endl ;
    cout << "--------------------------------------------"<< endl ;
    cout << "The entered candidate name is : " << name << endl ;
    cout << "--------------------------------------------"<< endl ;
    cout << "The candidates branch is : " << branch << endl ;
    cout << "--------------------------------------------"<< endl ;

  }
};
int main(){
 Engineering_Student ES ;
      ES.setDeails_person();
      ES.setbranch() ;
      ES.Display() ;

    return 0;
}