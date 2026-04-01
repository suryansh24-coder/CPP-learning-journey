#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // Default constructor
    Student() {
        name = "Unknown";
        age = 0;
    }

    // Parameterized constructor (1 parameter)
    Student(string n) {
        name = n;
        age = 0;
    }

    // Parameterized constructor (2 parameters)
    Student(string n, int a) {
        name = n;
        age = a;
    }
};

int main() {
    Student s1;                 // default
    Student s2("Suryansh");     // one parameter
    Student s3("Rahul", 20);    // two parameters

    cout << s1.name << " " << s1.age << endl;
    cout << s2.name << " " << s2.age << endl;
    cout << s3.name << " " << s3.age << endl;

    return 0;
}