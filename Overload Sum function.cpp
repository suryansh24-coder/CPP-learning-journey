#include <iostream>
using namespace std;

// Sum of two integers
int sum(int a, int b) {
    return a + b;
}

// Sum of three integers
int sum(int a, int b, int c) {
    return a + b + c;
}

// Sum of two floats
float sum(float a, float b) {
    return a + b;
}

// Sum of int and float
float sum(int a, float b) {
    return a + b;
}

int main() {
    cout << sum(2, 3) << endl;        // calls int sum(int, int)
    cout << sum(2, 3, 4) << endl;     // calls int sum(int, int, int)
    cout << sum(2.5f, 3.5f) << endl;  // calls float sum(float, float)
    cout << sum(5, 2.5f) << endl;     // calls float sum(int, float)

    return 0;
}
