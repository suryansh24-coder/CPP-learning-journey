#include<iostream>
using namespace std ;

class Grandfather{
    public :
    void showGrandFather(){
        cout << "Hello ! I'm Grandfather Gen 1st !" << endl ;
    }
};
class father : public Grandfather{
   public :
   void showfather(){
    cout << "Hello ! I'm father Gen 2nd !" << endl ;
   }
};
class child : public father{
  public :
  void showchild(){
    cout <<"Hello ! I'm child Gen 3rd !" << endl ; 
  }
};
int main(){
    child Obj ;
    Obj.showGrandFather();
    Obj.showfather();
    Obj.showchild();
    return 0 ;
}