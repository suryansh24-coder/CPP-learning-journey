#include<iostream>
using namespace std ;

int FibSeries(int x){
    int a=0 , b= 1 , c ;
    for (int i = 0; i < x; i++)
    {
        cout << a << "  " ;
        c=a+b ;
        a=b ;
        b=c ;
    } 
}
int main(){
    int n ;
    cout << "Enter the no of terms : " << "  ";
    cin >> n ;

    FibSeries(n);
    return 0 ;
}