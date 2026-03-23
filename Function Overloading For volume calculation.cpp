#include<iostream>
#include<cmath>
using namespace std ;

const float PI = 3.14159;

class shape{
  public :
  float shapevolume(float x){
     float volume = pow(x,3) ;
     cout <<"The volume of cube is : " << volume << endl ;
     return volume ;
  }
  float shapevolume(float y ,float z){
    float power = pow(y,2);
    float volume = PI*power*z ;
    cout << "The volume of cylinder is : " << volume << endl ;
    return volume ;
  }
  float shapevolume(float a ,int){
    float power = pow(a,3);
    float volume = (4/3)*PI*power ;
    cout << "The volume of sphere is : " << volume  << endl ;
    return volume ;
  }
};
int main(){
    shape s ;
         float a,r,h;
         int shape;
    cout << "\nEnter 1 for cube" << " " <<"\nEnter 2 for cylinder" << " " << "\nEnter 3 for sphere" << " " << endl; 
    cout << "----------------------------------\n" << endl;
    cout <<"Enter the shape :" << " " ;
    cin >> shape ;
    if(shape == 1){
        cout << "Enter the side of cube : " << " ";
        cin >> a ;
        s.shapevolume(a);
    }
    else if(shape == 2){
        cout << "Enter the height of cylinder : " << " " ;
        cin >> h ;
        cout << "Enter the radius of cylinder : " << " " ;
        cin >> r ;
        s.shapevolume(r,h);
    }
    else if (shape == 3){
        cout << "Enter the radius of sphere :" << " ";
        cin >> r ;
        s.shapevolume(r,1);
    }
    else{
       return 0;
    }
    return 0;
}
