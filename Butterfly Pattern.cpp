#include<iostream>
using namespace std ;
int main(){
// butterfly pattern :
   int n;
    cout << "Enter the number: ";
    cin >> n;

    // Upper Butterfly
    for (int i = 0; i < n; i++) {

        // Left stars
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    // Lower Butterfly (SEPARATE loop)
    for (int i = n - 1; i >= 0; i--) {

        // Left stars
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }

        // Spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }

        // Right stars
        for (int j = 0; j < i + 1; j++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}