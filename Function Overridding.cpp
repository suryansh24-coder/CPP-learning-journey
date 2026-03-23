#include<iostream>
#include<cmath>
using namespace std ;

float PI =3.14 ;

class shape{
  public :
   virtual void display(){
    cout << "Area of shapes" << endl ; 
   }
};
class circle : public shape {
    float r ;
    public :
    void GetInfo(){
      cout << "Enter the radius : " << " "; 
      cin >> r ;
    }
    void Area(){
        int power = pow(r,2);
        cout << "The area of circle is : " << PI*power << endl ;
    }
};
class Rectangle : public shape {
     float l,b ;
     public :
     void GetInfo(){
        cout << "Enter the length of rectangle : " << " ";
        cin >> l ;
        cout<< "Enter the breadth of rectangle : " << " ";
        cin >> b ;
     }
     void Area(){
        cout << "The area of rectangle is : " << l*b << endl ;
     }
};
int main(){
    shape s ;
    Rectangle r ;
    circle c ;
    s.display();
    int shape ;
    cout << "\nEnter 1 for circle.\nEnter 2 for rectangle." << endl ;
    cout << "\n---------------------------\n";
    cin >> shape ;
    if(shape == 1){
        c.display();
        c.GetInfo();
        c.Area() ;
    }
    else if(shape == 2){
        r.display();
        r.GetInfo();
        r.Area();
    }
    else{
        return 0;
    }
    return 0;
}
