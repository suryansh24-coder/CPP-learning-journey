// Default Constructor
#include<iostream>
using namespace std ;

class sample{
  public:
  int age;
  sample(){
   age = 18 ;
  }
};

int main(){
    sample s1 ;
    cout << s1.age;
    return 0;
}
// Parameterized  Constructor
#include<iostream>
using namespace std ;

class sample{
  public:
  int age;
  sample(int a){
   age = a ;
  }
};

int main(){
    sample s1(25) ;
    cout << s1.age;
    return 0;
}
// Copy Constructor
#include<iostream>
using namespace std ;

class sample{
  public:
  int age;
  sample(int a){
    age = a ;
  }
  sample(const sample &s){
   age = s.age ;
  }
  void display(){
    cout << age << endl ;
  }
};

int main(){
    sample s1(101);
    sample s2 = s1 ;
    s2.display() ;
    s1.display() ;
    return 0;
}

// Dynamic Constructor
#include<iostream>
using namespace std ;

class sample{
  public:
  int *age;
  sample(int a){
   age = new int ;
   *age = a ;
  }
};

int main(){
    sample s1(25);
    cout << s1.age;
    return 0;
}