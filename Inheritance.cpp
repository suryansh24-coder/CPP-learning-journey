#include<iostream>
using namespace std ;

class parent {
      public :
         int id_p;
};

class child : public parent
{
     public :
          int id_c ;
};

int main(){
    child Obj1 ;
      Obj1.id_c = 7 ;
      Obj1.id_p = 10 ;
    cout << "Child ID is : " << Obj1.id_c << endl ;
    cout << "Parent ID is : " << Obj1.id_p << endl ;
    return 0;
}