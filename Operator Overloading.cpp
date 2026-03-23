#include<iostream>
using namespace std;

class Distance{
    int meter;
public:
    void getdata(){
        cout<<"Enter distance in meters: ";
        cin>>meter;
    }
    bool operator > (Distance d){
        return meter > d.meter;
    }
    bool operator < (Distance d){
        return meter < d.meter;
    }
};
int main(){
    Distance d1, d2;
    cout<<"Enter first distance\n";
    d1.getdata();
    cout<<"Enter second distance\n";
    d2.getdata();
    if(d1 > d2)
        cout<<"First distance is greater";
    else if(d1 < d2)
        cout<<"Second distance is greater";
    else
        cout<<"Both distances are equal";
    return 0;
}