#include <iostream>
using namespace std;

class BankAccount {
public:
    int balance;

    void deposit(int amt) {
        balance = balance + amt;
    }

    void showBalance() {
        cout << "The total available balance is: " << balance << endl;
    }
};

int main() {
    BankAccount B;
    int choose, amt;

    B.balance = 7500;

    cout << "Enter 1 to check balance\nEnter 2 to deposit money\n";
    cin >> choose;

    if (choose == 1) {
        B.showBalance();
    }
    else if (choose == 2) {
        cout << "Enter amount to deposit: ";
        cin >> amt;
        B.deposit(amt);
        B.showBalance();
    }
    else {
        cout << "Enter a valid input!" << endl;
    }

    return 0;
}
