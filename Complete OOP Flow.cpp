#include <iostream>
using namespace std;

class Car {
private:
    int speed;   // private data

public:
    void setSpeed(int s) {
        speed = s;
    }

    void accelerate() {
        speed = speed + 10;
    }

    void brake() {
        speed = speed - 10;
    }

    void showSpeed() {
        cout << "Current speed: " << speed << endl;
    }
};

int main() {
    Car C1;   // first object
    Car C2;   // second object

    C1.setSpeed(60);
    C2.setSpeed(80);

    C1.accelerate();   // increase speed of C1
    C2.brake();        // decrease speed of C2

    cout << "Car 1 -> ";
    C1.showSpeed();

    cout << "Car 2 -> ";
    C2.showSpeed();

    return 0;
}
