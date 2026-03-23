#include<iostream>
using namespace std;

inline int square(int x){
    return x * x;
}
void greet(string name = "Guest"){
    cout << "Hello " << name << endl;
}
int add(int a, int b){
    return a + b;
}
float add(float a, float b){
    return a + b;
}
int main(){

    int n;

    cout << "Enter a number: ";
    cin >> n;
    cout << "Square = " << square(n) << endl;
    greet();
    greet("Suryansh");
    cout << "Addition (int) = " << add(5,6) << endl;
    cout << "Addition (float) = " << add(2.5f,3.4f) << endl;

    return 0;
}
