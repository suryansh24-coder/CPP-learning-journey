#include <iostream>
using namespace std;

void CheckPrime(int n) {
    if (n <= 1) {
        cout << "The number entered is not a prime number !" << endl;
        return;
    }
    if (n == 2) {
        cout << "The number entered is a prime number !!" << endl;
        return;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            cout << "The number entered is not a prime number !" << endl;
            return;
        }
    }
    cout << "The number entered is a prime number !!" << endl;
}

int main() {
    int n;
    cout << "Enter the number : " << endl;
    cin >> n;
    CheckPrime(n);
    return 0;
}
