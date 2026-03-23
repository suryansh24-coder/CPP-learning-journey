#include<iostream> 
using namespace std ;

class father {
  public :
  void showdad(){
    cout << "Hello I'm Father !" << endl ;
  }
};
class Mother{
    public :
    void showmom(){
        cout << "Hello I'm Mother !" << endl ; 
    }
};
class child : public father , public Mother{
  public : 
  void show(){
    cout << "Hello I'm Baby of father and mother ! " << endl ;
  }
};

int main(){
    child c ;
    c.showdad();
    c.showmom();
    c.show();
    return 0;
}