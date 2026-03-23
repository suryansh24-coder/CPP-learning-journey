#include<iostream>
using namespace std ;

class Employee {
  public :
   void showDetails(); // methode declaration :
};

// Methode / fuction defination :
void Employee :: showDetails(){
    cout << "Employee details displayed succesfully." << endl ;
} 
int main(){
    Employee E ;
    E.showDetails();
    return 0;
}
