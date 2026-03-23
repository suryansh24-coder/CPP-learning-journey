#include<iostream>
#include<string>
using namespace std ;

class Teacher{
  public :
   void Teach(){
    cout << "--------------------------------------------" << endl ;
    cout << "Teaching Students " << endl ;
    cout << "--------------------------------------------" << endl ;
   }
};
class Reasearch{
  public :
   void research(){
    cout << "Doing research work." << endl ;
    cout << "--------------------------------------------" << endl ;
   }
};
class professor : public Teacher , public Reasearch {
    public :
    void info(){
    cout << "Professor is the instructor for career. " << endl ;
    cout << "--------------------------------------------" << endl ;
  }
};
int main(){
    professor p ;
    p.Teach() ;
    p.research() ;
    p.info() ;

    return 0 ;
}
